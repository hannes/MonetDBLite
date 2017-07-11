# C library that contains our MAPI string splitting state machine
C_LIBRARY <- "libmonetdb5"

# Make S4 aware of S3 classes
# setOldClass(c("sockconn", "connection"))

### MonetDBDriver
setClass("MonetDBDriver", representation("DBIDriver"))
setClass("MonetDBEmbeddedDriver", representation("MonetDBDriver"))

# allow instantiation of this driver with MonetDB to allow existing programs to work
MonetR <- MonetDB <- MonetDBR <- MonetDB.R <- RMonetDB <- function() new("MonetDBDriver")

MonetDBLite <- monetdblite <- RMonetDBLite <- rmonetdblite <- function() new("MonetDBEmbeddedDriver")

setMethod("dbIsValid", "MonetDBDriver", def=function(dbObj, ...) invisible(TRUE))

setMethod("dbUnloadDriver", "MonetDBDriver", def=function(drv, ...) invisible(TRUE))

setMethod("dbGetInfo", "MonetDBDriver", def=function(dbObj, ...)
  
  list(name            = "MonetDBDriver", 
       driver.version  = utils::packageVersion("MonetDBLite"), 
       DBI.version     = utils::packageVersion("DBI"), 
       client.version  = utils::packageVersion("MonetDBLite"), 
       max.connections = 125) # R can only handle 128 connections, three of which are pre-allocated
)

# shorthand for connecting to the DB, very handy, e.g. dbListTables(mc("acs"))
mc <- function(dbname="demo", user="monetdb", password="monetdb", host="localhost", port=50000L, 
               timeout=60L, wait=FALSE, language="sql", ...) {
  
  dbConnect(MonetDB.R(), dbname, user, password, host, port, timeout, wait, language, ...)
}

# shorthand for connecting to the DB, very handy, e.g. dbListTables(ml(tempdir()))
ml <- function(...) {
  dbConnect(MonetDBLite(),...)
}


check_flag <- function(x) {
  if (is.null(x)   || is.na(x) || !is.logical(x) || length(x) != 1) {
    stop("flags need to be scalar logicals")
  }
}


setMethod("dbConnect", "MonetDBDriver", def=function(drv, dbname="demo", user="monetdb", 
                                                     password="monetdb", host="localhost", port=50000L, timeout=60L, wait=FALSE, language="sql", embedded=FALSE,
                                                     ..., url="") {
  

  if (substring(url, 1, 10) == "monetdb://" || substring(url, 1, 12) == "monetdblite:") {
    dbname <- url
  }
  timeout <- as.integer(timeout)
  
  if (substring(dbname, 1, 10) == "monetdb://") {
    rest <- substring(dbname, 11, nchar(dbname))
    # split at /, so we get the dbname
    slashsplit <- strsplit(rest, "/", fixed=TRUE)
    hostport <- slashsplit[[1]][1]
    dbname <- slashsplit[[1]][2]
    
    # count the number of : in the string
    ndc <- nchar(hostport) - nchar(gsub(":","",hostport,fixed=T))
    if (ndc == 0) {
      host <- hostport
    }
    if (ndc == 1) { # ipv4 case, any ipv6 address has more than one :
      hostportsplit <- strsplit(hostport, ":", fixed=TRUE)
      host <- hostportsplit[[1]][1]
      port <- hostportsplit[[1]][2]
    }
    if (ndc > 1) { # ipv6 case, now we only need to check for ]:
      if (length(grep("]:", hostport, fixed=TRUE)) == 1) { # ipv6 with port number
        hostportsplit <- strsplit(hostport, "]:", fixed=TRUE)
        host <- substring(hostportsplit[[1]][1],2)
        port <- hostportsplit[[1]][2]
      }
      else {
        host <- hostport
      }
    }
  }
  # this is important, otherwise we'll trip an assertion
  port <- as.integer(port)
  # validate port number
  if (length(port) != 1 || port < 1 || port > 65535) {
    stop("Illegal port number ",port)
  }

  # support monetdblite:/db/dir urls to fool sqlsurvey
  if (substring(dbname, 1, 12) == "monetdblite:") {
    embedded <- substring(dbname, 13, nchar(dbname))
  }

  if (inherits(drv, "MonetDBEmbeddedDriver") && missing(embedded)) {
    if (missing(dbname)) embedded <- tempdir()
    else embedded <- dbname
  }

  if (embedded != FALSE) {
    monetdb_embedded_startup(embedded, !getOption("monetdb.debug.embedded", FALSE), 
      getOption("monetdb.sequential", FALSE))
    connenv <- new.env(parent=emptyenv())
    connenv$conn <- monetdb_embedded_connect()
    connenv$open <- TRUE
    connenv$autocommit <- TRUE
    connenv$resultsets = 0
    conn <- new("MonetDBEmbeddedConnection", connenv=connenv)
    attr(conn, "dbPreExists") <- TRUE
    return(conn)
  }
  
  if (getOption("monetdb.debug.mapi", F)) message("II: Connecting to MonetDB on host ", host, " at "
                                                  ,"port ", port, " to DB ", dbname, " with user ", user, " and a non-printed password, timeout is "
                                                  , timeout, " seconds.")
  socket <- FALSE
  if (wait) {
    repeat {
      continue <- FALSE
      tryCatch ({
        # open socket with 5-sec timeout so we can check whether everything works
        suppressWarnings(socket <- socket <<- .mapiConnect(host, port, 5))
        # authenticate
        .mapiAuthenticate(socket, dbname, user, password, language=language)
        .mapiDisconnect(socket)
        break
      }, error = function(e) {
        if ("connection" %in% class(socket)) {
          tryCatch(close(socket), error=function(e){}) 
        }
        message("Server not ready(", e$message, "), retrying (ESC or CTRL+C to abort)")
        Sys.sleep(1)
        continue <<- TRUE
      })
    }
  }
  
  # make new socket with user-specified timeout

  connenv <- new.env(parent=emptyenv())
  connenv$lock <- 0
  connenv$deferred <- list()
  connenv$exception <- list()
  connenv$autocommit <- TRUE
  connenv$params <- list(drv=drv, host=host, port=port, timeout=timeout, dbname=dbname, user=user, password=password, language=language)
  connenv$socket <- .mapiConnect(host, port, timeout) 
  .mapiAuthenticate(connenv$socket, dbname, user, password, language=language)
  
  conn <- new("MonetDBConnection", connenv=connenv)
  if (getOption("monetdb.sequential", FALSE)) {
    message("MonetDB: Switching to single-threaded query execution.")
    dbSendQuery(conn, "set optimizer='sequential_pipe'")
  }
  attr(conn, "dbPreExists") <- TRUE
  conn
}, 
valueClass="MonetDBConnection")


