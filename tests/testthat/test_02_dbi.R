library(testthat)
library(DBI)

con <- FALSE
tname <- "monetdbtest"
dbfolder <- file.path(tempdir(), "dbidir")

data(iris)

tsize <- function(conn, tname) 
 	as.integer(dbGetQuery(con, paste0("SELECT COUNT(*) FROM ", tname))[[1]])

test_that("we can connect", {
	drv <- MonetDBLite::MonetDBLite()
	expect_is(drv, "MonetDBDriver")

	expect_true(dbIsValid(drv))

	con <<- dbConnect(drv, dbfolder)
	expect_is(con, "MonetDBConnection")
	expect_true(dbIsValid(con))
	expect_equal(length(dbListTables(con)), 0L)
})


test_that("raw table creation and inserts work", {
	dbSendQuery(con, "CREATE TABLE monetdbtest (a varchar(10), b integer)")
	expect_true(dbExistsTable(con, tname))

	expect_false(dbExistsTable(con, "monetdbtest2"))
	expect_true(tname %in% dbListTables(con))

	dbSendQuery(con, "INSERT INTO monetdbtest VALUES ('one', 1)")
	dbSendQuery(con, "INSERT INTO monetdbtest VALUES ('two', 2)")
	expect_equal(dbGetQuery(con, "SELECT count(*) FROM monetdbtest")[[1]], 2L)
	expect_equal(dbReadTable(con, tname)[[1]], c("one", "two"))
	expect_equal(dbReadTable(con, tname)[[2]], c(1, 2))

 # TODO: blob/date/time/decimal handling
	dbRemoveTable(con, tname)
	expect_false(dbExistsTable(con, tname))
	expect_equal(length(dbListTables(con)), 0L)
})


test_that("dbWriteTable works", {
	dbWriteTable(con, tname, iris)
	expect_true(dbExistsTable(con, tname))
	expect_equal(dbListFields(con, tname), names(iris))
})


test_that("results are correct", {
	iris2 <- dbReadTable(con, tname)
	expect_equal(dim(iris), dim(iris2))

	res <- dbSendQuery(con, "SELECT \"Species\", \"Sepal.Width\" FROM monetdbtest")
	expect_is(res, "MonetDBResult")
	expect_true(dbIsValid(res))
	expect_true(MonetDBLite::isIdCurrent(res))
	expect_true(res@env$success)

	expect_equal(dbColumnInfo(res)[[1,1]], "Species")
	expect_equal(dbColumnInfo(res)[[2,1]], "Sepal.Width")
	expect_equal(dbGetRowCount(res), 0)

	data <- dbFetch(res, 10)
	expect_equal(dbGetRowCount(res), 10)

	expect_equal(dim(data)[[1]], 10)
	expect_equal(dim(data)[[2]], 2)
	expect_false(dbHasCompleted(res))

	data2 <- dbFetch(res, -1)
	expect_equal(dbGetRowCount(res), 150)

	expect_equal(dim(data2)[[1]], 140)
	expect_true(dbHasCompleted(res))
	expect_true(dbIsValid(res))
	dbClearResult(res)
	expect_false(dbIsValid(res))
	
	dbRemoveTable(con,tname)
	expect_false(dbExistsTable(con, tname))
})


test_that("csv import works", {
	tf <- tempfile()
	write.table(iris, tf, sep=",", row.names=FALSE)
	tname2 <- "Need to quote this table name"
	tname3 <- "othermethod"
	MonetDBLite::monetdb.read.csv(con, tf, tname)
	MonetDBLite::monetdb.read.csv(con, tf, tname2)
	dbWriteTable(con, tname3, tf)
	expect_true(dbExistsTable(con, tname))
	expect_true(dbExistsTable(con, tname2))
	expect_true(dbExistsTable(con, tname3))

	iris3 <- dbReadTable(con, tname)
	iris4 <- dbReadTable(con, tname2)
	iris5 <- dbReadTable(con, tname3)
	expect_equal(dim(iris), dim(iris3))
	expect_equal(dim(iris), dim(iris4))
	expect_equal(dim(iris), dim(iris5))
	expect_equal(dbListFields(con, tname), names(iris))
	expect_equal(dbListFields(con, tname2), names(iris))
	expect_equal(dbListFields(con, tname3), names(iris))

	dbRemoveTable(con, tname)
	dbRemoveTable(con, tname2)
	dbRemoveTable(con, tname3)
	expect_false(dbExistsTable(con, tname))
	expect_false(dbExistsTable(con, tname2))
	expect_false(dbExistsTable(con, tname3))
})

