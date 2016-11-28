/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2015 MonetDB B.V.
 */

/*
 * H. Muehleisen, M. Raasveldt
 * Inverse RAPI
 */
#ifndef _EMBEDDED_LIB_
#define _EMBEDDED_LIB_

enum monetdb_column_type {
	LONG, DOUBLE, STRING /* moar */
};

typedef struct monetdb_append_data {
	char* colname;
	int batid; /* Disclaimer: this header is GDK-free */
} monetdb_append_data;

typedef struct monetdb_result_column {
	char *table_name;
	char *column_name;
	int monetdb_column_type;
} monetdb_result_column;

typedef struct monetdb_result {
	int n_columns;
	size_t n_rows;
	monetdb_result_column *columns;
	// can't touch this
	void *result_set_ref;
} monetdb_result;

extern int monetdb_embedded_initialized;

void* monetdb_connect(void);
void monetdb_disconnect(void* conn);
char* monetdb_startup(char* dbdir, char silent, char sequential);
char* monetdb_query(void* conn, char* query, char execute, void** result);
char* monetdb_append(void* conn, const char* schema, const char* table,
		monetdb_append_data *data, int ncols);
void monetdb_cleanup_result(void* conn, void* output);
char* monetdb_get_columns(void* conn, const char* schema_name,
		const char *table_name, int *column_count, char ***column_names,
		int **column_types);
void monetdb_shutdown(void);

#endif
