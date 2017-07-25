src_monetdblite <- function(dbdir = tempdir(), ...) {
  src_monetdb(embedded = dbdir, ...)
}

src_monetdb <- function(dbname="demo", host = "localhost", port = 50000L, user = "monetdb",
  password = "monetdb", con = FALSE, ...) {
  if (!inherits(con, "MonetDBConnection") || !DBI::dbIsValid(con)) {
    con <- DBI::dbConnect(MonetDB.R(), dbname = dbname , host = host, port = port,
      user = user, password = password, ...)
  }
  dbplyr::src_sql("monetdb", con)
}


dplyr_tbl_monetdb <- function(src, from, ...) {
  dbplyr::tbl_sql("monetdb", src = src, from = from)
}

dplyr_sql_translate_env <- function(con) {
  dbplyr::sql_variant(
    scalar = dbplyr::sql_translator(.parent = dbplyr::base_scalar,
      `!=` = dbplyr::sql_infix("<>")
    ),
    aggregate = dbplyr::sql_translator(.parent = dbplyr::base_agg, 
      n = function() dbplyr::sql("COUNT(*)"),
      sd =  dbplyr::sql_prefix("STDDEV_SAMP"),
      var = dbplyr::sql_prefix("VAR_SAMP"),
      median = dbplyr::sql_prefix("MEDIAN")
    ),
    window = dbplyr::sql_translator(.parent = dbplyr::base_no_win,
      row_number   = dbplyr::win_rank("ROW_NUMBER"),
      min_rank     = dbplyr::win_rank("RANK"),
      rank         = dbplyr::win_rank("RANK"),
      dense_rank   = dbplyr::win_rank("DENSE_RANK"),
      percent_rank = dbplyr::win_rank("PERCENT_RANK"),
      cume_dist    = dbplyr::win_rank("CUME_DIST")
    )
  )
}

dplyr_sample_n <- function(x, size, replace = FALSE, weight = NULL) {
  if (replace || !is.null(weight)) {
    stop("Sorry, replace and weight are not supported for MonetDB tables. \
      Consider collect()'ing first.")
  }
  dplyr::tbl(x$src, dbplyr::sql(dbplyr::build_sql("SELECT * FROM (", dbplyr::sql_render(x, x$src$con), ") AS s SAMPLE ", as.integer(size))))
}

dplyr_sample_frac <- function(tbl, frac=1, replace = FALSE, weight = NULL) {
  if (frac < 0 || frac > 1) {
    stop("frac must be in [0,1]")
  }
  n <- as.data.frame(dplyr::summarize(tbl, n()))[[1,1]]
  if (n < 1) {
    stop("not sampling 0 rows...")
  }
  dplyr::sample_n(tbl, n, replace, weight)
}

dplyr_db_analyze <- function(con, table, ...) {
  TRUE
}


