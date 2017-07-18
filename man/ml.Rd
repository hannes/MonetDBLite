\name{ml}
\alias{ml}

\title{
   Shorthand connection constructor for embedded MonetDB
}
\description{
  \code{ml(...)} provides a short way of connecting to an embedded MonetDB database. It is equivalent to \code{dbConnect(MonetDBLite(),...)}
}
\usage{
ml(...) 
}
\arguments{
   \item{...}{Parameters passed directly to \code{dbConnect()}}
  }
\value{
  Returns a DBI connection to the specified embedded MonetDB database.
}

\seealso{
  \code{\link[DBI]{dbConnect}}
}
\examples{
  library(DBI)
  dbdir <- file.path( tempdir() , "ml" )
  con <- ml(dbdir)
  dbDisconnect(con, shutdown = TRUE)
}
