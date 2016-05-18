library(testthat)
library(DBI)
library(MonetDB.R)
library(MonetDBLite)
library(survey)

dbfolder <- file.path(tempdir(), "svydir")

test_that("db allows database-backed survey designs", {

	db <- dbConnect( MonetDB.R::MonetDBLite() , dbfolder )

	data(api)
	x <- apiclus1
	names( x ) <- gsub( "\\." , "_" , names( x ) )
	dbWriteTable( db , 'apiclus1' , x )
	dclus1 <- svydesign(id = ~dnum, weight=~pw,data = 'apiclus1',fpc = ~fpc, dbtype="MonetDBLite",dbname = dbfolder)

	expect_equal(class(dclus1)[1],"DBIsvydesign")
	expect_equal(round(svytable(~sch_wide+stype, dclus1)[2,2],3),372.317)
	expect_equal(as.numeric(round(svychisq(~sch_wide+stype, dclus1)$p.value,3)),0.022)

	set.seed(1)
	repweights<-data.frame( 2*sapply( rep( nrow( x ) , 4 ) ,  function( z )sample( 0:1 , z , replace = TRUE )) )
	y <- cbind( x , repweights )
	names( y ) <- tolower( names( y ) )
	dbWriteTable( db , 'rclus1' , y )

	rclus1<-svrepdesign(data='rclus1', type="BRR", repweights="x[1-4]", combined.weights=FALSE,dbtype="MonetDBLite",dbname = dbfolder)

	expect_equal(class(rclus1)[1],"DBIrepdesign")
	expect_equal(svytable(~sch_wide+stype, rclus1)[2,2],11)

	dbDisconnect( db , shutdown = TRUE )
	
})