### MonetDBConnection
setClass("MonetDBConnection", representation("DBIConnection", connenv="environment"))

setClass("MonetDBEmbeddedConnection", representation("MonetDBConnection", connenv="environment"))


setMethod("dbGetInfo", "MonetDBConnection", def=function(dbObj, ...) {
  envdata <- dbGetQuery(dbObj, "SELECT name, value from sys.env()")
  ll <- as.list(envdata$value)
  names(ll) <- envdata$name
  ll$name <- "MonetDBConnection"
  ll$db.version <- utils::packageVersion("MonetDBLite")
  ll$dbname <- ll$gdk_dbname
  ll$username <- NA
  ll$host <- NA
  ll$port <- NA
  ll
})

setMethod("dbIsValid", "MonetDBConnection", def=function(dbObj, ...) {
  return(invisible(!is.na(tryCatch({dbGetQuery(dbObj, "SELECT 1");TRUE}, error=function(e){NA}))))
})

setMethod("dbDisconnect", "MonetDBConnection", def=function(conn, ...) {
  .mapiDisconnect(conn@connenv$socket)
  invisible(TRUE)
})

setMethod("dbDisconnect", "MonetDBEmbeddedConnection", def=function(conn, shutdown=FALSE, ...) {
  check_flag(shutdown)
  if (!conn@connenv$open) warning("already disconnected")
  conn@connenv$open <- FALSE
  if (conn@connenv$resultsets > 0) {
    warning("Result sets remain for this connection, use dbClearResult() to avoid this warning.")
    conn@connenv$resultsets = 0
  }
  monetdb_embedded_disconnect(conn@connenv$conn)
  if (shutdown) monetdb_embedded_shutdown()
  invisible(TRUE)
})

setMethod("dbListTables", "MonetDBConnection", def=function(conn, ..., sys_tables=FALSE, schema_names=FALSE) {
  check_flag(sys_tables)
  check_flag(schema_names)
  q <- "select schemas.name as sn, tables.name as tn from sys.tables join sys.schemas on tables.schema_id=schemas.id"
  if (!sys_tables) q <- paste0(q, " where tables.system=false order by sn, tn")
  df <- dbGetQuery(conn, q)
  df$tn <- quoteIfNeeded(conn, df$tn, warn=F)
  res <- df$tn
  if (schema_names) {
    df$sn <- quoteIfNeeded(conn, df$sn, warn=F)
    res <- paste0(df$sn, ".", df$tn)
  }
  as.character(res)
})

setMethod("dbBegin", "MonetDBConnection", def=function(conn, ...) {
  if (!conn@connenv$autocommit) {
    stop("Already in transaction, can't start another one.")
  }
  dbSendQuery(conn, "START TRANSACTION")
  conn@connenv$autocommit <- FALSE
  invisible(TRUE)
})

setMethod("dbCommit", "MonetDBConnection", def=function(conn, ...) {
  if (conn@connenv$autocommit) {
    stop("No active transaction, use dbBegin() to start one.")
  }
  dbSendQuery(conn, "COMMIT")
  conn@connenv$autocommit <- TRUE
  invisible(TRUE)
})

setMethod("dbRollback", "MonetDBConnection", def=function(conn, ...) {
  if (conn@connenv$autocommit) {
    stop("No active transaction, use dbBegin() to start one.")
  }
  dbSendQuery(conn, "ROLLBACK")
  conn@connenv$autocommit <- TRUE
  invisible(TRUE)
})

setMethod("dbListFields", signature(conn="MonetDBConnection", name = "character"), def=function(conn, name, ...) {
  if (!dbExistsTable(conn, name))
    stop(paste0("Unknown table: ", name));
  df <- dbGetQuery(conn, paste0("select columns.name as name from sys.columns join sys.tables on \
    columns.table_id=tables.id where tables.name='", name, "'"))	
  df$name
})

setMethod("dbExistsTable", signature(conn="MonetDBConnection", name = "character"), def=function(conn, name, ...) {
  if (length(name) != 1) {
    stop("need a single name")
  }
  name <- quoteIfNeeded(conn, as.character(name))
  unquoted_name <- gsub("(^\"|\"$)", "", name)
  tables <- dbListTables(conn, sys_tables=T)
  return(name %in% tables || unquoted_name %in% tables)
})

setMethod("dbGetException", "MonetDBConnection", def=function(conn, ...) {
  conn@connenv$exception
})

# This one does all the work in this class
setMethod("dbSendQuery", signature(conn="MonetDBConnection", statement="character"),  
          def=function(conn, statement, ..., list=NULL, async=FALSE) {   
  check_flag(async)
  if(!is.null(list) || length(list(...))){
    if (length(list(...))) statement <- .bindParameters(statement, list(...))
    if (!is.null(list)) statement <- .bindParameters(statement, list)
  }	
  conn@connenv$exception <- list()
  env <- NULL
  if (getOption("monetdb.debug.query", F))  message("QQ: '", statement, "'")
  if(!is.null(log_file <- getOption("monetdb.log.query", NULL)))
    cat(c(statement, ";\n"), file = log_file, sep="", append = TRUE)
  # the actual request
  statement <- enc2utf8(statement)

  resp <- NA
  tryCatch({
    mresp <- .mapiRequest(conn, paste0("s", statement, "\n;"), async=async)
    resp <- .mapiParseResponse(mresp)
  }, interrupt = function(ex) {
    message("Interrupted query execution. Attempting to fix connection....")
      
    newconn <- do.call("dbConnect", conn@connenv$params)
    dbDisconnect(conn)
    conn@connenv$socket <- newconn@connenv$socket
    conn@connenv$lock <- 0
    conn@connenv$deferred <- list()
    conn@connenv$exception <- list()

    stop("No query result for now.")
  })

  env <- new.env(parent=emptyenv())

  if (resp$type == Q_TABLE) {
    # we have to pass this as an environment to make conn object available to result for fetching
    env$success = TRUE
    env$conn <- conn
    env$data <- resp$tuples
    resp$tuples <- NULL # clean up
    env$info <- resp
    env$delivered <- -1
    env$query <- statement
  }
  if (resp$type == Q_UPDATE || resp$type == Q_CREATE || resp$type == MSG_ASYNC_REPLY || resp$type == MSG_PROMPT) {
    env$success = TRUE
    env$conn <- conn
    env$query <- statement
    env$info <- resp

  }
  if (resp$type == MSG_MESSAGE) {
    env$success = FALSE
    env$conn <- conn
    env$query <- statement
    env$info <- resp
    env$message <- resp$message
  }

  if (!env$success) {
    sp <- strsplit(env$message, "!", fixed=T)[[1]]
    # truncate statement to not hide actual error message
    if (nchar(statement) > 100) { statement <- paste0(substring(statement, 1, 100), "...") }
    if (length(sp) == 3) {
      errno <- sp[[2]]
      errmsg <- sp[[3]]
      conn@connenv$exception <- list(errNum=errno, errMsg=errmsg)
      stop("Unable to execute statement '", statement, "'.\nServer says '", errmsg, "' [#", 
           errno, "].")
    }
    else {
      conn@connenv$exception <- list(errNum=NA, errMsg=env$message)
      stop("Unable to execute statement '", statement, "'.\nServer says '", env$message, "'.")
    }
  }

  invisible(new("MonetDBResult", env=env))
  })


