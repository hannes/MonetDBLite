\name{monetdblite_shutdown}
\alias{monetdblite_shutdown}

\title{
 	Shutdown MonetDBLite
}
\description{
  \code{monetdblite_shutdown} terminates the running MonetDBLite instance
}
\usage{
  monetdblite_shutdown()
}
\value{
  Returns \code{TRUE}.
}
\details{
	This provides an alternative to \code{dbDisconnect(con, shutdown=TRUE)} when no connection is available.
}
\examples{
library(DBI)
con <- dbConnect(MonetDBLite::MonetDBLite())
MonetDBLite::monetdblite_shutdown()
}
