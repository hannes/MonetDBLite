# MonetDBLite

[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite.svg?branch=master)](https://travis-ci.org/hannesmuehleisen/MonetDBLite)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/MonetDBLite)](http://cran.r-project.org/package=MonetDBLite)

[MonetDBLite](https://www.monetdb.org/blog/monetdblite-r) is a SQL database that runs inside the [R environment for statistical computing](https://www.r-project.org/). It is similar in functionality to [RSQLite](https://cran.r-project.org/web/packages/RSQLite/index.html), but typically completes queries much faster due to its *columnar* storage architecture and bulk query processing model. MonetDBLite is based on [MonetDB](https://www.monetdb.org/Home).

## Installation

* the latest released version from CRAN with

    ```R
    install.packages(c("MonetDB.R", "MonetDBLite"))
    ````

* the latest development version from github with

    ```R
    install.packages("MonetDB.R"))
    devtools::install_github("hannesmuehleisen/MonetDBLite")
    ```

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`.

