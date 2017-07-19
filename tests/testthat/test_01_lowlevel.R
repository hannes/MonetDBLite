library(testthat)

dbdir <- file.path(tempdir(), "db1")
dbdir2 <- file.path(tempdir(), "db2")
dbdir3 <- file.path(tempdir() , "space MonetDB" )

test_that("db starts up", {
	dbdir <- tempdir()
	expect_equal(MonetDBLite:::monetdb_embedded_startup(dbdir), TRUE)
	expect_error(MonetDBLite:::monetdb_embedded_startup("/tmp"))
	expect_equal(MonetDBLite:::monetdb_embedded_startup(dbdir), TRUE)
})

test_that("one can connect", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	expect_that(con, is_a("monetdb_embedded_connection"))
	MonetDBLite:::monetdb_embedded_disconnect(con)
	# closed connections can be closed again
	MonetDBLite:::monetdb_embedded_disconnect(con)
	expect_error(MonetDBLite:::monetdb_embedded_disconnect(NULL))
	expect_error(MonetDBLite:::monetdb_embedded_disconnect(42))
})

test_that("db runs queries and returns results", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 42 as single_value")
	expect_equal(res$type, 1)
	expect_equal(res$tuples$single_value, 42)
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables")
	expect_equal(res$type, 1)
	expect_is(res$tuples, "data.frame")
	expect_true(nrow(res$tuples) > 0)
	expect_true(ncol(res$tuples) > 0)
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("a disconnected connection cannot be used", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "SELECT 42")
	MonetDBLite:::monetdb_embedded_disconnect(con)
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 42")
	expect_equal(res$type, "!")
})

