

if( .Platform$OS.type != 'windows' ) library(ulimit)

library(testthat)
library(callr)


test_that( "MonetDBLite handles heavy shutdown/startup situations" , {


	single_restarts <- 
		function( repetitions = 1000 ){
		
			library(DBI)

			for( i in seq( repetitions ) ) {
				cat( "single startup and shutdown iteration" , i , '\r' )
				db <- dbConnect( MonetDBLite::MonetDBLite() )
				dbDisconnect( db , shutdown = TRUE )
			}
			
			invisible(TRUE)
		}

		
	double_restarts <-
		function( repetitions = 500 ){

			library(DBI)

			td1 <- paste0( tempdir() , "/one" )
			td2 <- paste0( tempdir() , "/two" )

			for( j in seq( repetitions ) ){

				cat( "two server startup and shutdown iteration" , i , '\r' )
				
				conn <- dbConnect( MonetDBLite::MonetDBLite() , td1 )

				dbDisconnect( conn , shutdown = TRUE )

				conn <- dbConnect( MonetDBLite::MonetDBLite() , td2 )

				dbDisconnect( conn , shutdown = TRUE )

			}

			invisible(TRUE)
		}

		
	single_result <- callr::r( single_restarts , show = TRUE )

	expect_true( single_result )
	
	double_result <- callr::r( double_restarts , show = TRUE )

	expect_true( double_result )
	
	
} )



test_that( "MonetDBLite handles low RAM together with heavy shutdown/startup situations" , {


	ram_stress_test <- 
		function( driver , repetitions = 1000 , this_limit , server_shutdown ){
		
			if( this_limit < Inf & .Platform$OS.type != 'windows' ) ulimit::memory_limit( this_limit )

			library(DBI)
			
			for( i in seq( repetitions ) ) {

				cat( paste0( "testing [" , driver , "] [" , server_shutdown , "] shutting down server. [" , this_limit , if( this_limit < Inf ) "MB" , "] RAM limit. repetition: " , i , '\r' ) )
			
				if( i == 1 | ( driver == 'MonetDBLite' & server_shutdown == 'always' ) ) db <- dbConnect( if( driver == 'RSQLite' ) RSQLite::SQLite() else MonetDBLite::MonetDBLite() )
				
				dbWriteTable( db , 'x' , mtcars , append = TRUE )
				
				if( driver == 'MonetDBLite' & server_shutdown == 'always' ) dbDisconnect( db , shutdown = TRUE )
				
			}
			
			if( driver == 'MonetDBLite' & server_shutdown == 'at completion' ) dbDisconnect( db , shutdown = TRUE )
			
			invisible( TRUE )
		}


	# before any monetdblite testing, try every command in rsqlite
	for( driver in c( 'RSQLite' , 'MonetDBLite' ) ){

		
		# for monetdblite, try three different configurations of startup/shutdown
		if( driver == 'RSQLite' ) shutdown_choices <- 'never' else shutdown_choices <- c( 'never' , 'at completion' , 'always' )

		for( shut_down in shutdown_choices ){

			# before any ram-stress testing, try everything without any ram ceiling
			for( my_memlimit in c( Inf , 35 ) ){

				my_cmdargs <- if( my_memlimit < Inf & .Platform$OS.type == 'windows' ) paste0( "--slave --max-mem-size=" , my_memlimit , "M" ) else "--slave"

				result <-
					callr::r( 
					
						ram_stress_test , 
					
						args = 
							list( 
								driver = driver , 
								this_limit = my_memlimit ,
								server_shutdown = shut_down
							) , 
							
						cmdargs = my_cmdargs ,
						
						show = TRUE
						
					)

				expect_true( result )
					
			}
						
		}

	}


} )

