# MonetDBLite

[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite.svg?branch=master)](https://travis-ci.org/hannesmuehleisen/MonetDBLite)
[![Build Status](https://ci.appveyor.com/api/projects/status/github/hannesmuehleisen/MonetDBLite?branch=master&svg=true)](https://ci.appveyor.com/project/hannesmuehleisen/MonetDBLite)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/MonetDBLite)](https://CRAN.R-project.org/package=MonetDBLite) 
[![](http://cranlogs.r-pkg.org/badges/MonetDBLite)](https://dgrtwo.shinyapps.io/cranview/)

[MonetDBLite](https://www.monetdb.org/blog/monetdblite-r) is a SQL database that runs inside the [R environment for statistical computing](https://www.r-project.org/) and does not require the installation of any external software. MonetDBLite is based on free and open-source [MonetDB](https://www.monetdb.org/Home), a product of the [Centrum Wiskunde & Informatica](http://www.cwi.nl).

MonetDBLite is similar in functionality to [RSQLite](https://CRAN.R-project.org/package=RSQLite), but typically completes queries blazingly fast due to its *columnar* storage architecture and bulk query processing model.  Since both of these embedded SQL options rely on the the R [DBI](https://CRAN.R-project.org/package=DBI) interface, the conversion of legacy `RSQLite` project syntax over to `MonetDBLite` code should be a cinch.

MonetDBLite works seamlessly with [the dplyr grammar of data manipulation](https://github.com/hadley/dplyr).  For a detailed tutorial of how to work with database-backed dplyr commands, see [the dplyr databases vignette](https://CRAN.R-project.org/package=dplyr).  To reproduce this vignette using MonetDBLite rather than RSQLite, simply replace the functions ending with `*_sqlite` with the suffix `*_monetdblite` instead.


## Installation

* the latest released version from [CRAN](https://CRAN.R-project.org/package=MonetDBLite) with

    ```R
    install.packages("MonetDBLite")
    ````

* the latest development version from github with

    ```R
    devtools::install_github("hannesmuehleisen/MonetDBLite")
    ```

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`.  The development version of MonetDBLite endures [sisyphean perpetual testing](http://monetdb.cwi.nl/testweb/web/sisyphus/) on both unix and windows machines.

## Speed Comparisons

MonetDBLite outperforms all other SQL databases currently accessible by the R language and ranks competitively among other [High Performace Computing](https://CRAN.R-project.org/view=HighPerformanceComputing) options available to R users.  For more detail, see [Szilard Pafka's benchmarks](https://github.com/szilard/benchm-databases).

<p align="center"><img src="https://raw.githubusercontent.com/hannesmuehleisen/MonetDBLite/master/speed_comparisons.png" width="500"></p>


## Painless Startup

If you want to store a database permanently (or to reconnect to a previously-initiated one), set the `dbdir` to some folder path on your local machine.  A new database that you would like to store permanently should be directed to an empty folder:

```R
library(DBI)
dbdir <- "C:/path/to/database_directory"
con <- dbConnect(MonetDBLite::MonetDBLite(), dbdir)
```

To create a temporary server, create a DBI connection as follows:

```R
library(DBI)
con <- dbConnect(MonetDBLite::MonetDBLite())
```

Note that the above temporary server command is equivalent to initiating the server in the `tempdir()` of your R session:
```R
library(DBI)
dbdir <- tempdir()
con <- dbConnect(MonetDBLite::MonetDBLite(), dbdir)
```


Note that MonetDB may hiccup when using network drives, use servers stored on the same machine as the R session.


## Versatile Data Importation

To efficiently copy a `data.frame` object into a table within the MonetDBLite database, use [`dbWriteTable`](http://www.inside-r.org/packages/cran/DBI/docs/dbWriteTable):

```R
# directly copy a data.frame object to a table within the database
dbWriteTable(con, "mtcars", mtcars)
```

To load a CSV file into a table within the database, provide the local file path of a `.csv` file to `dbWriteTable`:

```R
# construct an example CSV file on the local disk
csvfile <- tempfile()
write.csv(mtcars, csvfile, row.names = FALSE)

# directly copy a csv file to a table within the database
dbWriteTable(con, "mtcars2", csvfile)

# append the same table to the bottom of the previous table
dbWriteTable(con, "mtcars2", csvfile, append=TRUE)

# overwrite the table with a new table
dbWriteTable(con, "mtcars2", csvfile, overwrite=TRUE)
```

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

Note how we wrap the two commands in a transaction using `dbBegin` and `dbCommit`. This creates all-or-nothing semantics. See the MonetDB documentation for details on [how to create a table](https://www.monetdb.org/Documentation/Manuals/SQLreference/Tables) and [how to perform bulk input](https://www.monetdb.org/Documentation/Manuals/SQLreference/CopyInto).

## Reading and Writing (Queries and Updates)

This section reviews how to pass SQL queries to an embedded server session and then pull those results into R.  If you are interested in learning SQL syntax, perhaps review the [w3schools SQL tutorial](http://www.w3schools.com/sql/) or the [MonetDB SQL Reference Manual](https://www.monetdb.org/Documentation/SQLreference).

The `dbGetQuery` function sends a `SELECT` statement to the server, then returns the result as a `data.frame`:

```R
# calculate the average miles per gallon, grouped by number of cylinders
dbGetQuery(con, "SELECT cyl, AVG(mpg) FROM mtcars GROUP BY cyl" )

# calculate the number of records in the _mtcars_ table
dbGetQuery(con, "SELECT COUNT(*) FROM mtcars" )
```


The `dbSendQuery` function can open a connection to some read-only query.  Once initiated, the `res` object below can then be accessed repeatedly with a `fetch` command:

```R
res <- dbSendQuery(con, "SELECT wt, gear FROM mtcars")
first_sixteen_records <- fetch(res, n=16)
dbHasCompleted(res)
second_sixteen_records <- fetch(res, n=16)
dbHasCompleted(res)
dbClearResult(res)
```

The `dbSendQuery` function should also be used to make edits to tables within the database:

```R
# add a new column of kilometers per liter
dbSendQuery(con, "ALTER TABLE mtcars ADD COLUMN kpl DOUBLE PRECISION" )

# populate that new column with kilometers per liter
dbSendQuery(con, "UPDATE mtcars SET kpl = mpg * 0.425144" )
```


## Glamorous Data Export

The contents of an entire table within the database can be transferred to an R `data.frame` object with [`dbReadTable`](http://www.inside-r.org/packages/cran/DBI/docs/dbReadTable).  Since MonetDBLite is most useful for the storage and analysis of large datasets, there might be limited utility to copying an entire table into working RAM in R.  The `dbReadTable` function and a SQL `SELECT * FROM tablename` command are equivalent:

```R
# directly copy a table within the database to an R data.frame object
x <- dbReadTable(con, "mtcars")

# directly copy a table within the database to an R data.frame object
y <- dbGetQuery(con, "SELECT * FROM mtcars" )
```

## Special database informational functions

Certain administrative commands can be sent using either `dbSendQuery` or with a custom DBI function:

```R
# remove the table `mtcars2` from the database
dbSendQuery(con, "DROP TABLE mtcars2" )

# remove the table `mtcars3` from the database
dbRemoveTable(con, "mtcars3" )
```

Other administrative commands can be sent using `dbGetQuery` or with a custom DBI function:
```R
# list the column names of the mtcars table within the database
names(dbGetQuery(con, "SELECT * FROM mtcars LIMIT 1" ))

# list the column names of the mtcars table within the database
dbListFields(con, "mtcars" )
```

Still other administrative commands are much easier to simply use the custom DBI function:
```R
# print the names of all tables within the current database
dbListTables(con)
```


## Shutdown

MonetDBLite allows multiple concurrent *connections* to a single database, but does not allow more than one concurrent embedded server session (actively-running database). This is not an issue for most users since a single database can store thousands of individual tables.  To switch between databases, however, the first server must be shut down before the second can be opened.  To shutdown a server, include the `shutdown=TRUE` parameter:

```R
dbDisconnect(con, shutdown=TRUE)
```
To globally shut down the embedded server session without the `con` connection object, use:
```R
MonetDBLite::monetdblite_shutdown()
```

MonetDBLite does not allow multiple R sessions to connect to a single database concurrently.  As soon as a single R session loads an embedded server, that server is locked down and inaccessible to other R consoles.
