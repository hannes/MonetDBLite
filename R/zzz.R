.onLoad <- function(libname, pkgname){
	tryCatch({
    	# this is a (dirty) hack so we don't need to depend on dplyr
  		dplyrMt <- getNamespace("dplyr")$.__S3MethodsTable__.
		dplyrMt[["sql_translate_env.MonetDBConnection"]] <- dplyr_sql_translate_env
  		dplyrMt[["db_analyze.MonetDBConnection"]] <- dplyr_db_analyze
  		dplyrMt[["db_explain.MonetDBLiteConnection"]] <- dplyr_db_analyze
  		
  		dplyrMt[["sample_n.tbl_monetdb"]] <- dplyr_sample_n
  		dplyrMt[["sample_frac.tbl_monetdb"]] <- dplyr_sample_frac
  		dplyrMt[["tbl.src_monetdb"]] <- dplyr_tbl_monetdb
	})
}
