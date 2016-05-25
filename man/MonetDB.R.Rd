\name{MonetDB.R}
\alias{MonetDB.R}
\alias{MonetDBR}
\alias{MonetDB}
\alias{MonetR}
\alias{RMonetDB}

\title{
  DBI database connector for external MonetDB database
}
\description{
  \code{MonetDBLite} creates a new DBI driver that can be used to connect and interact with external MonetDB database.
}
\usage{
  MonetDBLite ()
}
\value{
  Returns a driver object that can be used in calls to
  \code{\link[DBI]{dbConnect}} with an external MonetDB database.
}
\details{
  The \code{MonetDB.R} function creates the R object which can be used to a
  call \code{\link[DBI]{dbConnect}} which actually creates the connection. 
  Since it has no parameters, it is most commonly used inline with the \code{\link[DBI]{dbConnect}} call.
 
  All of the \code{MonetDBLite::MonetDB.R()} external server connection functions are deprecated in favor of \code{\link[=MonetDBLite]{MonetDBLite::MonetDBLite()}}.

  This package aims to provide a reasonably complete implementation of the DBI. 
  A number of additional methods are provided: \code{\link{dbSendUpdate}} for database-altering 
  statements, \code{\link{dbSendUpdateAsync}} for cleanup operations and 
  \code{\link{monetdb.read.csv}} for database CSV import.
}
\seealso{
  \code{\link[DBI]{dbConnect}} for documentation how to invoke the driver  
  \code{\link[=control]{monetdb.server.setup}} to set up and start a local MonetDB server from R
}
\examples{
\dontrun{
library(DBI)
conn <- dbConnect(MonetDBLite::MonetDB.R(), dbname = "demo")
dbWriteTable(conn, "iris", iris)
dbListTables(conn)
dbGetQuery(conn, "SELECT COUNT(*) FROM iris")
d <- dbReadTable(conn, "iris")
}}
\keyword{interface}
