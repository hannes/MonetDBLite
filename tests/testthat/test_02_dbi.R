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
	
	
	# tighten up append=T rules
	mtcars3 <- mtcars2 <- mtcars1 <- mtcars
	dbWriteTable(con, tname, mtcars)
	# INTEGER columns can be appended into a column already typed as DOUBLE PRECISION
	mtcars1[ , ] <- sapply( mtcars1[ , ] , as.integer )
	dbWriteTable(con, tname, mtcars1, append=T)
	expect_equal(tsize(con, tname), nrow(mtcars) * 2 )
	mtcars2 <- mtcars[ , sort( names( mtcars ) ) ]
	expect_error(dbWriteTable(con, tname, mtcars2, append=T))
	mtcars3[ , ] <- sapply( mtcars[ , ] , as.character )
	expect_error(dbWriteTable(con, tname, mtcars3, append=T))
	dbRemoveTable(con, tname)
	# DOUBLE PRECISION columns cannot be appended into a column already typed as INTEGER
	dbWriteTable(con, tname, mtcars1)
	expect_error(dbWriteTable(con, tname, mtcars, append=T))
	dbRemoveTable(con, tname)
	
	
})



like_match <- function(pattern, data, case_insensitive) {
	dbBegin(con)
	dbWriteTable(con, "borat", data.frame(a=data))
	if (!case_insensitive) 
		res <- dbGetQuery(con, paste0("SELECT a FROM borat WHERE a LIKE '",pattern,"'"))
	else 
		res <- dbGetQuery(con, paste0("SELECT a FROM borat WHERE a ILIKE '",pattern,"'"))
	dbRollback(con)
	return(nrow(res) == 1)
}

test_that("LIKE queries work", {
	
	expect_true(like_match("%", "", 0))
	expect_true(like_match("%", "asdf", 0))
	expect_true(like_match("a%f", "asdf", 0))
	expect_true(like_match("asd%", "asdf", 0))
	expect_true(like_match("as%", "asdf", 0))
	expect_true(like_match("%sdf", "asdf", 0))
	expect_true(like_match("%df", "asdf", 0))
	expect_true(like_match("a%f%k", "asdfghjk", 0))
	expect_true(like_match("%s%g%", "asdfghjk", 0))
	expect_true(like_match("%a%a%a%a%a%a%a%a%a%a%b", "aaaaaaaaaab", 0))

	expect_true(!like_match("t%", "asdf", 0))
	expect_true(!like_match("%t", "asdf", 0))
	expect_true(!like_match("y%t", "asdf", 0))

	expect_true(like_match("____", "asdf", 0))
	expect_true(like_match("as_f", "asdf", 0))
	expect_true(like_match("a__f", "asdf", 0))
	expect_true(like_match("_sd_", "asdf", 0))
	expect_true(like_match("a__fg__k", "asdfghjk", 0))
	expect_true(like_match("_sd_g_j_", "asdfghjk", 0))

	expect_true(!like_match("_", "", 0))
	expect_true(!like_match("___", "asdf", 0))
	expect_true(!like_match("_____", "asdf", 0))
	expect_true(!like_match("fd_a", "asdf", 0))

	expect_true(like_match("ASDF", "asdf", 1))
	expect_true(like_match("asdf", "asdf", 1))
	expect_true(like_match("asdf", "ASDF", 1))
	expect_true(like_match("ASDF", "ASDF", 1))

	expect_true(!like_match("ASDF", "asdf", 0))
	expect_true(like_match("asdf", "asdf", 0))
	expect_true(!like_match("asdf", "ASDF", 0))
	expect_true(like_match("ASDF", "ASDF", 0))	
})



