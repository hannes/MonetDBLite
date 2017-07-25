# MAPI implementation for R

PROTOCOL_v9 <- 9
PROTOCOL_v10 <- 10

MAX_PACKET_SIZE <- 8192


HASH_ALGOS <- c("md5", "sha1", "crc32", "sha256", "sha512")

MSG_REDIRECT <- "^"
MSG_MESSAGE  <- "!"
MSG_PROMPT   <- ""
MSG_QUERY    <- "&"
MSG_SCHEMA_HEADER <- "%"
MSG_ASYNC_REPLY <- "_"


Q_TABLE       <- 1 
Q_UPDATE      <- 2 
Q_CREATE      <- 3
Q_TRANSACTION <- 4
Q_PREPARE     <- 5
Q_BLOCK       <- 6

TIMEOUT_MSG = "Empty response from MonetDB server, probably a timeout. You can increase the time to wait for responses with the 'timeout' parameter to 'dbConnect()'."


REPLY_SIZE    <- 10000 # Apparently, -1 means unlimited, but we will start with a small result set. 
# The entire set might never be fetch()'ed after all!

# .mapiRead and .mapiWrite implement MonetDB's MAPI protocol. It works as follows: 
# Ontop of the socket stream, blocks are being sent. Each block has a two-byte header. 
# MAPI protocol messages are sent as one or more blocks in both directions.
# The block header contains two pieces of information: 1) the amount of bytes in the block, 
# 2) a flag indicating whether the block is the final block of a message.

# this is a combination of read and write to synchronize access to the socket. 
# otherwise, we could have issues with finalizers

.mapiRequest <- function(conObj, msg, async=FALSE) {
  # call finalizers on disused objects. At least avoids concurrent access to socket.
  #gc()
  
  if (!identical(class(conObj)[[1]], "MonetDBConnection"))
    stop("I can only be called with a MonetDBConnection as parameter, not a socket.")
  
  # ugly effect of finalizers, sometimes, single-threaded R can get concurrent calls to this method.
  if (conObj@connenv$lock > 0) {
    if (async) {
      if (getOption("monetdb.debug.mapi", F)) message("II: Attempted parallel access to socket. ",
                                                      "Deferred query '", msg, "'")
      conObj@connenv$deferred <- c(conObj@connenv$deferred, msg)
      return("_")
    } else {
      stop("II: Attempted parallel access to socket. Use only dbSendUpdateAsync() from finalizers.")
    }
  }
  
  # add exit handler that will clean up the socket and release the lock.
  # just in case someone (Anthony!) uses ESC or CTRL-C while running some long running query.
  on.exit(.mapiCleanup(conObj), add=TRUE)
  
  # prevent other calls to .mapiRequest while we are doing something on this connection.
  conObj@connenv$lock <- 1
  
  # send payload and read response		
 
  .mapiWrite(conObj@connenv$socket, msg)
  resp <- .mapiRead(conObj@connenv$socket)
  
  # get deferred statements from deferred list and execute
  while (length(conObj@connenv$deferred) > 0) {
    # take element, execute, check response for prompt
    dmesg <- conObj@connenv$deferred[[1]]
    conObj@connenv$deferred[[1]] <- NULL
    .mapiWrite(conObj@connenv$socket, dmesg)
    dresp <- .mapiParseResponse(conObj@connenv$socket, .mapiRead(conObj@connenv$socket))
    if (dresp$type == MSG_MESSAGE) {
      conObj@connenv$lock <- 0
      warning(paste("II: Failed to execute deferred statement '", dmesg, "'. Server said: '", 
                    dresp$message, "'"))
    }
  }	
  # release lock
  conObj@connenv$lock <- 0
  
  return(resp)
}


.mapiConnect <- function(host, port, timeout) {
  socketConnection(host = host, port = port, blocking = TRUE, open="r+b", timeout = timeout)
}

.mapiDisconnect <- function(socket) {
  tryCatch(close(socket), error=function(e){}, warning=function(w){})
}

.mapiCleanup <- function(conObj) {
  if (conObj@connenv$lock > 0) {
    if (getOption("monetdb.debug.query", F)) message("II: Interrupted query execution.")
    conObj@connenv$lock <- 0
  }
}