# This one does all the work in this class
setMethod("dbSendQuery", signature(conn="MonetDBEmbeddedConnection", statement="character"),  
          def=function(conn, statement, ..., list=NULL, execute = TRUE, resultconvert = TRUE) {   
  check_flag(execute)
  check_flag(resultconvert)
  if (!conn@connenv$open) {
    stop("This connection was closed.")
  }
  if(!is.null(list) || length(list(...))){
    if (length(list(...))) statement <- .bindParameters(statement, list(...))
    if (!is.null(list)) statement <- .bindParameters(statement, list)
  }
  statement <- enc2utf8(statement)

  env <- NULL
  if (getOption("monetdb.debug.query", F)) message("QQ: '", statement, "'")
  if(!is.null(log_file <- getOption("monetdb.log.query", NULL)))
    cat(c(statement, ";\n"), file = log_file, sep="", append = TRUE)
  startt <- Sys.time()
  resp <- monetdb_embedded_query(conn@connenv$conn, statement, execute, resultconvert)
  takent <- round(as.numeric(Sys.time() - startt), 2)
  env <- new.env(parent=emptyenv())
  env$open <- TRUE

  if (resp$type == Q_TABLE || resp$type == Q_PREPARE) {
    meta <- new.env(parent=emptyenv())
    meta$type  <- resp$type

    meta$id    <- -1
    meta$rows  <- NROW(resp$tuples)
    meta$cols  <- NCOL(resp$tuples)
    meta$index <- 0
    meta$names <- names(resp$tuples)
    meta$types <- vapply(resp$tuples, function(x) {class(x)[[1]]}, "character")

    env$info <- meta
    env$success = TRUE
    env$conn <- conn
    attr(resp$tuples, "__rows") <- NULL
   
    env$resp <- resp
    env$delivered <- -1
    env$query <- statement

    conn@connenv$resultsets <- conn@connenv$resultsets + 1
  }
  if (resp$type == Q_UPDATE || resp$type == Q_CREATE || resp$type == MSG_ASYNC_REPLY || resp$type == MSG_PROMPT) {
    env$success = TRUE
    env$conn <- conn
    env$query <- statement
    env$info <- resp
  }
  if (resp$type == MSG_MESSAGE) {
    env$success = FALSE
    env$conn <- conn
    env$query <- statement
    env$info <- resp
    env$message <- resp$message
  }

  if (!env$success) {
    sp <- strsplit(env$message, "!", fixed=T)[[1]]
    # truncate statement to not hide actual error message
    if (nchar(statement) > 100) { statement <- paste0(substring(statement, 1, 100), "...") }
    if (length(sp) == 3) {
      errno <- sp[[2]]
      errmsg <- sp[[3]]
      conn@connenv$exception <- list(errNum=errno, errMsg=errmsg)
      stop("Unable to execute statement '", statement, "'.\nServer says '", errmsg, "' [#", 
           errno, "].")
    }
    else {
      conn@connenv$exception <- list(errNum=NA, errMsg=env$message)
      stop("Unable to execute statement '", statement, "'.\nServer says '", env$message, "'.")
    }
  }
  if (getOption("monetdb.debug.query", F)) message("II: Finished in ", takent, "s")

  invisible(new("MonetDBEmbeddedResult", env=env))
  })

