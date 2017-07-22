library(testthat)
library(dplyr)

dbdir <- file.path(tempdir(), "dplyrdir")
my_db_sqlite <- FALSE
my_db_monetdb <- FALSE
flights_sqlite <- FALSE
flights_monetdb <- FALSE

test_that("we can connect", {
	my_db_sqlite <<- src_sqlite(tempfile(), create = T)
	my_db_monetdb <<- MonetDBLite::src_monetdblite(dbdir)
})

flights <- nycflights13::flights
flights$time_hour <- as.numeric( flights$time_hour )


test_that("dplyr copy_to()", {

	flights_sqlite <<- copy_to(my_db_sqlite, flights, temporary = FALSE, indexes = list(
	  c("year", "month", "day"), "carrier", "tailnum"))

	flights_monetdb <<- copy_to(my_db_monetdb, flights, temporary = FALSE, indexes = list(
	  c("year", "month", "day"), "carrier", "tailnum"))

})


test_that("explain works", {
	explain(flights_monetdb)
	explain(flights_sqlite)
})

test_that("sample works", {
	a <- collect(sample_n(flights_monetdb, 10))
	b <- collect(sample_frac(flights_monetdb, 0.1))
})


test_that("dplyr tbl( sql() )", {
	expect_equal( 
		collect(tbl(my_db_sqlite, dbplyr::sql("SELECT * FROM flights"))) ,
		collect(tbl(my_db_monetdb, dbplyr::sql("SELECT * FROM flights"))) 
	)
})


test_that("dplyr basic verbs", {
	expect_equal(
		collect(select(flights_sqlite, year:day, dep_delay, arr_delay)) ,
		collect(select(flights_monetdb, year:day, dep_delay, arr_delay))
	)
	expect_equal(
		collect(filter(flights_sqlite, dep_delay > 240)) ,
		collect(filter(flights_monetdb, dep_delay > 240))
	)
	expect_equal(
		collect(arrange(flights_sqlite, year, month, day, dep_time)) ,
		collect(arrange(flights_monetdb, year, month, day, dep_time))
	)
	expect_equal(
		collect(mutate(flights_sqlite, speed = air_time / distance)) ,
		collect(mutate(flights_monetdb, speed = air_time / distance))
	)
	expect_equal(
		data.frame(summarise(flights_sqlite, delay = mean(dep_time))),
		data.frame(summarise(flights_monetdb, delay = mean(dep_time)))
	)
})


test_that("dplyr multiple objects", {
	expect_equal(
		collect(c1_sqlite <- filter(flights_sqlite, year == 2013, month == 1, day == 1)),
		collect(c1_monetdb <- filter(flights_monetdb, year == 2013, month == 1, day == 1))
	)

	expect_equal(
		collect(c2_sqlite <- select(c1_sqlite, year, month, day, carrier, dep_delay, air_time, distance)),
		collect(c2_monetdb <- select(c1_monetdb, year, month, day, carrier, dep_delay, air_time, distance))
	)

	expect_equal(
		collect(c3_sqlite <- mutate(c2_sqlite, speed = distance / air_time * 60)),
		collect(c3_monetdb <- mutate(c2_monetdb, speed = distance / air_time * 60))
	)

	expect_equal(
		collect(c4_sqlite <- arrange(c3_sqlite, year, month, day, carrier)),
		collect(c4_monetdb <- arrange(c3_monetdb, year, month, day, carrier))
	)

	expect_equal(
		collect(collect(c4_sqlite)),
		collect(collect(c4_monetdb))
	)
})


test_that("dplyr group_by", {
	expect_equal(
		collect(by_tailnum <<- group_by(flights, tailnum)),
		collect(by_tailnum_monetdb <<- group_by(flights_monetdb, tailnum),n=Inf)
	)

	expect_equal(
		collect(by_tailnum_sqlite <<- group_by(flights_sqlite, tailnum),n=Inf),
		collect(by_tailnum_monetdb <<- group_by(flights_monetdb, tailnum),n=Inf)
	)
})


test_that("dplyr summarise 2", {
	delay_sqlite <- summarise(by_tailnum_sqlite,
	  count = as.integer(n()),
	  dist = mean(distance),
	  delay = mean(arr_delay)
	)

	delay_monetdb <- summarise(by_tailnum_monetdb,
	  count = as.integer(n()),
	  dist = mean(distance),
	  delay = mean(arr_delay)
	)

	# using data.frame() until
	# https://github.com/hadley/dplyr/issues/2264
	expect_equal(
		data.frame(collect(arrange( delay_sqlite , tailnum ))),
		data.frame(collect(arrange( delay_monetdb , tailnum )))
	)

	delay_sqlite <- filter(delay_sqlite, count > 20, dist < 2000)
	delay_monetdb <- filter(delay_monetdb, count > 20, dist < 2000)

	# using data.frame() until
	# https://github.com/hadley/dplyr/issues/2264
	expect_equal(
		data.frame(collect(arrange(delay_sqlite,tailnum))),
		data.frame(collect(arrange(delay_monetdb,tailnum)))
	)

	delay_local_sqlite <- collect(arrange(delay_sqlite,tailnum))
	delay_local_monetdb <- collect(arrange(delay_monetdb,tailnum))

	# using data.frame() until
	# https://github.com/hadley/dplyr/issues/2264
	expect_equal(
		data.frame(delay_local_sqlite),
		data.frame(delay_local_monetdb)
	)

	daily_sqlite <- group_by(flights_sqlite, year, month, day)
	daily_monetdb <- group_by(flights_monetdb, year, month, day)

	# MIN and MAX window functions are not supported in monetdb
	# https://www.monetdb.org/Documentation/Manuals/SQLreference/WindowFunctions
	bestworst_monetdb <- daily_monetdb %>% 
	  select(flight, arr_delay) %>% 
	  filter(arr_delay == min(arr_delay) || arr_delay == max(arr_delay))

	expect_error( collect( bestworst_monetdb ) )

	# RANK window function is supported
	ranked_monetdb <- daily_monetdb %>% 
	  select(arr_delay) %>% 
	  mutate(rank = rank(desc(arr_delay)))

})



test_that("shutdown", {
	MonetDBLite::monetdblite_shutdown()
})

