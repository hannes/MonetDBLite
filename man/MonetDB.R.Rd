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
  MonetDB.R()
}
\value{
  Returns a driver object that can be used in calls to
  \code{\link[DBI]{dbConnect}} with an external MonetDB database.
}
\details{
  The \code{MonetDB.R} function creates the R object which can be used to a
  call \code{\link[DBI]{dbConnect}} which actually creates the connection. 
  Since it has no parameters, it is most commonly used inline with the \code{\link[DBI]{dbConnect}} call.

  All of the \code{MonetDBLite::MonetDB.R()} external server connection functions are discouraged in favor of embedded \code{\link[=MonetDBLite]{MonetDBLite::MonetDBLite()}} functions.
  
  This package aims to provide a reasonably complete implementation of the DBI. 
}
\seealso{
  \code{\link[DBI]{dbConnect}} for documentation how to invoke the driver  
  \code{\link[=control]{monetdb.server.setup}} to set up and start a local MonetDB server from R
}
\examples{
\dontrun{
library(DBI)
con <- dbConnect(MonetDBLite::MonetDB.R(), dbname = "demo")
dbWriteTable(con, "iris", iris)
dbListTables(con)
dbGetQuery(con, "SELECT COUNT(*) FROM iris")
d <- dbReadTable(con, "iris")
}}
\keyword{interface}