test_that("fwf import works", {
	tf <- tempfile()
	gdata::write.fwf(mtcars, tf, colnames = FALSE)
	expect_false(dbExistsTable(con, "mtcars"))
	dbSendQuery(con, "CREATE TABLE mtcars (mpg DOUBLE PRECISION, cyl DOUBLE PRECISION, disp DOUBLE PRECISION, hp DOUBLE PRECISION, drat DOUBLE PRECISION, wt DOUBLE PRECISION, qsec DOUBLE PRECISION, vs DOUBLE PRECISION, am DOUBLE PRECISION, gear DOUBLE PRECISION, carb DOUBLE PRECISION)")
	expect_true(dbExistsTable(con, "mtcars"))
	res <- dbSendQuery(con, paste0("COPY INTO mtcars FROM '", tf, "' FWF (4, 2, 6, 4, 5, 6, 6, 2, 2, 2, 2)"))
	expect_equal(nrow(mtcars), nrow(dbReadTable(con, "mtcars")))
	expect_identical(unlist(mtcars), unlist(dbReadTable(con, "mtcars")))
	dbWriteTable(con, "mtcars2", mtcars)
	expect_identical(dbReadTable(con, "mtcars"),dbReadTable(con, "mtcars2"))
	dbRemoveTable(con, "mtcars")
	dbRemoveTable(con, "mtcars2")
	expect_false(dbExistsTable(con, "mtcars"))
	expect_false(dbExistsTable(con, "mtcars2"))
})


test_that("various parameters to dbWriteTable work as expected", {
	dbWriteTable(con, tname, mtcars, append=F, overwrite=F)
	expect_true(dbExistsTable(con, tname))
	expect_equal(tsize(con, tname), nrow(mtcars))
	expect_error(dbWriteTable(con, tname, mtcars, append=F, overwrite=F))
	expect_error(dbWriteTable(con, tname, mtcars, overwrite=T, append=T))

	dbWriteTable(con, tname, mtcars, append=F, overwrite=T)
	expect_true(dbExistsTable(con, tname))
	expect_equal(tsize(con, tname), nrow(mtcars))

	dbWriteTable(con, tname, mtcars, append=T, overwrite=F)
	expect_equal(tsize(con, tname), nrow(mtcars) * 2)

	dbRemoveTable(con, tname)
	dbWriteTable(con, tname, mtcars, append=F, overwrite=F, insert=T)
	expect_equal(tsize(con, tname), nrow(mtcars))
	dbRemoveTable(con, tname)
})


test_that("transactions are on ACID", {
	dbSendQuery(con, "create table monetdbtest (a integer)")
	expect_true(dbExistsTable(con, tname))
	dbBegin(con)
	dbSendQuery(con, "INSERT INTO monetdbtest VALUES (42)")
	expect_equal(tsize(con, tname), 1)
	dbRollback(con)
	expect_equal(tsize(con, tname), 0)
	dbBegin(con)
	dbSendQuery(con, "INSERT INTO monetdbtest VALUES (42)")
	expect_equal(tsize(con, tname), 1)
	dbCommit(con)
	expect_equal(tsize(con, tname), 1)
	dbRemoveTable(con, tname)
})

test_that("LIKE queries work", {
	expect_equal(1, NROW(dbGetQuery(con, "select id from tables where name like '%sche_as%' limit 1")))
})

test_that("strings can have exotic characters", {
	skip_on_os("windows")
	dbSendQuery(con, "create table monetdbtest (a string)")
	expect_true(dbExistsTable(con, tname))
	dbSendQuery(con, "INSERT INTO monetdbtest VALUES ('Роман Mühleisen')")
	expect_equal("Роман Mühleisen", dbGetQuery(con,"SELECT a FROM monetdbtest")$a[[1]])
	dbSendQuery(con, "DELETE FROM monetdbtest")
	MonetDBLite::dbSendUpdate(con, "INSERT INTO monetdbtest (a) VALUES (?)", "Роман Mühleisen")
	expect_equal("Роман Mühleisen", dbGetQuery(con,"SELECT a FROM monetdbtest")$a[[1]])
	dbRemoveTable(con, tname)
})


test_that("columns can have reserved names", {
	dbBegin(con)
	dbWriteTable(con, tname, data.frame(year=42, month=12, day=24, some.dot=12), transaction=F)
	expect_true(dbExistsTable(con, tname))
	dbRollback(con)
})


test_that("we can have empty result sets", {
	expect_true(!is.null(dbGetQuery(con, "SELECT * FROM tables WHERE 1=0")))
})


test_that("NA's survive bulk appends", {
	dbBegin(con)
	tdata <- as.logical(c(NA, TRUE, FALSE))
	dbWriteTable(con, tname, data.frame(col1 = tdata), transaction=F)
	# TODO: currently, booleans end up being integer columns in R
	expect_equal(as.logical(dbReadTable(con, tname)$col1), tdata)
	dbRollback(con)
})

test_that("we can write raw values", {
	dbBegin(con)
	dbWriteTable(con, tname, data.frame(a=c(1,2), b=I(list(raw(42), raw(43)))))
	expect_true(dbExistsTable(con, tname))
	dbRollback(con)
})


test_that("we can disconnect", {
	expect_true(dbIsValid(con))
	dbDisconnect(con)
	expect_false(dbIsValid(con))
	con2 <- dbConnect(MonetDBLite::MonetDBLite(), dbfolder)
	expect_true(dbIsValid(con2))
	dbDisconnect(con2, shutdown=TRUE)
	expect_false(dbIsValid(con2))
	con <<- NULL
	gc()
})


