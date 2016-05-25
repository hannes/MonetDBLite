\name{sqlite-compatibility}
\alias{sqlite-compatibility}
\alias{initExtension}
\alias{initExtension,MonetDBConnection-method}
\alias{isIdCurrent}
\alias{isIdCurrent,MonetDBConnection-method}
\alias{isIdCurrent,MonetDBResult-method}

\title{
  Compatibility functions for RSQLite
}
\description{
Some functions that RSQlite has and that we support to allow MonetDBLite being used as a drop-in replacement.
}
\usage{
isIdCurrent(dbObj, ...)
initExtension(dbObj, ...)
}
\arguments{
  \item{dbObj}{A MonetDBLite database connection. Created using \code{\link[DBI]{dbConnect}} with the 
    \code{\link[MonetDBLite]{MonetDBLite}} database driver.}
  \item{...}{Additional parameters. Currently not in use.}
}
