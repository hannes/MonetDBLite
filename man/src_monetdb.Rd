\name{src_monetdb}
\alias{src_monetdb}
\alias{src_monetdblite}

\title{dplyr integration from MonetDBLite}
\usage{
src_monetdb(dbname, host = "localhost", port = 50000L, user = "monetdb",
  password = "monetdb", con=FALSE, ...)

src_monetdblite(dbdir = tempdir(), ...)

}
\arguments{
\item{dbname}{Database name}

\item{host,port}{Host name and port number of database (defaults to localhost:50000)}

\item{user,password}{User name and password (if needed)}

\item{con}{Existing DBI connection to MonetDB to be re-used}

\item{...}{for the src, other arguments passed on to the underlying
database connector, \code{dbConnect}.}

\item{dbdir}{a directory to start MonetDBLite in}
}
\description{
Use \code{src_monetdb} to connect to an existing MonetDB database,
and \code{tbl} to connect to tables within that database. Please note that the ORDER BY, LIMIT and OFFSET keywords
are not supported in the query when using \code{tbl} on a connection to a MonetDB database.
If you are running a local database, you only need to define the name of the database you want to connect to.
}

\examples{
library(dplyr)
# To connect to a database first create a src:
dbdir <- file.path(tempdir(), "dplyrdir")
my_db <- MonetDBLite::src_monetdblite(dbdir)

# copy some data to DB
my_iris  <- copy_to(my_db, iris)

# create table object
my_iris2 <- tbl(my_db, 'iris')

# now you can call regular dplyr methods on table object

# ...

# shut down the database
MonetDBLite::monetdblite_shutdown()
}

