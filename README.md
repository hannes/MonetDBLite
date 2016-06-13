# MonetDBLite

[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite.svg?branch=master)](https://travis-ci.org/hannesmuehleisen/MonetDBLite)
[![Build Status](https://ci.appveyor.com/api/projects/status/github/hannesmuehleisen/MonetDBLite?branch=master&svg=true)](https://ci.appveyor.com/project/hannesmuehleisen/MonetDBLite)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/MonetDBLite)](http://cran.r-project.org/package=MonetDBLite) 
[![](http://cranlogs.r-pkg.org/badges/MonetDBLite)](http://monetdb.cwi.nl/testweb/web/sisyphus/wilbur.png)

[MonetDBLite](https://www.monetdb.org/blog/monetdblite-r) is a SQL database that runs inside the [R environment for statistical computing](https://www.r-project.org/) and does not require the installation of any external software. It is similar in functionality to [RSQLite](http://cran.r-project.org/package=RSQLite) and works seamlessly with [the dplyr grammar of data manipulation](https://cran.rstudio.com/web/packages/dplyr/vignettes/databases.html), but typically completes queries much faster due to its *columnar* storage architecture and bulk query processing model. MonetDBLite is based on free and open-source [MonetDB](https://www.monetdb.org/Home), a product of the [Centrum Wiskunde & Informatica](http://cwi.nl).

Both `MonetDBLite` and `RSQLite` rely on `library(DBI)` for their selection of functions, making the transfer of legacy `RSQLite` code over to `MonetDBLite` a cinch.  MonetDBLite behaves like a blazingly fast RSQLite.


## Installation

* the latest released version from [CRAN](http://cran.r-project.org/package=MonetDBLite) with

    ```R
    install.packages("MonetDBLite")
    ````

* the latest development version from github with

    ```R
    devtools::install_github("hannesmuehleisen/MonetDBLite")
    ```

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`.  The development version of MonetDBLite endures [sisyphean perpetual testing](http://monetdb.cwi.nl/testweb/web/sisyphus/) on both unix and windows machines.

## Speed Comparisons

MonetDBLite outperforms all other SQL databases currently accessible by the R language and ranks competitively among other [High Performace Computing](https://cran.r-project.org/web/views/HighPerformanceComputing.html) options available to R users.

![Alt text](speed_comparisons.png?raw=true "Speed Comparisons")

## Painless Startup

MonetDBLite provides a [`DBI`](http://cran.r-project.org/package=DBI) interface.

##### Temporary Database

To create a server (or to reconnect to a previously-initiated one), create a DBI connection as follows:

```R
library(DBI)
dbdir <- tempdir()
con <- dbConnect(MonetDBLite::MonetDBLite(), dbdir)
```

##### Permanent Database

If you want to store the database permanently on your local machine, you will need to initiate the `dbdir` using an empty folder on your local machine.

```R
library(DBI)
dbdir <- "C:/path/to/database_directory"
con <- dbConnect(MonetDBLite::MonetDBLite(), dbdir)
```

###### Notes

1. MonetDB often suffers hiccups when using network drives.  Whenever possible, connect to a MonetDBLite server stored on the same machine as the R session.
2. Failure to specify a database directory, i.e. `con <- dbConnect(MonetDBLite::MonetDBLite())` will initiate the server within your current working directory.

## Data Importation

##### Copying a `data.frame` object into a table within the MonetDBLite database.

Writing a R `data.frame` into MonetDBLite is efficient.  The most straightforward way of transferring a `data.frame` into a table stored within the database is through [`dbWriteTable`](http://www.inside-r.org/packages/cran/DBI/docs/dbWriteTable):

```R
# directly copy a data.frame object to a table within the database
dbWriteTable(con, "mtcars", mtcars)
```

##### Copying a CSV file into a table within the MonetDBLite database.

You can also directly import from a CSV by providing a file name instead of a `data.frame` to `dbWriteTable`:

```R
# construct an example CSV file on the local disk
csvfile <- tempfile()
write.csv(mtcars, csvfile, row.names = FALSE)

# directly copy a csv file to a table within the database
dbWriteTable(con, "mtcars2", csvfile)
```

##### Manually constructing a SQL table

The SQL interface of MonetDBLite can also be used to manually create a table and import data:
```R
# construct an example CSV file on the local disk
csvfile <- tempfile()
write.csv(mtcars, csvfile, row.names = FALSE)

# start a SQL transaction
dbBegin(con)
# construct an empty table within the database, using a manually-defined structure
dbSendQuery(con, "CREATE TABLE mtcars3 (mpg DOUBLE PRECISION, cyl INTEGER, disp DOUBLE PRECISION, hp INTEGER, drat DOUBLE PRECISION, wt DOUBLE PRECISION, qsec DOUBLE PRECISION, vs INTEGER, am INTEGER, gear INTEGER, carb INTEGER)")
# copy the contents of a CSV file into the database, using the MonetDB COPY INTO command
dbSendQuery(con, paste0("COPY OFFSET 2 INTO mtcars3 FROM '", csvfile, "' USING DELIMITERS ',','\n','\"' NULL as ''"))
# finalize the SQL transaction
dbCommit(con)
```

###### Notes

1. Note how we wrap the two commands in a transaction using `dbBegin` and `dbCommit`. This creates all-or-nothing semantics. See the MonetDB documentation for details on [how to create a table](https://www.monetdb.org/Documentation/Manuals/SQLreference/Tables) and [how to perform bulk input](https://www.monetdb.org/Documentation/Manuals/SQLreference/CopyInto).


#### Data Export

The contents of an entire table within the database can be transferred to an R `data.frame` object with [`dbReadTable`](http://www.inside-r.org/packages/cran/DBI/docs/dbReadTable).  Since MonetDBLite is most useful for the storage and analysis of large datasets, there might be limited utility to copying an entire table into working RAM in R.  The `dbReadTable` function and a SQL `SELECT * FROM tablename` command are equivalent:

```R
# directly copy a table within the database to an R data.frame object
x <- dbReadTable(con, "mtcars")

# directly copy a table within the database to an R data.frame object
y <- dbGetQuery(con, "SELECT * FROM mtcars" )
```



## Shutdown

MonetDBLite allows multiple concurrent *connections* to a single database, but does not allow more than one concurrent embedded server session (actively-running database). This is not an issue for most users since a single database can store thousands of individual tables.  To switch between databases, however, the first server must be shut down before the second can be opened.  To shutdown a server, include the `shutdown=TRUE` parameter:

```R
dbDisconnect(con, shutdown=TRUE)
```

MonetDBLite does not allow multiple R sessions to connect to a single database concurrently.  As soon as a single R session loads an embedded server, that server is locked to other R console windows.
