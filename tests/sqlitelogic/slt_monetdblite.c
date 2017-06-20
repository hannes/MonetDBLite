#include <ctype.h>
#include <stdio.h>
#include "embedded.h"

static int monetdbliteConnect(
  void *NotUsed,              /* Argument from DbEngine object.  Not used */
  const char *zConnectStr,    /* Connection string */
  void **ppConn,              /* Write completed connection here */
  const char *zParam          /* Value of the -parameters command-line option */
){
	monetdb_startup(NULL, 0, 0);
	*ppConn = (void*) monetdb_connect();
	return 0;
}

static int monetdbliteStatement(
  void *pConn,                /* Connection created by xConnect */
  const char *zSql,           /* SQL statement to evaluate */
  int bQuiet                  /* True to suppress printing errors. */
){
	char* res = monetdb_query((monetdb_connection) pConn, (char*) zSql, 1, NULL, NULL, NULL);
	if (res != NULL) {
		fprintf(stderr, "ERR: %s\n", res);
	}
	return res != NULL;
}

static int monetdbliteQuery(
  void *pConn,                /* Connection created by xConnect */
  const char *zSql,           /* SQL statement to evaluate */
  const char *zType,          /* One character for each column of result */
  char ***pazResult,          /* RETURN:  Array of result values */
  int *pnResult               /* RETURN:  Number of result values */
){

	monetdb_connection p = (monetdb_connection) pConn;
	monetdb_result *rptr;
	size_t r, c;

	monetdb_query(p, (char*) zSql, 1, &rptr, NULL, NULL);
	*pazResult = malloc(sizeof(char*) * rptr->nrows * rptr->ncols);
	if (!*pazResult ) {
		return 1;
	}
	for (r = 0; r < rptr->nrows; r++) {
		for (c = 0; c < rptr->ncols; c++) {
			monetdb_column *actual_column = monetdb_result_fetch(rptr, c);
			char buffer[BUFSIZ];

			switch(actual_column->type) {
			case monetdb_int8_t: {
				monetdb_column_int8_t * col = (monetdb_column_int8_t *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%d", (int)col->data[r]);
				}
				break;
			}
			case monetdb_int16_t: {
				monetdb_column_int16_t * col = (monetdb_column_int16_t *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%d", (int)col->data[r]);
				}
				break;
			}
			case monetdb_int32_t: {
				monetdb_column_int32_t * col = (monetdb_column_int32_t *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%d", (int)col->data[r]);
				}
				break;
			}
			case monetdb_int64_t: {
				monetdb_column_int64_t * col = (monetdb_column_int64_t *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%lld", (long long int) col->data[r]);
				}
				break;
			}
			case monetdb_float: {
				monetdb_column_float * col = (monetdb_column_float *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%f", col->data[r]);
				}
				break;
			}
			case monetdb_double: {
				monetdb_column_double * col = (monetdb_column_double *) actual_column;
				if (col->is_null(col->data[r])) {
					snprintf(buffer, BUFSIZ,  "%s", "NULL");
				} else {
					snprintf(buffer, BUFSIZ,  "%lf", col->data[r]);
				}
				break;
			}
			case monetdb_str: {
				monetdb_column_str * col = (monetdb_column_str *) actual_column;
				snprintf(buffer, BUFSIZ, "%s", col->data[r] ? (col->data[r][0] == 0 ? "(empty)" : col->data[r]) : "NULL");
				break;
			}
			default: {
				fprintf(stderr, "%s\n", "UNKNOWN");
			}
			}
			(*pazResult)[r*rptr->ncols + c] = strdup(buffer);
		}
	}

  *pnResult = rptr->ncols * rptr->nrows;
  return 0;
}

static int monetdbliteFreeResults(
  void *pConn,                /* Connection created by xConnect */
  char **azResult,            /* The results to be freed */
  int nResult                 /* Number of rows of result */
){
	int i;
	if (!azResult) {
		return 1;
	}
	for (i = 0; i < nResult; i++) {
		if (azResult[i]) {
			free(azResult[i]);
		}
	}
	free(azResult);
  return 0;
}


static int monetdbliteDisconnect(
  void *pConn                 /* Connection created by xConnect */
){
	monetdb_disconnect((monetdb_connection)pConn);
	monetdb_shutdown();
	return 0;
}


static int monetdbliteGetEngineName(
  void *pConn,                /* Connection created by xConnect */
  const char **zName          /* SQL statement to evaluate */
){
  static char *zDmbsName = "MonetDBLite";
  *zName = zDmbsName;
  return 0;
}


void registerMonetdblite(void){
  /*
  ** This is the object that defines the database engine interface.
  */
  static const DbEngine monetdbliteDbEngine = {
     "MonetDBLite",             /* zName */
     0,                    /* pAuxData */
     monetdbliteConnect,        /* xConnect */
	 monetdbliteGetEngineName,  /* xGetEngineName */
	 monetdbliteStatement,      /* xStatement */
	 monetdbliteQuery,          /* xQuery */
	 monetdbliteFreeResults,    /* xFreeResults */
	 monetdbliteDisconnect      /* xDisconnect */
  };
  sqllogictestRegisterEngine(&monetdbliteDbEngine);
}