# found from sql_scan.c and trial/error
reserved_monetdb_keywords <- sort(unique(toupper(c(.SQL92Keywords, 
"ADD", "ADMIN", "AFTER", "AGGREGATE", "ALL", "ALTER", "ALWAYS", 
"AND", "ANY", "ASC", "ASYMMETRIC", "ATOMIC", "AUTO_INCREMENT", 
"BEFORE", "BEGIN", "BEST", "BETWEEN", "BIGINT", "BIGSERIAL", 
"BINARY", "BLOB", "BY", "CALL", "CASCADE", "CASE", "CAST", "CHAIN", 
"CHAR", "CHARACTER", "CHECK", "CLOB", "COALESCE", "COMMIT", "COMMITTED", 
"CONSTRAINT", "CONVERT", "COPY", "CORRESPONDING", "CREATE", "CROSS", 
"CURRENT", "CURRENT_DATE", "CURRENT_ROLE", "CURRENT_TIME", "CURRENT_TIMESTAMP", 
"CURRENT_USER", "DAY", "DEC", "DECIMAL", "DECLARE", "DEFAULT", 
"DELETE", "DELIMITERS", "DESC", "DO", "DOUBLE", "DROP", "EACH", 
"EFFORT", "ELSE", "ELSEIF", "ENCRYPTED", "END", "ESCAPE", "EVERY", 
"EXCEPT", "EXCLUDE", "EXISTS", "EXTERNAL", "EXTRACT", "FALSE", 
"FLOAT", "FOLLOWING", "FOR", "FOREIGN", "FROM", "FULL", "FUNCTION", 
"GENERATED", "GLOBAL", "GRANT", "GROUP", "HAVING", "HOUR", "HUGEINT", 
"IDENTITY", "IF", "ILIKE", "IN", "INDEX", "INNER", "INSERT", 
"INT", "INTEGER", "INTERSECT", "INTO", "IS", "ISOLATION", "JOIN", 
"LATERAL", "LEFT", "LIKE", "LIMIT", "LOCAL", "LOCALTIME", "LOCALTIMESTAMP", 
"LOCKED", "MEDIUMINT", "MERGE", "MINUTE", "MONTH", "NATURAL", 
"NEW", "NEXT", "NOCYCLE", "NOMAXVALUE", "NOMINVALUE", "NOT", 
"NOW", "NULL", "NULLIF", "NUMERIC", "OF", "OFFSET", "OLD", "ON", 
"ONLY", "OPTION", "OR", "ORDER", "OTHERS", "OUTER", "OVER", "PARTIAL", 
"PARTITION", "POSITION", "PRECEDING", "PRESERVE", "PRIMARY", 
"PRIVILEGES", "PROCEDURE", "PUBLIC", "RANGE", "READ", "REAL", 
"RECORDS", "REFERENCES", "REFERENCING", "REMOTE", "RENAME", "REPEATABLE", 
"REPLICA", "RESTART", "RESTRICT", "RETURN", "RETURNS", "REVOKE", 
"RIGHT", "ROLLBACK", "ROWS", "SAMPLE", "SAVEPOINT", "SECOND", 
"SELECT", "SEQUENCE", "SERIAL", "SERIALIZABLE", "SESSION_USER", 
"SET", "SIMPLE", "SMALLINT", "SOME", "SPLIT_PART", "STDIN", "STDOUT", 
"STORAGE", "STREAM", "STRING", "SUBSTRING", "SYMMETRIC", "THEN", 
"TIES", "TINYINT", "TO", "TRANSACTION", "TRIGGER", "TRUE", "UNBOUNDED", 
"UNCOMMITTED", "UNENCRYPTED", "UNION", "UNIQUE", "UPDATE", "USER", 
"USING", "VALUES", "VARCHAR", "VARYING", "VIEW", "WHEN", "WHERE", 
"WHILE", "WITH", "WORK", "WRITE", "XMLAGG", "XMLATTRIBUTES", 
"XMLCOMMENT", "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLFOREST", 
"XMLNAMESPACES", "XMLPARSE", "XMLPI", "XMLQUERY", "XMLSCHEMA", 
"XMLTEXT", "XMLVALIDATE", "YEAR"))))

# quoting
quoteIfNeeded <- function(conn, x, warn=TRUE, ...) {
  check_flag(warn)
  x <- as.character(x)
  chars <- !grepl("^[a-z_][a-z0-9_]*$", x, perl=T) & !grepl("^\"[^\"]*\"$", x, perl=T)
  if (any(chars) && warn) {
    message("Identifier(s) ", paste("\"", x[chars],"\"", collapse=", ", sep=""), " contain uppercase or reserved SQL characters and need(s) to be quoted in queries.")
  }
  reserved <- toupper(x) %in% reserved_monetdb_keywords
  if (any(reserved) && warn) {
    message("Identifier(s) ", paste("\"", x[reserved],"\"", collapse=", ", sep=""), " are reserved SQL keywords and need(s) to be quoted in queries.")
  }
  qts <- reserved | chars
  if (any(qts)) {
    x[qts] <- dbQuoteIdentifier(conn, x[qts])
  }
  x
}