.mapiRead <- function(con) {
  if (!identical(class(con)[[1]], "sockconn"))
    stop("I can only be called with a MonetDB connection object as parameter.")
  resp <- raw()

  prot <- attr(con, "protocol")
  if (is.null(prot)) prot <- PROTOCOL_v9

  repeat {

    if (prot == PROTOCOL_v10) {
      unpacked <- readBin(con, "integer", n=2, size=4, signed=TRUE, endian="little")
      if (length(unpacked) == 0 || unpacked[2] != 0) {
        print(unpacked)
        stop(TIMEOUT_MSG)
      }

      length <- bitwShiftR(unpacked[1], 1)
      final  <- bitwAnd(unpacked[1], 1)
    }
    else {
      unpacked <- readBin(con, "integer", n=1, size=2, signed=FALSE, endian="little")
      if (length(unpacked) == 0) {
        stop(TIMEOUT_MSG, "aaah")
      }

      length <- bitwShiftR(unpacked, 1)
      final  <- bitwAnd(unpacked, 1)
    }
    if (length == 0) break
    # no raw handling here (see .mapiWrite), since server tells us the length in bytes already
    resp <- c(resp, readBin(con, "raw", length, 1)) 
    print(str(resp))   
    if (final == 1) break
  }
  return(resp)
}

.mapiWrite <- function(con, msg) {
  # R implementation
  if (!identical(class(con)[[1]], "sockconn"))
    stop("I can only be called with a MonetDB connection object as parameter.")
  final <- FALSE
  pos <- 0


  prot <- attr(con, "protocol")
  if (is.null(prot)) prot <- PROTOCOL_v9

  write_size <- MAX_PACKET_SIZE
  if (prot == PROTOCOL_v10) {
    write_size <-  1000000
  }

  if (getOption("monetdb.debug.mapi", F))  message("TX: '", msg)
  # convert to raw byte array, otherwise multibyte characters are 'difficult'
  msgr <- charToRaw(msg)
  msglen <- length(msgr)
  while (!final) {
    bytes <- min(write_size, msglen - pos)
    reqr <- msgr[(pos + 1) : (pos + bytes)]
    pos <- pos + bytes
    final <- max(msglen - pos, 0) == 0            
    if (prot == PROTOCOL_v10) {
      header <- c(as.integer(bitwOr(bitwShiftL(bytes, 1), as.numeric(final))), 0L)
      writeBin(header, con, 4, endian="little")
    } else {
      header <- as.integer(bitwOr(bitwShiftL(bytes, 1), as.numeric(final)))
      writeBin(header, con, 2, endian="little")
    }
    writeBin(reqr, con, endian="little")
  }
  flush(con)
  return(NULL)
}

.mapiCleanup <- function(conObj) {
  if (conObj@connenv$lock > 0) {
    if (getOption("monetdb.debug.query", F)) message("II: Interrupted query execution.")
    conObj@connenv$lock <- 0
  }
}

.mapiLongInt <- function(someint) {
  stopifnot(length(someint) == 1)
  formatC(someint, format="d")
}

readLongAsDbl <- function(con) {
    raw_val <- as.numeric(readBin(con, "integer", 2, 4))
    raw_val[1] + raw_val[2] * 2^32
}

findString <- function(resp, start_idx) {
  while (start_idx < length(resp) && resp[start_idx] != 0L) {
      start_idx <- start_idx + 1
  }
  start_idx
}

