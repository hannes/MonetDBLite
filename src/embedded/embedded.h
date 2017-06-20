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
#include <stdint.h>


typedef struct append_data {
	char* colname;
	size_t batid; /* Disclaimer: this header is GDK-free */
} append_data;

typedef struct {
	unsigned char day;
	unsigned char month;
	int year;
} monetdb_data_date;

typedef struct {
	unsigned int ms;
	unsigned char seconds;
	unsigned char minutes;
	unsigned char hours;
} monetdb_data_time;

typedef struct {
	monetdb_data_date date;
	monetdb_data_time time;
} monetdb_data_timestamp;

typedef struct {
	size_t size;
	void* data;
} monetdb_data_blob;


typedef enum  {
	monetdb_int8_t, monetdb_int16_t, monetdb_int32_t, monetdb_int64_t, monetdb_size_t,
	monetdb_float, monetdb_double,
	monetdb_str, monetdb_blob,
	monetdb_date, monetdb_time, monetdb_timestamp
} monetdb_types;

typedef struct {
	monetdb_types typeid;
	void *data;
	size_t count;
} monetdb_column;

typedef struct {
	size_t nrows;
	size_t ncols;
} monetdb_result;

typedef void* monetdb_connection;


#define DEFAULT_STRUCT_DEFINITION(ctype, typename)                              \
	typedef struct                                          \
	{                                                                          \
		monetdb_types type;   \
		ctype *data;                                                            \
		size_t count;                                                          \
		ctype null_value;                                                       \
		double scale;                                                          \
		int (*is_null)(ctype value);                                            \
		void (*initialize)(void *self, size_t count);                          \
	} monetdb_column_##typename

DEFAULT_STRUCT_DEFINITION(int8_t, int8_t);
DEFAULT_STRUCT_DEFINITION(int16_t, int16_t);
DEFAULT_STRUCT_DEFINITION(int32_t, int32_t);
DEFAULT_STRUCT_DEFINITION(int64_t, int64_t);
DEFAULT_STRUCT_DEFINITION(size_t, size_t);

DEFAULT_STRUCT_DEFINITION(float, float);
DEFAULT_STRUCT_DEFINITION(double, double);

DEFAULT_STRUCT_DEFINITION(char *, str);
DEFAULT_STRUCT_DEFINITION(monetdb_data_blob, blob);

DEFAULT_STRUCT_DEFINITION(monetdb_data_date, date);
DEFAULT_STRUCT_DEFINITION(monetdb_data_time, time);
DEFAULT_STRUCT_DEFINITION(monetdb_data_timestamp, timestamp);


monetdb_connection monetdb_connect(void);
void  monetdb_disconnect(monetdb_connection conn);
char* monetdb_startup(char* dbdir, char silent, char sequential);
int   monetdb_is_initialized(void);

char* monetdb_query(monetdb_connection conn, char* query, char execute, monetdb_result** result, long *affected_rows, long* prepare_id);
monetdb_data* monetdb_result_fetch(monetdb_result* result, size_t column_index);
void* monetdb_result_fetch_bat(monetdb_result* result, size_t column_index);

char* monetdb_append(monetdb_connection conn, const char* schema, const char* table, append_data *data, int ncols);
void  monetdb_cleanup_result(monetdb_connection conn, monetdb_result* result);
char* monetdb_get_columns(monetdb_connection conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types);


// progress monitoring
typedef int (*monetdb_progress_callback)(monetdb_connection conn, void* data, size_t num_statements, size_t num_completed_statement, float percentage_done);
void monetdb_register_progress(monetdb_connection conn, monetdb_progress_callback callback, void* data);
void monetdb_unregister_progress(monetdb_connection conn);

void  monetdb_shutdown(void);

#endif
