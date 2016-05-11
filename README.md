# MonetDBLite

[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite.svg?branch=master)](https://travis-ci.org/hannesmuehleisen/MonetDBLite)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/MonetDBLite)](http://cran.r-project.org/package=MonetDBLite)

[MonetDBLite](https://www.monetdb.org/blog/monetdblite-r) is a SQL database that runs inside the [R environment for statistical computing](https://www.r-project.org/). It is similar in functionality to [RSQLite](https://cran.r-project.org/web/packages/RSQLite/index.html), but typically completes queries much faster due to its *columnar* storage architecture and bulk query processing model. MonetDBLite is based on [MonetDB](https://www.monetdb.org/Home).

## Installation

* the latest released version from CRAN with

    ```R
    install.packages("MonetDBLite")
    ````

* the latest development version from github with

    ```R
    devtools::install_github("hannesmuehleisen/MonetDBLite")
    ```

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`.


## Startup

MonetDBLite uses a [`DBI`](https://github.com/rstats-db/DBI) interface trought the [`MonetDB.R`](https://cran.r-project.org/web/packages/MonetDB.R/) package. To startup a server, create a DBI connection as follows:

```R
library(DBI)
dbdir <- tempdir()
con <- dbConnect(MonetDB.R::MonetDBLite(), dbdir)
```

If you want to keep the database around for later, change `dbdir` to point to some meaningful path.

## Data Import

Writing a R `data.frame` into MonetDBLite is efficient, the easiest way of creating a table is through [`dbWriteTable`](http://www.inside-r.org/packages/cran/DBI/docs/dbWriteTable):
```R
dbWriteTable(con, "mtcars", mtcars)
```

Pro Tip: Use [`fread`](http://www.inside-r.org/packages/cran/data.table/docs/fread) from the [`data.table` package](https://github.com/Rdatatable/data.table/wiki) to read larger CSV files into R, then use dbWriteTable to add them to the database.

You can also use the convenience function [`monetdb.read.csv`](http://www.inside-r.org/packages/cran/monetdb.r/docs/monetdb.read.csv) to directly import from CSV:
```R
csvfile <- tempfile()
write.table(mtcars, csvfile, sep=",", row.names = FALSE)
MonetDB.R::monetdb.read.csv(con, csvfile, "mtcars2")
```

The SQL interface of MonetDBLite can also be used to manually create a table and import data:
```R
dbBegin(con)
dbSendQuery(con, "CREATE TABLE mtcars3 (mpg DOUBLE PRECISION, cyl INTEGER, disp DOUBLE PRECISION, hp INTEGER, drat DOUBLE PRECISION, wt DOUBLE PRECISION, qsec DOUBLE PRECISION, vs INTEGER, am INTEGER, gear INTEGER, carb INTEGER)")
dbSendQuery(con, paste0("COPY OFFSET 2 INTO mtcars3 FROM '",csvfile,"' USING DELIMITERS ',','\n','\"' NULL as ''"))
dbCommit(con)
```

Note how we wrap the two commands in a transaction using `dbBegin` and `dbCommit`. This creates all-or-nothing semantics. See the MonetDB documentation for details on [how to create a table](https://www.monetdb.org/Documentation/Manuals/SQLreference/Tables) and [how to perform bulk input](https://www.monetdb.org/Documentation/Manuals/SQLreference/CopyInto).
