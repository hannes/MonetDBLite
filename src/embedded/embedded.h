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

#include <stddef.h> /* only for size_t */

typedef struct append_data {
	char* colname;
	size_t batid; /* Disclaimer: this header is GDK-free */
} append_data;


void* monetdb_connect(void);
void  monetdb_disconnect(void* conn);
char* monetdb_startup(char* dbdir, char silent, char sequential);
int   monetdb_is_initialized(void);
char* monetdb_query(void* conn, char* query, char execute, void** result, long *affected_rows);
char* monetdb_append(void* conn, const char* schema, const char* table, append_data *data, int ncols);
void  monetdb_cleanup_result(void* conn, void* output);
char* monetdb_get_columns(void* conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types);

// progress monitoring
typedef int (*monetdb_progress_callback)(void* conn, void* data, size_t queryid, size_t num_statements, size_t num_completed_statement, float percentage_done);
void monetdb_register_progress(void* conn, monetdb_progress_callback callback, void* data);
void monetdb_unregister_progress(void* conn);


void  monetdb_shutdown(void);


#endif
/*

typedef struct monetdb_result_column {
	char* tablename;
	char* colname;
	char* typename;
	// internal
	int gdktype;
	int batid;
	void* data;
} monetdb_result_column;

typedef struct monetdb_result {
	size_t id;
	size_t nrows;
	size_t ncols;
	monetdb_result_column *columns;
} monetdb_result;


monetdb_get_value_long();
monetdb_get_value_string(monetdb_result *result, size_t col, size_t row);
monetdb_get_value_double();
*/
