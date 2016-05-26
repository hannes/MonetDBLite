\name{mdbapply}
\alias{mdbapply}
\alias{mdbapply,MonetDBConnection-method}

\title{
  Apply a R function to an external MonetDB table.
}
\description{
\code{dbApply} uses the R UDF facilities in standalone MonetDB to apply the passed function to a table.
  
}
\usage{
  mdbapply(conn, table, fun, ...)
}
\arguments{
  \item{conn}{An external MonetDB.R database connection. Created using \code{\link[DBI]{dbConnect}} 
   with the \code{\link[MonetDBLite]{MonetDB.R}} external database driver.}
   \item{table}{An external MonetDB database table. Can also be a view or temporary table.}
   \item{fun}{A R function to be run on the external database table. The function gets passed a single \code{data.frame} argument which represents the database table. The function needs to return a single vector (for now).}
   \item{...}{Other parameters to be passed to the function}

 }
\value{
  Returns the result of the function applied to the database table.
}
\examples{
\dontrun{
library(DBI)
con <- dbConnect(MonetDB.R(), "demo")
data(mtcars)
dbWriteTable(con, "mtcars", mtcars)

mpgplus42 <- mdbapply(con, "mtcars", "double", function(d) {
	d$mpg + 42
})
}}
