#include "embedded.h"
#include <stdio.h>

#define error(msg) {fprintf(stderr, "Failure: %s\n", msg); return -1;}

int main(void) {
	char* err = 0;
	void* conn = 0;
	monetdb_result* result = 0;
	size_t r, c;

	// first argument is a string for the db directory or NULL for in-memory mode
	err = monetdb_startup(NULL, 0, 0);
	if (err != 0)
		error(err)

	conn = monetdb_connect();
	if (conn == NULL)
		error("Connection failed")

	err = monetdb_query(conn, "CREATE TABLE test (x integer, y string)", 1,
	NULL, NULL, NULL);
	if (err != 0)
		error(err)

	err = monetdb_query(conn,
			"INSERT INTO test VALUES (42, 'Hello'), (NULL, 'World')", 1, NULL,
			NULL, NULL);
	if (err != 0)
		error(err)

	err = monetdb_query(conn, "SELECT x, y FROM test; ", 1, &result, NULL,
			NULL);
	if (err != 0)
		error(err)

	fprintf(stdout, "Query result with %zu cols and %zu rows\n", result->ncols,
			result->nrows);

	for (r = 0; r < result->nrows; r++) {
		for (c = 0; c < result->ncols; c++) {
			monetdb_column* rcol = monetdb_result_fetch(result, c);
			switch (rcol->type) {
			case monetdb_int32_t: {
				monetdb_column_int32_t * col = (monetdb_column_int32_t *) rcol;
				if (col->data[r] == col->null_value) {
					printf("NULL");
				} else {
					printf("%d", (int) col->data[r]);
				}
				break;
			}
			case monetdb_str: {
				monetdb_column_str * col = (monetdb_column_str *) rcol;
				if (col->is_null(col->data[r])) {
					printf("NULL");
				} else {
					printf("%s", (char*) col->data[r]);
				}
				break;
			}
			default: {
				printf("UNKNOWN");
			}
			}

			if (c + 1 < result->ncols) {
				printf(", ");
			}
		}
		printf("\n");
	}

	monetdb_cleanup_result(conn, result);
	monetdb_disconnect(conn);
	monetdb_shutdown();
	return 0;
}