test_that("commit", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "START TRANSACTION")
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo (i integer)")
	res <- MonetDBLite:::monetdb_embedded_query(con, "INSERT INTO foo VALUES (42)")
	expect_equal(res$type, 2)
	expect_equal(res$rows, 1)
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT i FROM foo")
	expect_equal(res$tuples$i, 42)
	MonetDBLite:::monetdb_embedded_query(con, "COMMIT")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT i FROM foo")
	expect_equal(res$tuples$i, 42)
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables WHERE name='foo'")
	expect_equal(nrow(res$tuples), 1)
	MonetDBLite:::monetdb_embedded_query(con, "DROP TABLE foo")
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("rollback works", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "START TRANSACTION")
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo (i integer)")
	MonetDBLite:::monetdb_embedded_query(con, "INSERT INTO foo VALUES (42)")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT i FROM foo")
	expect_equal(res$tuples$i, 42)
	MonetDBLite:::monetdb_embedded_query(con, "ROLLBACK")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables WHERE name='foo'")
	expect_equal(nrow(res$tuples), 0)
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT i FROM foo")
	expect_equal(res$type, "!")
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("rollback with errors", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con,"START TRANSACTION")
	res <- MonetDBLite:::monetdb_embedded_query(con, "BULLSHIT")
	expect_equal(res$type, "!")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 1")
	expect_equal(res$type, "!")
	MonetDBLite:::monetdb_embedded_query(con, "ROLLBACK")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 42")
	expect_equal(res$type, 1)
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("transaction immediately after rollback", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "START TRANSACTION")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 42")
	expect_equal(res$type, 1)
	MonetDBLite:::monetdb_embedded_query(con, "ROLLBACK")
	MonetDBLite:::monetdb_embedded_query(con, "START TRANSACTION")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT 42")
	expect_equal(res$type, 1)
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("pointless rollback/commit", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "SELECT 1")$type, 1)
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "COMMIT")$type, "!")
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "SELECT 1")$type, 1)
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "ROLLBACK")$type, "!")
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "SELECT 1")$type, 1)
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("inserting data", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo(i INTEGER, j INTEGER)")
	MonetDBLite:::monetdb_embedded_append(con, "foo", data.frame(i=1:10, j=21:30))
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM foo")
	expect_equal(nrow(res$tuples), 10)
	expect_equal(ncol(res$tuples), 2)
	expect_equal(res$tuples$i, 1:10)
	expect_equal(res$tuples$j, 21:30)
	MonetDBLite:::monetdb_embedded_query(con, "DROP TABLE foo")
	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("selecting null works", {
	con <- MonetDBLite:::monetdb_embedded_connect()

	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT NULL as nl")
	expect_equal(nrow(res$tuples), 1)
	expect_equal(ncol(res$tuples), 1)
	expect_true(is.na(res$tuples$nl))

	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT NULL AS nl, name FROM tables")
	expect_true(nrow(res$tuples) > 1)
	expect_equal(ncol(res$tuples), 2)
	expect_true(all(is.na(res$tuples$nl)))

	MonetDBLite:::monetdb_embedded_disconnect(con)
})

test_that("the garbage collector closes connections", {
	skip("not now")
	# there are 128 connections max. if gc() does not close them, the second batch will fail
	conns <- lapply(1:128, function(x) MonetDBLite:::monetdb_embedded_connect())
	expect_error(MonetDBLite:::monetdb_embedded_connect())

	rm(conns)
	gc()

	conns <- lapply(1:128, function(x) MonetDBLite:::monetdb_embedded_connect())
	rm(conns)
	gc()
})





test_that("the logger does not misbehave", {
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo(i INTEGER, j INTEGER)")
	Sys.sleep(5)
	MonetDBLite:::monetdb_embedded_query(con, "DROP TABLE foo")
	MonetDBLite:::monetdb_embedded_disconnect(con)
})


test_that("shutdown does work", {
	MonetDBLite:::monetdb_embedded_shutdown()
	MonetDBLite:::monetdb_embedded_shutdown()
})


test_that("starting up in same dir again works", {
	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo1(a1 INTEGER)")
	MonetDBLite:::monetdb_embedded_query(con, "INSERT INTO foo1 VALUES(42)")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT a1 FROM foo1")
	expect_equal(nrow(res$tuples), 1)
	expect_equal(ncol(res$tuples), 1)
	expect_equal(res$tuples$a1, 42)

	MonetDBLite:::monetdb_embedded_disconnect(con)
	MonetDBLite:::monetdb_embedded_shutdown()
})



test_that("connections from shut down db's dont work", {
	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_shutdown()
	expect_error(MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables"))
	MonetDBLite:::monetdb_embedded_disconnect(con)
})


test_that("db starts up in other directory", {
	MonetDBLite:::monetdb_embedded_startup(dbdir2)
	con <- MonetDBLite:::monetdb_embedded_connect()
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM foo1")$type, "!")
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo2(a2 INTEGER)")
	MonetDBLite:::monetdb_embedded_query(con, "INSERT INTO foo2 VALUES(84)")
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT a2 FROM foo2")
	expect_equal(nrow(res$tuples), 1)
	expect_equal(ncol(res$tuples), 1)
	expect_equal(res$tuples$a2, 84)

	MonetDBLite:::monetdb_embedded_disconnect(con)
	MonetDBLite:::monetdb_embedded_shutdown()
})

test_that("db allows spaces in directory names", {
	MonetDBLite:::monetdb_embedded_startup(dbdir3)
	con <- MonetDBLite:::monetdb_embedded_connect()
	
	res <- MonetDBLite:::monetdb_embedded_query(con, "SELECT name , value FROM Sys.env()")$tuples
	expect_equal( res[ res$name == 'gdk_dbname' , 'value' ] , 'space MonetDB' )
	
	MonetDBLite:::monetdb_embedded_disconnect(con)
	MonetDBLite:::monetdb_embedded_shutdown()
})

test_that("connections from previous run cannot be reused", {
	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_shutdown()
	MonetDBLite:::monetdb_embedded_startup(dbdir2)
	expect_equal(MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables")$type, "!")
	MonetDBLite:::monetdb_embedded_disconnect(con)
	MonetDBLite:::monetdb_embedded_shutdown()
})

test_that("running transactions connections dont prevent restart", {
	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_query(con, "START TRANSACTION")
	MonetDBLite:::monetdb_embedded_query(con, "CREATE TABLE foo (i integer)")
	MonetDBLite:::monetdb_embedded_query(con, "INSERT INTO foo VALUES (42)")
	MonetDBLite:::monetdb_embedded_shutdown()
	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	MonetDBLite:::monetdb_embedded_shutdown()
})

# https://www.monetdb.org/bugzilla/show_bug.cgi?id=3925
test_that("dynamic NULL AS statements translate cleanly", {

	MonetDBLite:::monetdb_embedded_startup(dbdir3)
	con <- MonetDBLite:::monetdb_embedded_connect()
		
	expect_equal( MonetDBLite:::monetdb_embedded_query( con , "SELECT CAST(NULL AS INTEGER) AS col1" )$tuples$col1 , as.integer(NA) )
	expect_equal( MonetDBLite:::monetdb_embedded_query( con , "SELECT CAST(NULL * 7 AS INTEGER) AS col1" )$tuples$col1 , as.integer(NA) )
		
	expect_equal( MonetDBLite:::monetdb_embedded_query( con , "SELECT CAST(NULL AS INTEGER) AS col1 , name AS col2 FROM Sys.env()" )$tuples[ 1 , 1] , as.integer(NA) )
	
	MonetDBLite:::monetdb_embedded_disconnect(con)
	MonetDBLite:::monetdb_embedded_shutdown()
	
})

test_that("we can restart without exhausting scenarios", {
	for (i in 1:10) {
		MonetDBLite:::monetdb_embedded_startup(dbdir3)
		con <- MonetDBLite:::monetdb_embedded_connect()
		MonetDBLite:::monetdb_embedded_query(con, "SELECT * FROM tables")
		MonetDBLite:::monetdb_embedded_disconnect(con)
		MonetDBLite:::monetdb_embedded_shutdown()
	}
})

test_that("check for database corruption at the conclusion of all other tests", {

	corruption_sniff <- "select tables.name, columns.name, location from tables inner join columns on tables.id=columns.table_id left join storage on tables.name=storage.table and columns.name=storage.column where location is null and tables.name not in ('tables', 'columns', 'users', 'querylog_catalog', 'querylog_calls', 'querylog_history', 'tracelog', 'sessions', 'optimizers', 'environment', 'queue', 'rejects', 'storage', 'storagemodel', 'tablestoragemodel')"

	MonetDBLite:::monetdb_embedded_startup(dbdir)
	con <- MonetDBLite:::monetdb_embedded_connect()
	cs <- MonetDBLite:::monetdb_embedded_query( con , corruption_sniff )
	expect_equal(as.character(cs$type), "1")
	expect_equal(0, nrow( cs$tuples ))
	MonetDBLite:::monetdb_embedded_shutdown()

	MonetDBLite:::monetdb_embedded_startup(dbdir2)
	con <- MonetDBLite:::monetdb_embedded_connect()
	cs <- MonetDBLite:::monetdb_embedded_query( con , corruption_sniff )
	expect_equal( as.character(cs$type), "1" )
	expect_equal(0, nrow( cs$tuples ))
	MonetDBLite:::monetdb_embedded_shutdown()

	MonetDBLite:::monetdb_embedded_startup(dbdir3)
	con <- MonetDBLite:::monetdb_embedded_connect()
	cs <- MonetDBLite:::monetdb_embedded_query( con , corruption_sniff )
	expect_equal( as.character(cs$type), "1" )
	expect_equal(0, nrow( cs$tuples))
	MonetDBLite:::monetdb_embedded_shutdown()

	expect_false(MonetDBLite:::monetdb_embedded_env$is_started)
	expect_equal(MonetDBLite:::monetdb_embedded_env$started_dir, "")
})