test_that("LIKE queries work with funky characters", {
	skip_on_os("windows")
	# if the string module does not restart correctly this will fail
	expect_equal(dbGetQuery(con, "SELECT UPPER('mühleisen') as a")$a, "MÜHLEISEN")

	expect_true(like_match("M\xC3\x9Chleisen", "M\xC3\x9Chleisen", 0))
	expect_true(like_match("M%hleisen", "M\xC3\x9Chleisen", 0))
	expect_true(like_match("M%", "M\xC3\x9C", 0))
	expect_true(like_match("M__", "M\xC3\x9Ch", 0))
	expect_true(like_match("M_hleisen", "M\xC3\x9Chleisen", 0))

	expect_true(like_match("duck_quacks", "duck\xF0\x9F\xA6\x86quacks", 0))
	expect_true(like_match("duck%quacks", "duck\xF0\x9F\xA6\x86quacks", 0))
	expect_true(like_match("___", "\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86", 0))

	expect_true(like_match("M\xC3\xBCHLEISEN", "m\xC3\x9Chleisen", 1))
	expect_true(like_match("m\xC3\x9Chleisen", "M\xC3\xBCHLEISEN", 1))
	expect_true(like_match("\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86", 
	    "\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86\xF0\x9F\xA6\x86", 1))
	
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


test_that("parameter binding works correctly", {
	dbSendQuery(con, "create table monetdbtest (a string, i integer)")
	expect_true(dbExistsTable(con, tname))
	MonetDBLite::dbSendUpdate(con, "INSERT INTO monetdbtest VALUES (?, 42)", "asdf")
	MonetDBLite::dbSendUpdate(con, "INSERT INTO monetdbtest VALUES ('asdf', ?)", 43)
	MonetDBLite::dbSendUpdate(con, "INSERT INTO monetdbtest VALUES ('as?df', ?)", 44)
	MonetDBLite::dbSendUpdate(con, "INSERT INTO monetdbtest /* this is a question ? */ VALUES (?, ?)", "asdf" , 44)
	expect_equal(tsize(con, tname), 4)
	dbRemoveTable(con, tname)
})



test_that("columns can have reserved names", {
	dbBegin(con)
	dbWriteTable(con, tname, data.frame(year=42, month=12, day=24, some.dot=12))
	expect_true(dbExistsTable(con, tname))
	dbRollback(con)
})


test_that("number of affected rows is exported correctly", {
	dbWriteTable(con, tname, data.frame(a=c(1,1), b=c(2,3)))
	res <- dbSendQuery(con, "delete from monetdbtest where a = 1")
	expect_equal(dbGetRowsAffected(res), 2)
	dbRemoveTable(con, tname)
})


test_that("we can have empty result sets", {
	expect_true(!is.null(dbGetQuery(con, "SELECT * FROM tables WHERE 1=0")))
})


test_that("NA's survive bulk appends", {
	dbBegin(con)
	tdata <- as.logical(c(NA, TRUE, FALSE))
	dbWriteTable(con, tname, data.frame(col1 = tdata))
	# TODO: currently, booleans end up being integer columns in R
	expect_equal(as.logical(dbReadTable(con, tname)$col1), tdata)
	dbRollback(con)
})


test_that("dbWriteTable respects transactional boundaries", {
	dbBegin(con)
	dbWriteTable(con, tname, iris)
	expect_true(dbExistsTable(con, tname))
	expect_true(tsize(con, tname) > 0)
	dbRollback(con)
	expect_false(dbExistsTable(con, tname))
	dbWriteTable(con, tname, iris)
	expect_true(dbExistsTable(con, tname))
	expect_true(tsize(con, tname) > 0)
	dbBegin(con)
	dbRollback(con)
	expect_true(dbExistsTable(con, tname))
	expect_true(tsize(con, tname) > 0)
	dbRemoveTable(con, tname)
	expect_false(dbExistsTable(con, tname))
})


test_that("we can write raw values", {
	dbBegin(con)
	dbWriteTable(con, tname, data.frame(a=c(1,2), b=I(list(raw(42), raw(43)))))
	expect_true(dbExistsTable(con, tname))
	dbRollback(con)
	expect_false(dbExistsTable(con, tname))
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