setMethod("dbWriteTable", signature(conn="MonetDBConnection", name = "character", value="ANY"), def=function(conn, name, value, overwrite=FALSE, 
  append=FALSE, csvdump=FALSE, transaction=TRUE, temporary=FALSE, row.names=FALSE, field.types=NULL, ...) {

  check_flag(overwrite)
  check_flag(append)
  check_flag(temporary)
  check_flag(csvdump)

  if (!missing(transaction)) {
    .Deprecated("Setting parameter transaction to dbWriteTable is deprecated.")
  }


  if (is.character(value)) {
    message("Treating character vector parameter as file name(s) for monetdb.read.csv()")
    monetdb.read.csv(conn=conn, files=value, tablename=name, ...)
    return(invisible(TRUE))
  }
  if (is.vector(value) && !is.list(value)) value <- data.frame(x=value, stringsAsFactors=F)
  if (length(value) < 1) stop("value must have at least one column")
  if (is.null(names(value))) names(value) <- paste("V", 1:length(value), sep='')
  if (length(value[[1]])>0) {
    if (!is.data.frame(value)) value <- as.data.frame(value, row.names=1:length(value[[1]]) , stringsAsFactors=F)
  } else {
    if (!is.data.frame(value)) value <- as.data.frame(value, stringsAsFactors=F)
  }

 

  if (overwrite && append) {
    stop("Setting both overwrite and append to TRUE makes no sense.")
  }
  if (!is.null(field.types) && append) {
    stop("setting both field.types and append makes no sense")
  }

  needcommit <- FALSE
  if (conn@connenv$autocommit && transaction) {
    needcommit <- TRUE
    dbBegin(conn)
    on.exit(tryCatch(dbRollback(conn), error=function(e){}))
  }
  qname <- quoteIfNeeded(conn, name)
  if (dbExistsTable(conn, qname)) {
    if (overwrite) dbRemoveTable(conn, qname)
    if (!overwrite && !append) stop("Table ", qname, " already exists. Set overwrite=TRUE if you want 
      to remove the existing table. Set append=TRUE if you would like to add the new data to the 
      existing table.")
  }

  value <- sqlRownamesToColumn(value, row.names)
  
  if (!dbExistsTable(conn, qname)) {
    fts <- sapply(value, dbDataType, dbObj=conn)
    if (!is.null(field.types)) {
      if (!is.character(field.types) || length(field.types) != length(fts)) {
        stop("invalid field types argument")
      }
      tst <- field.types[names(value)]
      if (any(is.na(tst)) || length(tst) != length(names(value))) {
        stop("column name/type mismatch")
      }
      fts <- field.types
    }

    fdef <- paste(quoteIfNeeded(conn, names(value)), fts, collapse=', ')
    if (temporary) {
      ct <- paste0("CREATE TEMPORARY TABLE ", qname, " (", fdef, ") ON COMMIT PRESERVE ROWS")
    } else {
      ct <- paste0("CREATE TABLE ", qname, " (", fdef, ")")
    }
    dbExecute(conn, ct)
  }
 

  if (length(value[[1]])) {
    classes <- unlist(lapply(value, function(v){
      class(v)[[1]]
    }))
    for (c in names(classes[classes=="character"])) {
      value[[c]] <- enc2utf8(value[[c]])
    }
    for (c in names(classes[classes=="factor"])) {
      levels(value[[c]]) <- enc2utf8(levels(value[[c]]))
    }
    if (inherits(conn, "MonetDBEmbeddedConnection")) {
      for (c in names(classes[classes=="POSIXlt"])) {
        value[[c]] <- as.POSIXct(value[[c]])
      }

      # figure out whether the table is in the sys or the tmp schema
      schema <- "sys"
      if (dbGetQuery(conn, paste0("select count(*) as is_tmp_schema from sys.tables join sys.schemas on tables.schema_id=schemas.id where tables.name='", gsub("(^\"|\"$)", "", name), "' and schemas.name='tmp'"))$is_tmp_schema) {
        schema <- "tmp"
      }

      insres <- monetdb_embedded_append(conn@connenv$conn, qname, value, schema)
      if (!is.logical(insres)) {
        stop("Failed to insert data: ", insres)
      }
    }
    else {
      if (csvdump) {
        tmp <- tempfile(fileext = ".csv")

        # MonetDB does not like Inf or NaN in double columns
        for (i in 1:length(value)) {
          if ("numeric" %in% class(value[, i])) {
            value[!is.finite(value[, i]), i] <- NA
          }
        }

        write.table(value, tmp, sep = ",", quote = TRUE, row.names = FALSE, col.names = FALSE, na="", fileEncoding = "UTF-8")
        dbSendQuery(conn, paste0("COPY INTO ", qname, " FROM '", encodeString(tmp), "' USING DELIMITERS ',','\\n','\"' NULL AS ''"))
        file.remove(tmp) 
      } else {
        vins <- paste("(", paste(rep("?", length(value)), collapse=', '), ")", sep='')
        # chunk some inserts together so we do not need to do a round trip for every one
        splitlen <- 0:(nrow(value)-1) %/% getOption("monetdb.insert.splitsize", 1000)
        lapply(split(value, splitlen), 
          function(valueck) {
          bvins <- c()
          for (j in 1:length(valueck[[1]])) bvins <- c(bvins,.bindParameters(vins, as.list(valueck[j, ])))
          dbExecute(conn, paste0("INSERT INTO ", qname, " VALUES ",paste0(bvins, collapse=", ")))
        })
      }
    }
  }
  if (needcommit) {
    dbCommit(conn)
    on.exit(NULL)
  }
  return(invisible(TRUE))
})

datatype <- function(dbObj, obj, ...) {
  if (is.null(obj)) stop("NULL parameter")
  if (is.data.frame(obj)) {
    return (vapply(obj, function(x) datatype(dbObj, x), FUN.VALUE = "character"))
  }
  else if (inherits(obj, "Date")) "DATE"
  else if (inherits(obj, "difftime")) "TIME"
  else if (is.logical(obj)) "BOOLEAN"
  else if (is.integer(obj)) "INTEGER"
  else if (is.numeric(obj)) "DOUBLE PRECISION"
  else if (inherits(obj, "POSIXt")) "TIMESTAMP"
  else if (is.list(obj) && all(vapply(obj, typeof, FUN.VALUE = "character") == "raw" || is.na(obj))) "BLOB"
  else "STRING"
}

setMethod("dbDataType", signature(dbObj="MonetDBConnection", obj = "ANY"), def = datatype, valueClass = "character")

setMethod("dbDataType", signature(dbObj="MonetDBDriver", obj = "ANY"), def = datatype, valueClass = "character")



setMethod("dbRemoveTable", signature(conn="MonetDBConnection", name = "character"), def=function(conn, name, ...) {
  name <- quoteIfNeeded(conn, name, warn=F)
  if (!dbExistsTable(conn, name)) stop("No such table: ", name)
  dbExecute(conn, paste("DROP TABLE", name))
  return(invisible(TRUE))
})

# for compatibility with RMonetDB (and dbWriteTable support), we will allow parameters to this 
# method, but will not use prepared statements internally
if (is.null(getGeneric("dbSendUpdate"))) setGeneric("dbSendUpdate", function(conn, statement, ..., 
                                                                             async=FALSE) standardGeneric("dbSendUpdate"))
setMethod("dbSendUpdate", signature(conn="MonetDBConnection", statement="character"),  
          def=function(conn, statement, ..., list=NULL, async=FALSE) {
            .Deprecated("DBI has dbExecute and sqlInterpolate which can replace this.")

            if(!is.null(list) || length(list(...))){
              if (length(list(...))) statement <- .bindParameters(statement, list(...))
              if (!is.null(list)) statement <- .bindParameters(statement, list)
            }
            res <- dbSendQuery(conn, statement, async=async)
            if (!res@env$success) {
              stop(paste(statement, "failed!\nServer says:", res@env$message))
            }
            return(invisible(TRUE))
          })

# this can be used in finalizers to not mess up the socket
if (is.null(getGeneric("dbSendUpdateAsync"))) setGeneric("dbSendUpdateAsync", function(conn, 
                                                                                       statement, ...) standardGeneric("dbSendUpdateAsync"))
setMethod("dbSendUpdateAsync", signature(conn="MonetDBConnection", statement="character"),  
          def=function(conn, statement, ..., list=NULL) {
            #.Deprecated("DBI has dbExecute and sqlInterpolate which can replace this.")

            dbSendUpdate(conn, statement, ..., async=TRUE)
          })


# quote strings when sending them to the db. single quotes are most critical.
# null bytes are not supported
.mapiQuote <- function(str) {
  qs <- ""
  chrs <- unlist(strsplit(str, "", fixed=TRUE))
  for (chr in chrs) {
    f <- ""
    if (chr == "\n") f <- qs <- paste0(qs, "\\", "n")
    if (chr == "\t") f <- qs <- paste0(qs, "\\", "t")
    if (chr == "'" ) f <- qs <- paste0(qs, "\\'")
    if (nchar(f) == 0) qs <- paste0(qs, chr)
  }
  qs
}

# adapted from DBI sqlParseVariablesImpl
# FIXME: remove and replace with call to original function once https://github.com/rstats-db/DBI/issues/167 is closed
.find_placeholders <- function(sql) {
  sql_arr <- c(strsplit(as.character(sql), "", fixed = TRUE)[[1]], " ")

  quotes <- list(DBI::sqlQuoteSpec('"', '"'), DBI::sqlQuoteSpec("'", "'"))
  comments <- list(DBI::sqlCommentSpec("/*", "*/", TRUE), DBI::sqlCommentSpec("--", "\n", FALSE))

  # return values
  var_pos_start <- integer()

  # internal helper variables
  quote_spec_offset <- 0L
  comment_spec_offset <- 0L
  sql_variable_start <- 0L

  # prepare comments & quotes for quicker comparisions
  for(c in seq_along(comments)) {
    comments[[c]][[1]] <- strsplit(comments[[c]][[1]], "", fixed = TRUE)[[1]]
    comments[[c]][[2]] <- strsplit(comments[[c]][[2]], "", fixed = TRUE)[[1]]
  }
  for(q in seq_along(quotes)) {
    quotes[[q]][[5]] <- nchar(quotes[[q]][[3]]) > 0L
  }

  state <- 'default'
  i <- 0
  while(i < length(sql_arr)) {
    i <- i + 1
    switch(state,

      default = {
        # variable?
        if (sql_arr[[i]] == "?") {
          var_pos_start <- c(var_pos_start, i)
          next
        }
        # starting quoted area?
        for(q in seq_along(quotes)) {
          if (identical(sql_arr[[i]], quotes[[q]][[1]])) {
            quote_spec_offset <- q
            state <- 'quote'
            break
          }
        }
        # we can abort here if the state has changed
        if (state != 'default') next
        # starting comment?
        for(c in seq_along(comments)) {
          comment_start_arr <- comments[[c]][[1]]
          comment_start_length <- length(comment_start_arr)
          if (identical(sql_arr[i:(i + comment_start_length - 1)], comment_start_arr)) {
            comment_spec_offset <- c
            i <- i + comment_start_length
            state <- 'comment'
            break
          }
        }
        },

        quote = {
        # if we see backslash-like escapes, ignore next character
        if (quotes[[quote_spec_offset]][[5]] && identical(sql_arr[[i]], quotes[[quote_spec_offset]][[3]])) {
          i <- i + 1
          next
        }
        # end quoted area?
        if (identical(sql_arr[[i]], quotes[[quote_spec_offset]][[2]])) {
          quote_spec_offset <- 0L
          state <- 'default'
        }
        },

        comment = {
        # end commented area?
        comment_end_arr <- comments[[comment_spec_offset]][[2]]
        comment_end_length <- length(comment_end_arr)
        if (identical(sql_arr[i:(i + comment_end_length - 1)], comment_end_arr)) {
          i <- i + comment_end_length
          comment_spec_offset <- 0L
          state <- 'default'
        }
      }
    ) # </switch>
  } # </while>

  if (quote_spec_offset > 0L) {
    stop("Unterminated literal")
  }
  if (comment_spec_offset > 0L && comments[[comment_spec_offset]][[3]]) {
    stop("Unterminated comment")
  }
  list(start = as.integer(var_pos_start))
}

.bindParameters <- function(statement, param) {
  vars <- .find_placeholders(statement)

  safe_values <- vapply(param, function(x) {
    if (is.null(x) || is.na(x)) {
      return("NULL")
    }
    if (is.character(x) || is.factor(x)) {
        return(paste0("'", .mapiQuote(toString(x)), "'"))
      } else {
        return(as.character(x))
      }
      }, character(1))

  for (i in rev(seq_along(vars$start))) {
    statement <- paste0(
      substring(statement, 0, vars$start[i] - 1),
      safe_values[i],
      substring(statement, vars$start[i] + 1, nchar(statement))
      )
  }
  return(statement) 
}



### MonetDBResult
setClass("MonetDBResult", representation("DBIResult", env="environment"))
setClass("MonetDBEmbeddedResult", representation("MonetDBResult", env="environment"))


.CT_INT <- 0L
.CT_NUM <- 1L
.CT_CHR <- 2L
.CT_BOOL <- 3L
.CT_RAW <- 4L

# type mapping matrix
monetTypes <- rep(c("integer", "numeric", "character", "character", "logical", "raw"), c(5, 6, 4, 6, 1, 1))
names(monetTypes) <- c(c("WRD", "TINYINT", "SMALLINT", "INT", "MONTH_INTERVAL"), # month_interval is the diff between date cols, int
  c("BIGINT", "HUGEINT", "REAL", "DOUBLE", "DECIMAL", "SEC_INTERVAL"),  # sec_interval is the difference between timestamps, float
  c("CHAR", "VARCHAR", "CLOB", "STR"), 
  c("INTERVAL", "DATE", "TIME", "TIMETZ", "TIMESTAMP", "TIMESTAMPTZ"), 
  c("BOOLEAN"), 
  c("BLOB"))

monetdbRtype <- function(dbType) {
  dbType <- toupper(dbType)
  rtype <- monetTypes[dbType]
  if (is.na(rtype)) {
    stop("Unknown DB type ", dbType)
  }
  rtype
}

setMethod("dbBind", "MonetDBEmbeddedResult", def = function(res, params, ...) {
   if (res@env$resp$type != Q_PREPARE) stop("Not a prepared statement. Prefix query with PREPARE and add ? placeholders")
     if (!res@env$open) {
      stop("result has already been cleared")
    }
    if (!is.list(params)) {
      stop("need a list as params")
    }
    prep <- res@env$resp$tuples
    params_info <- prep[prep$result_or_param == "param",]
    if (length(params) != nrow(params_info)) {
      stop("need ", nrow(params_info), " parameters for query")
    }
    quoted_params <- vapply(params, function(x) {
      if (is.na(x)) "NULL"
      else if (is.numeric(x) || is.logical(x)) {
        as.character(x)
      } else {
        dbQuoteString(res@env$conn, as.character(x))
      }
    }
    , "character")
    
    exec_str <- sprintf("EXEC %d(%s)", res@env$resp$prepare, paste0(quoted_params, collapse=","))
    invisible(dbSendQuery(res@env$conn, exec_str))
})


setMethod("fetch", signature(res="MonetDBResult", n="numeric"), def=function(res, n, ...) {
  dbFetch(res, n, ...)
})

# most of the heavy lifting here
setMethod("dbFetch", signature(res="MonetDBResult", n="numeric"), def=function(res, n, ...) {
  if (!res@env$success) {
    stop("Cannot fetch results from error response, error was ", res@env$info$message)
  }
  if (!dbIsValid(res)) {
    stop("Cannot fetch results from closed response.")
  }
 
  # okay, so we arrive here with the tuples from the first result in res@env$data as a list
  info <- res@env$info
  # apparently, one should be able to fetch results sets from ddl ops
  if (info$type == Q_UPDATE) { 
    return(data.frame())
  }
  if (res@env$delivered < 0) {
    res@env$delivered <- 0
  }
  stopifnot(res@env$delivered <= info$rows, info$index <= info$rows)
  remaining <- info$rows - res@env$delivered
    
  if (n < 0) {
    n <- remaining
  } else {
    n <- min(n, remaining)
  }  
  
  # prepare the result holder df with columns of the appropriate type
  df = list()
  ct <- rep(0L, info$cols)
  
  for (i in seq.int(info$cols)) {
    rtype <- monetdbRtype(info$types[i])
    if (rtype=="integer") {      
      df[[i]] <- integer()
      ct[i] <- .CT_INT
    }
    if (rtype=="numeric") {			
      df[[i]] <- numeric()
      ct[i] <- .CT_NUM
    }
    if (rtype=="character") {
      df[[i]] <- character()
      ct[i] <- .CT_CHR			
    }
    if (rtype=="logical") {
      df[[i]] <- logical()
      ct[i] <- .CT_BOOL			
    }
    if (rtype=="raw") {
      df[[i]] <- raw()
      ct[i] <- .CT_RAW
    }
    names(df)[i] <- info$names[i]
  }
  
  # we have delivered everything, return empty df (spec is not clear on this one...)
  if (n < 1) {
    return(data.frame(df, stringsAsFactors=F))
  }
  
  # if our tuple cache in res@env$data does not contain n rows, we fetch from server until it does
  while (length(res@env$data) < n) {
    cresp <- .mapiParseResponse(.mapiRequest(res@env$conn, paste0("Xexport ", .mapiLongInt(info$id), 
      " ", .mapiLongInt(info$index), " ", .mapiLongInt(n-length(res@env$data)))))
    stopifnot(cresp$type == Q_BLOCK && cresp$rows > 0)
    
    res@env$data <- c(res@env$data, cresp$tuples)
    info$index <- info$index + cresp$rows
    # if (getOption("monetdb.profile", T))  .profiler_progress(length(res@env$data), n)
  }
  
  # convert tuple string vector into matrix so we can access a single column efficiently
  # call to a faster C implementation for the annoying task of splitting everyting into fields
  parts <- .Call(mapi_split, res@env$data[1:n], as.integer(info$cols))
  
  # convert values column by column
  for (j in seq.int(info$cols)) {	
    col <- ct[[j]]
    if (col == .CT_INT) 
      df[[j]] <- as.integer(parts[[j]])
    if (col == .CT_NUM) 
      df[[j]] <- as.numeric(parts[[j]])
    if (col == .CT_BOOL) 
      df[[j]] <- parts[[j]]=="true"
    if (col == .CT_CHR) { 
      df[[j]] <- parts[[j]]
      Encoding(df[[j]]) <- "UTF-8"
    }
    if (col == .CT_RAW) {
      df[[j]] <- lapply(parts[[j]], charToRaw)
    }
  }
  
  # remove the already delivered tuples from the background holder or clear it altogether
  if (n+1 >= length(res@env$data)) {
    res@env$data <- character()
  }
  else {
    res@env$data <- res@env$data[seq(n+1, length(res@env$data))]
  }
  res@env$delivered <- res@env$delivered + n
  
  # this is a trick so we do not have to call data.frame(), which is expensive
  attr(df, "row.names") <- c(NA_integer_, length(df[[1]]))
  class(df) <- "data.frame"
  
  # if (getOption("monetdb.profile", T))  .profiler_clear()
  df
})

# as per is.integer documentation
is_wholenumber <- function(x, tol = .Machine$double.eps^0.5)  abs(x - round(x)) < tol

fix_rownames <- function(df, rownames_flag) {
  attr(df, "row.names") <- c(NA, as.integer(-nrow(df)))
  return(df)
}

# most of the heavy lifting here
setMethod("dbFetch", signature(res="MonetDBEmbeddedResult", n="numeric"), def=function(res, n, ...) {
  if (!res@env$success) {
    stop("Cannot fetch results from error response, error was ", res@env$info$message)
  }
  if (!dbIsValid(res)) {
    stop("Cannot fetch results from closed response.")
  }
  if (res@env$info$type != Q_TABLE && res@env$info$type != Q_PREPARE) { 
    warning("trying to fetch from query result without table")
    return(data.frame())
  }
  if (length(n) != 1) {
    stop("need exactly one value in n")
  }
  if (is.infinite(n)) {
    n <- -1
  }
  if (n < - 1) {
    stop("cannot fetch negative n other than -1")
  }
  if (!is_wholenumber(n)) {
    stop("n needs to be not a whole number")
  }

  if (n == 0) {
    return(head(res@env$resp$tuples, 0))
  }
  if (res@env$delivered < 0) {
    res@env$delivered <- 0
  }
  if (res@env$delivered >= res@env$info$rows) {
    return(fix_rownames(res@env$resp$tuples[F,, drop=F], res@env$rownames))
  }
  # special case, return everything
  if (n == -1 && res@env$delivered == 0) {
    res@env$delivered <- res@env$info$rows
    return(fix_rownames(res@env$resp$tuples, res@env$rownames))
  }
  if (n > -1) {
    n <- min(n, res@env$info$rows - res@env$delivered)
    res@env$delivered <- res@env$delivered + n
    df <- res@env$resp$tuples[(res@env$delivered - n + 1):(res@env$delivered),, drop=F]
    return(fix_rownames(df, res@env$rownames))
  }
  start <- res@env$delivered + 1
  res@env$delivered <- res@env$info$rows
  df <- res@env$resp$tuples[start:res@env$info$rows,, drop=F]
  return(fix_rownames(df, res@env$rownames))
})

setMethod("dbClearResult", "MonetDBResult", def = function(res, ...) {
  if (res@env$info$type == Q_TABLE) {
    resid <- res@env$info$id
    if (!is.null(resid) && !is.na(resid) && is.numeric(resid)) {
      .mapiRequest(res@env$conn, paste0("Xclose ", resid), async=TRUE)
      res@env$open <- FALSE
    }
  }
  return(invisible(TRUE))
}, valueClass = "logical")

setMethod("dbClearResult", "MonetDBEmbeddedResult", def = function(res, ...) {
  if (!res@env$open) {
    warning("result has already been cleared")
  }
  res@env$open <- FALSE
  if (res@env$info$type == Q_TABLE) {
    res@env$conn@connenv$resultsets <- res@env$conn@connenv$resultsets - 1
  }
  return(invisible(TRUE))
}, valueClass = "logical")

setMethod("dbHasCompleted", "MonetDBResult", def = function(res, ...) {
  if (!res@env$open) {
    stop("result has already been cleared")
  } 
  if (res@env$info$type == Q_TABLE) {
    return(res@env$delivered == res@env$info$rows)
  }
  return(invisible(TRUE))
}, valueClass = "logical")

# compatibility with RSQLite
if (is.null(getGeneric("isIdCurrent"))) setGeneric("isIdCurrent", function(dbObj, ...) standardGeneric("isIdCurrent"))
setMethod("isIdCurrent", signature(dbObj="MonetDBResult"), def=function(dbObj, ...) {
  .Deprecated("use dbIsValid() instead")
   dbIsValid(dbObj)
})

setMethod("isIdCurrent", signature(dbObj="MonetDBConnection"), def=function(dbObj, ...) {
  .Deprecated("use dbIsValid() instead")
   dbIsValid(dbObj)
})

if (is.null(getGeneric("initExtension"))) setGeneric("initExtension", function(dbObj, ...) standardGeneric("initExtension"))
setMethod("initExtension", signature(dbObj="MonetDBConnection"), def=function(dbObj, ...) {
  .Deprecated(msg="initExtension() is not required for MonetDBLite")
})


setMethod("dbIsValid", signature(dbObj="MonetDBResult"), def=function(dbObj, ...) {
  return(invisible(dbObj@env$open))
})

setMethod("dbColumnInfo", "MonetDBResult", def = function(res, ...) {
  data.frame(name=res@env$info$names, type=res@env$info$types, 
                    data.type=monetTypes[res@env$info$types], r.data.type=monetTypes[res@env$info$types], 
                    monetdb.data.type=res@env$info$types, stringsAsFactors=F)	
}, 
valueClass = "data.frame")

setMethod("dbColumnInfo", "MonetDBEmbeddedResult", def = function(res, ...) {
  data.frame(name=res@env$info$names, type=res@env$info$types, stringsAsFactors=F)  
}, 
valueClass = "data.frame")

setMethod("dbGetStatement", "MonetDBResult", def = function(res, ...) {
  if (!res@env$open) {
    stop("result has already been cleared")
  } 
  res@env$query
}, 
valueClass = "character")

setMethod("dbGetRowCount", "MonetDBResult", def = function(res, ...) {
  if (!res@env$open) {
    stop("result has already been cleared")
  } 
  if (res@env$info$type != Q_TABLE && res@env$info$type != Q_PREPARE) {
    return(0L)
  }
  if (res@env$delivered < 1) {
    return(0L)
  }
  res@env$delivered 
}, 
valueClass = "numeric")

setMethod("dbGetRowsAffected", "MonetDBResult", def = function(res, ...) {
  as.numeric(NA)
})

setMethod("dbGetRowsAffected", "MonetDBEmbeddedResult", def = function(res, ...) {
  if (!res@env$open) {
    stop("result has already been cleared")
  } 
  if (res@env$info$type == Q_UPDATE) {
    return(res@env$info$rows)
    } else {
      return(0L)
    }
})


# adapted from RMonetDB, no java-specific things in here...
monet.read.csv <- monetdb.read.csv <- function(conn, files, tablename, header=TRUE, 
                                               locked=FALSE, best.effort=FALSE, na.strings="", nrow.check=500, 
                                               delim=",", newline="\\n", quote="\"", 
                                               col.names=NULL, lower.case.names=FALSE, sep=delim, ...){
  
  if (length(na.strings)>1) stop("na.strings must be of length 1")
  if (!missing(sep)) delim <- sep

  headers <- lapply(files, utils::read.csv, sep=delim, na.strings=na.strings, quote=quote, nrows=nrow.check, header=header, ...)
  if (length(files)>1){
    nn <- sapply(headers, ncol)
    if (!all(nn==nn[1])) stop("Files have different numbers of columns")
    nms <- sapply(headers, names)
    if(!all(nms==nms[, 1])) stop("Files have different variable names")
    types <- sapply(headers, function(df) sapply(df, dbDataType, dbObj=conn))
    if(!all(types==types[, 1])) stop("Files have different variable types")
  }
  needcommit <- FALSE
  if (conn@connenv$autocommit) {
    needcommit <- TRUE
    dbBegin(conn)
    on.exit(tryCatch(dbRollback(conn), error=function(e){}))
  }
  if (!dbExistsTable(conn, tablename)) {
  tablename <- quoteIfNeeded(conn, tablename)
    if(lower.case.names) names(headers[[1]]) <- tolower(names(headers[[1]]))
    if(!is.null(col.names)) {
      if (lower.case.names) {
        warning("Ignoring lower.case.names parameter as overriding col.names are supplied.")
      }
      col.names <- as.character(col.names)
      if (length(unique(col.names)) != length(names(headers[[1]]))) {
        stop("You supplied ", length(unique(col.names)), " unique column names, but file has ", 
          length(names(headers[[1]])), " columns.")
      }
      names(headers[[1]]) <- quoteIfNeeded(conn, col.names)
    }
    dbWriteTable(conn, tablename, headers[[1]][FALSE, ,drop=FALSE])
  }
  
  delimspec <- paste0("USING DELIMITERS '", delim, "','", newline, "','", quote, "'")
  
  for(i in seq_along(files)) {
    thefile <- encodeString(normalizePath(files[i]))
    dbExecute(conn, paste("COPY", if(header) "OFFSET 2", "INTO", 
      tablename, "FROM", paste("'", thefile, "'", sep=""), delimspec, "NULL as", paste("'", 
      na.strings[1], "'", sep=""), if(locked) "LOCKED", if(best.effort) "BEST EFFORT"))
  }
  dbGetQuery(conn, paste("SELECT COUNT(*) FROM", tablename))[[1]]
  if (needcommit) {
    dbCommit(conn)
    on.exit(NULL)
  }
}