# determines and partially parses the answer from the server in response to a query
.mapiParseResponse <- function(con, response) {
  if (response[1] == 42L) {
    if (getOption("monetdb.debug.query", F)) message("QQ: PROT10 query result")
    env <- new.env(parent=emptyenv())
    env$type  <- Q_TABLE

    dd <- rawConnection(response)
    # throw away first two characters
    readBin(dd, "raw", 2, 1)

    env$id            <- readBin(dd, "integer", 1, 4)
    env$qid           <- readLongAsDbl(dd)
    env$rows          <- readLongAsDbl(dd)
    env$cols          <- readLongAsDbl(dd)
    env$tz            <- readBin(dd, "integer", 1, 4)
    env$tables        <- character(env$cols)
    env$names         <- character(env$cols)
    env$types         <- character(env$cols)
    env$nulls         <- list(env$cols)
    env$precision     <- integer(env$cols)
    env$scale         <- integer(env$cols)
    env$internal_size <- integer(env$cols)
    env$index         <- 0

    idx <- 35

    for (c in seq(env$cols)) {
      nidx <- findString(response, idx)
      env$tables[c] <- readChar(dd, nidx-idx)
      readBin(dd, "raw", 1, 1)
      idx <- nidx + 1

      nidx <- findString(response, idx)
      env$names[c] <- readChar(dd, nidx-idx)
      readBin(dd, "raw", 1, 1)
      idx <- nidx + 1

      nidx <- findString(response, idx)
      env$types[c] <- toupper(readChar(dd, nidx-idx))
      readBin(dd, "raw", 1, 1)

      idx <- nidx + 1

      env$internal_size[c] <- readBin(dd, "integer", 1, 4)
      env$precision[c] <- readBin(dd, "integer", 1, 4)
      env$scale[c] <- readBin(dd, "integer", 1, 4)
      null_length <- readBin(dd, "integer", 1, 4)

      if (null_length > 0) {
        env$nulls[c] <- readBin(dd, "raw", null_length, 1)
      } else {
        env$nulls[c] <- NA
      } 
      
      # skip print width  
      readBin(dd, "raw", 8, 1)
      idx <- idx + 24
    }

    # consume prompt
    .mapiRead(con)

    return(env)
  }

  if (response[1] == 43L || response[1] == 44L) {
    stop("fuu")
  }

  response = rawToChar(response)

  if (response == MSG_PROMPT) { # prompt
    return(list(type = MSG_PROMPT))
  }
  lines <- strsplit(response, "\n", fixed=TRUE, useBytes=TRUE)[[1]]
  if (length(lines) < 1) {
    stop("Invalid response from server. Try re-connecting.")
  }
  typeLine <- lines[[1]]
  resKey <- substring(typeLine, 1, 1)
  
  if (resKey == MSG_ASYNC_REPLY) {
    return(list(type=MSG_ASYNC_REPLY))
  }
  if (resKey == MSG_MESSAGE) {
    return(list(type=MSG_MESSAGE, message=typeLine))
  }
  if (resKey == MSG_QUERY) {
    typeKey <- as.integer(substring(typeLine, 2, 2))
    env <- new.env(parent=emptyenv())
    
    # Query results
    if (typeKey == Q_TABLE || typeKey == Q_PREPARE) {
      header <- .mapiParseHeader(lines[1])
      if (getOption("monetdb.debug.query", F)) message("QQ: Query result for query ", header$id, 
                                                       " with ", .mapiLongInt(header$rows), " rows and ", 
                                                       header$cols, " cols, ", header$index, " rows.")
      
      env$type	<- Q_TABLE
      env$id		<- header$id
      env$rows	<- header$rows
      env$cols	<- header$cols
      env$index	<- header$index
      env$tables	<- .mapiParseTableHeader(lines[2])
      env$names	<- .mapiParseTableHeader(lines[3])
      env$types	<- env$dbtypes <- toupper(.mapiParseTableHeader(lines[4]))
      env$lengths	<- .mapiParseTableHeader(lines[5])
      
      if (env$rows > 0) env$tuples <- lines[6:length(lines)]

      return(env)
    }
    # Continuation of Q_TABLE without headers describing table structure
    if (typeKey == Q_BLOCK) {
      header <- .mapiParseHeader(lines[1], TRUE)
      if (getOption("monetdb.debug.query", F)) message("QQ: Continuation for query ", header$id, 
                                                       " with ", header$rows, " rows and ", header$cols, " cols, index ", header$inde, ".")
      
      env$type	<- Q_BLOCK
      env$id		<- header$id
      env$rows	<- header$rows
      env$cols	<- header$cols
      env$index	<- header$index
      env$tuples <- lines[2:length(lines)]
      
      stopifnot(length(env$tuples) == header$rows)
      
      return(env)
    }
    
    # Result of db-altering query
    if (typeKey == Q_UPDATE || typeKey == Q_CREATE) {
      header <- .mapiParseHeader(lines[1], TRUE)
      
      env$type	<- Q_UPDATE
      env$id		<- header$id
      env$rows  <- 0
      return(env)			
    }
    # FIXME
    if (typeKey == Q_TRANSACTION) {
      env$type	<- Q_UPDATE
      # no need to check the returned values, as there is none. If we get no error, all is well.
      return(env)
    }
  }
}

.mapiParseHeader <- function(line, stupidInverseColsRows=FALSE) {
  tableinfo <- strsplit(line, " ", fixed=TRUE, useBytes=TRUE)[[1]]
    
  id    <- as.numeric(tableinfo[2])
  if (!stupidInverseColsRows) {
    rows  <- as.numeric(tableinfo[3])
    cols  <- as.numeric(tableinfo[4])
  }
  else {
    rows  <- as.numeric(tableinfo[4])
    cols  <- as.numeric(tableinfo[3])
  }
  index <- as.numeric(tableinfo[5])
  
  return(list(id=id, rows=rows, cols=cols, index=index))
}

