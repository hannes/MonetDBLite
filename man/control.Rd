\name{control}
\alias{control}
\alias{monetdb.server.setup}
\alias{monetdb.server.start}
\alias{monetdb.server.stop}
\alias{monetdb.server.shutdown}
\alias{monetdb.server.getpid}

\title{
  Control an external MonetDB server from the R shell.
}
\description{
The external MonetDB server can be controlled from the R shell using the functions described below. 
The general process is to generate a MonetDB database directory and startup script using 
\code{monetdb.server.setup}, then pass the path to the startup script to \code{monetdb.server.start}. 
This function will return the process id of the external database server, which in turn can be passed to 
\code{monetdb.server.stop} to stop the database server again. The process ID of a running MonetDB server can also be querid using \code{monetdb.server.getpid}, which takes a DBI connection as a parameter. A better alternative to \code{monetdb.server.stop} is \code{monetdb.server.shutdown}, which takes a DBI connection to shut down the server. 

All of these external server process control functions are discouraged in favor of embedded \code{\link[=MonetDBLite]{MonetDBLite::MonetDBLite()}} functions.
  
Unlike an embedded instance, initiating an external server process requires \href{https://www.monetdb.org/}{MonetDB home page} installed on the user's system.
}
\usage{
monetdb.server.setup(database.directory,monetdb.program.path, 
	dbname = "demo", dbport = 50000)
monetdb.server.start(bat.file)
monetdb.server.getpid(conn)
monetdb.server.stop(correct.pid, wait = TRUE)
monetdb.server.shutdown(conn)
}
\arguments{
  \item{database.directory}{Path to the directory where the initialization script and all data will be stored. Must be empty or non-existant.}
   \item{monetdb.program.path}{Path to the MonetDB installation}
   \item{dbname}{Database name to be created}
   \item{dbport}{TCP port for external MonetDB to listen for connections. This port should not conflict with other running programs on your local computer. Two databases with the same port number cannot be accessed at the same time}
   \item{bat.file}{Path to the external MonetDB startup script. This path is returned by \code{monetdb.server.setup}}
   \item{correct.pid}{Process ID of the running external MonetDB server. This number is returned by \code{monetdb.server.start}}
  \item{wait}{Wait for the server to shut down or return immediately}
  \item{conn}{A DBI connection to external MonetDB}
 }
\value{
  \code{monetdb.server.setup} returns the path to an external MonetDB startup script, which can used many times
  \code{monetdb.server.start} returns the process id of the external MonetDB database server
}

\examples{
\dontrun{
library(DBI)
startscript <- monetdb.server.setup("/tmp/database","/usr/local/monetdb/", "db1", 50001)
pid <- monetdb.server.start(startscript)
monetdb.server.stop(pid)
con <- dbConnect(MonetDB.R(), "monetdb://localhost:50001/db1")
}}
