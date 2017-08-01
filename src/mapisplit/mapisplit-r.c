#include "monetdb_config.h"

#ifdef HAVE_EMBEDDED_R
#include <R.h>
#include <Rdefines.h>
#include "mapisplit.h"
#include "mapisplit-r.h"

char nullstr[] = "NULL";

SEXP mapi_split(SEXP mapiLinesVector, SEXP numCols) {
	const int cols = INTEGER_POINTER(AS_INTEGER(numCols))[0];
	const int rows = LENGTH(mapiLinesVector);
	SEXP colVec;
	int cRow;
	int cCol;
	char **elems = malloc(sizeof(char*)* cols);
	if (!elems) {
		error("Memory allocation failure");
	}

	if (!IS_CHARACTER(mapiLinesVector) || rows < 1 || cols < 1) {
		error("Invalid input to mapi_split: type=%d, rows=%d, cols=%d", TYPEOF(mapiLinesVector), rows, cols);
	}

	PROTECT(colVec = NEW_LIST(cols));

	for (cRow = 0; cRow < cols; cRow++) {
		SEXP colV = PROTECT(NEW_STRING(rows));
		SET_ELEMENT(colVec, cRow, colV);
		UNPROTECT(1);
	}


	for (cRow = 0; cRow < rows; cRow++) {
		const char *rval = CHAR(STRING_ELT(mapiLinesVector, cRow));
		char *val = strdup(rval);

		cCol = 0;
		mapi_line_split(val, elems, cols);

		for (cCol = 0; cCol < cols; cCol++) {
			SEXP colV = VECTOR_ELT(colVec, cCol);
			size_t tokenLen = strlen(elems[cCol]);
			if (tokenLen < 1 || strcmp(elems[cCol], nullstr) == 0) {
				SET_STRING_ELT(colV, cRow, NA_STRING);
			}
			else {
				SET_STRING_ELT(colV, cRow, mkCharLen(elems[cCol], tokenLen));
			}
		}
		free(val);
	}
	free(elems);

	UNPROTECT(1);
	return colVec;
}

SEXP mapi_read_null_string(SEXP raw_vec, SEXP rowsR) {
	const int rows = INTEGER_POINTER(AS_INTEGER(rowsR))[0];
	SEXP colVec = PROTECT(NEW_STRING(rows));
	char* start = (char *) RAW_POINTER(raw_vec);
	int cRow = 0;
	if (!colVec) {
		error("Memory allocation failure");
	}

	while (cRow < rows) {
		SEXP s = mkChar(start);
		if (!s) {
			error("Memory allocation failure");
		}
		SET_STRING_ELT(colVec, cRow++, s);
		while (*start != 0) {
			start++;
		}
		start++;
	}

	UNPROTECT(1);
	return colVec;
}


SEXP mapi_read_long_dbl(SEXP raw_vec) {
	const int rows = LENGTH(raw_vec)/8;
	SEXP colVec = PROTECT(NEW_NUMERIC(rows));
	long long * start = (long long *) RAW_POINTER(raw_vec);
	int cRow = 0;

	if (!colVec) {
		error("Memory allocation failure");
	}
	while (cRow < rows) {
		NUMERIC_POINTER(colVec)[cRow] = start[cRow];
		cRow++;
	}
	// TODO: NULLs
	UNPROTECT(1);
	return colVec;
}


#endif