.mapiParseTableHeader <- function(line) {
  first <- strsplit(substr(line, 3, nchar(line)), " #", fixed=TRUE, useBytes=TRUE)
  second <- strsplit(first[[1]][1], ",\t", fixed=TRUE, useBytes=TRUE)
  second[[1]]
}

# authenticates the client against the MonetDB server. This is the first thing that happens
# on each connection. The server starts by sending a challenge, to which we respond by
# hashing our login information using the server-requested hashing algorithm and its salt.

.mapiAuthenticate <- function(con, dbname, user="monetdb", password="monetdb", 
                               endhashfunc="sha512", language="sql") {
  
  endhashfunc <- tolower(endhashfunc)
  # read challenge from server, it looks like this
  # oRzY7XZr1EfNWETqU6b2:merovingian:9:RIPEMD160, SHA256, SHA1, MD5:LIT:SHA512:
  # salt:protocol:protocolversion:hashfunctions:endianness:hashrequested
  challenge <- rawToChar(.mapiRead(con))
  credentials <- strsplit(challenge, ":", fixed=TRUE)
  
  algos <- strsplit(credentials[[1]][4], ", ", fixed=TRUE)
  protocolVersion <- credentials[[1]][3]
  
  if (protocolVersion != PROTOCOL_v9) {
    stop("Protocol versions != 9 NOT SUPPORTED")
  }
  attr(con, "protocol") <- PROTOCOL_v9

  if (grepl("PROT10", algos) && !getOption('monetdb.disable.prot10', FALSE)) {
    protocolVersion <- PROTOCOL_v10
  }

  pwhashfunc <- tolower(credentials[[1]][6])
  salt <- credentials[[1]][1]
  
  if (!(endhashfunc %in% HASH_ALGOS)) {
    stop("Server-requested end hash function ", endhashfunc, " is not available")
  }
  
  if (!(pwhashfunc %in% HASH_ALGOS)) {
    stop("Server-requested password hash function ", pwhashfunc, " is not available")
  }
  
  # We first hash the password with the server-requested hash function 
  # (SHA512 in the example above).
  # then, we hash that hash together with the server-provided salt using 
  # a hash function from the list provided by the server. 
  # By default, we use SHA512 for both.
  hashsum <- digest(paste0(digest(password, algo=pwhashfunc, serialize=FALSE), salt), 
                    algo=endhashfunc, serialize=FALSE)	
  
  # we respond to the authentication challeng with something like
  # LIT:monetdb:{SHA512}eec43c24242[...]cc33147:sql:acs
  # endianness:username:passwordhash:language:databasename

  # TODO: make block size a parameter (twice!)
  authString <- paste0("LIT:", user, ":{", toupper(endhashfunc), "}", hashsum, ":", language, ":", 
                       dbname, ":", if(protocolVersion == PROTOCOL_v10) "PROT10:COMPRESSION_NONE:1000000" )
 
  .mapiWrite(con, authString)
  attr(con, "protocol") <- protocolVersion
  authResponse <- rawToChar(.mapiRead(con))
  respKey <- substring(authResponse, 1, 1)
  
  if (respKey != MSG_PROMPT) {
    if (respKey == MSG_REDIRECT) {
      redirects <- strsplit(authResponse, "\n", fixed=TRUE)
      link <- substr(redirects[[1]][1], 7, nchar(redirects[[1]][1]))
      
      redirect <- strsplit(link, "://", fixed=TRUE)
      protocol <- redirect[[1]][1]
      if (protocol == "merovingian") {
        # retry auth on same connection, we will get a new challenge
        .mapiAuthenticate(con, dbname, user, password, endhashfunc, language)
      }
      if (protocol == "monetdb") {
        stop("Forwarding to another server (", link, ") not supported.")
      }
    }
    if (respKey == MSG_MESSAGE) {
      stop(paste("Authentication error:", authResponse))
    }
  } else {
    if (getOption("monetdb.debug.mapi", F)) message("II: Authentication successful.")
    # setting some server parameters...not sure if this should happen here
    if (language == "sql") {
      .mapiWrite(con, paste0("Xreply_size ", REPLY_SIZE)); .mapiRead(con)
      .mapiWrite(con, "Xauto_commit 1"); .mapiRead(con)
    }
  }
  return(con)
}

.monetdbd.command <- function(passphrase, host="localhost", port=50000L, timeout=86400L) {
  socket <- .mapiConnect(host, port, timeout)
  .mapiAuthenticate(socket, "merovingian", "monetdb", passphrase, language="control")
  ret <- .mapiRequest(socket, "#all status\n")
  .mapiDisconnect(socket)
  return (ret)
}

