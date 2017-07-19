library(testthat)
library(DBI)
library(MonetDBLite)
library(survey)

dbfolder <- file.path(tempdir(), "svydir")

test_that("db allows database-backed survey designs", {

	con <- dbConnect( MonetDBLite::MonetDBLite() , dbfolder )

	data(api)
	x <- apiclus1
	names( x ) <- gsub( "\\." , "_" , names( x ) )
	dbWriteTable( con , 'apiclus1' , x )
	dclus1 <- svydesign(id = ~dnum, weight=~pw,data = 'apiclus1',fpc = ~fpc, dbtype="MonetDBLite",dbname = dbfolder)

	expect_equal(class(dclus1)[1],"DBIsvydesign")
	expect_equal(round(svytable(~sch_wide+stype, dclus1)[2,2],3),372.317)
	expect_equal(as.numeric(round(svychisq(~sch_wide+stype, dclus1)$p.value,3)),0.022)

	set.seed(1)
	repweights<-data.frame( 2*sapply( rep( nrow( x ) , 4 ) ,  function( z )sample( 0:1 , z , replace = TRUE )) )
	y <- cbind( x , repweights )
	names( y ) <- tolower( names( y ) )
	# this is just a try
	dbWriteTable( con , 'rclus1' , y )

	rclus1<-svrepdesign(data='rclus1', type="BRR", repweights="x[1-4]", combined.weights=FALSE,dbtype="MonetDBLite",dbname = dbfolder)

	expect_equal(class(rclus1)[1],"DBIrepdesign")
	expect_equal(svytable(~sch_wide+stype, rclus1)[2,2],11)

	close(dclus1)
	close(rclus1)

	dbDisconnect(con)
})


test_that("db allows svyby commands", {

	data(api)
	dclus1 <- svydesign(id = ~dnum, weight=~pw,data = 'apiclus1',fpc = ~fpc, dbtype="MonetDBLite", dbname = dbfolder)
	rclus1<-svrepdesign(data='rclus1', type="BRR", repweights="x[1-4]", combined.weights=FALSE,dbtype="MonetDBLite",dbname = dbfolder)

	open(dclus1)
	open(rclus1)

	expect_equal( round(SE( svyby(~api99, ~stype, dclus1, svymean) )[2],2) , 41.76 )
	expect_equal( round( svyby(~api99, ~stype, dclus1, svyquantile, quantiles=0.5,ci=TRUE,vartype="ci")[2,3] , 3 ) , 428.481 )
	expect_equal( round( data.frame(svyby(~api99+api00, ~stype, dclus1, svymean, deff=TRUE,vartype="ci"))[2,8],3) , 2.212 )
	expect_equal( svyby(~api99+api00, ~stype+sch_wide, dclus1, unwtd.count, keep.var=FALSE)[4,3] , 132 )
	
	
	expect_equal( round(svyby(~api99, list(school_type=apiclus1$stype), rclus1, svymean, vartype="cv")[3,3],3) , 0.022 )
	expect_equal( round( svyby(~api99+api00, ~stype+sch_wide, rclus1, svymean, keep.var=FALSE)[3,3],3),611.375)
	expect_equal(round(SE(svycontrast(svyby(~api99, ~stype, rclus1, svymean,covmat=TRUE), c(E = 1, M = -1))),2)[1,1],10.11)

	## extractor functions
	a<-svyby(~enroll, ~stype, rclus1, svytotal, deff=TRUE, verbose=TRUE,vartype=c("se","cv","cvpct","var"))
	expect_equal(round(SE(a)[2],2),4708.41)
	expect_equal(as.numeric(round(cv(a)[2],4)),0.2975)
	expect_equal(as.numeric(coef(a)[2]),15824)
	expect_equal(round(confint(a, df=degf(rclus1))[2,2],2),30808.26)

	
	## ratio estimates
	expect_equal(round(SE(svyby(~api_stu+enroll, by=~stype, denominator=~enroll, design=dclus1, svyratio))[2,1],3),0.015)

	## empty groups
	expect_true(is.na(svyby(~api00,~comp_imp+sch_wide,design=dclus1,svymean,drop.empty.groups=FALSE)[2,3]) )
	expect_equal(round(svyby(~api00,~comp_imp+sch_wide,design=dclus1,svymean)[2,3],3),654.074)

	expect_true( dbDisconnect(dclus1$db$connection) )
})


test_that("shutdown", {
	MonetDBLite::monetdblite_shutdown()
})
