#ifdef HAVE_EMBEDDED_R
#include <R.h>

extern SEXP mapi_split(SEXP mapiLinesVector, SEXP numCols);
extern SEXP mapi_read_null_string(SEXP raw_vec, SEXP rowsR);
extern SEXP mapi_read_long_dbl(SEXP raw_vec);

#endif
