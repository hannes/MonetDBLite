/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection.h"

#include "javaids.h"
#include "jresulset.h"
#include "embedded.h"
#include "monetdb_config.h"
#include "res_table.h"
#include "mal_type.h"

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_sendUpdateInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    res_table *output = NULL;
    long lastId, rowCount;
    const char *query_string_tmp = (*env)->GetStringUTFChars(env, query, NULL);
    char *err;
    (void) jconnection;

    // Execute the query
    err = monetdb_query((void*) connectionPointer, (char*) query_string_tmp, (char) execute, (void**) &output);
    getUpdateQueryData((void*) connectionPointer, &lastId, &rowCount);
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);
    monetdb_cleanup_result(NULL, output);
    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        return -1;
    }
    return (jint) rowCount;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_sendQueryInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    int i, numberOfColumns, numberOfRows;
    const char *query_string_tmp;
    char *err = NULL, *nextSQLName;
    res_table *output = NULL;
    jobject result;
    jintArray typesIDs;
    jint* copy;
    JResultSet* thisResultSet;
    res_col col;

    if(connectionPointer == 0) {
       (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Connection already closed?");
       return NULL;
    }

    query_string_tmp = (*env)->GetStringUTFChars(env, query, NULL);
    if(query_string_tmp == NULL) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return NULL;
    }

    //execute the query
    err = monetdb_query((void*) connectionPointer, (char*) query_string_tmp, (char) execute, (void**) &output);
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);
    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        GDKfree(err);
        monetdb_cleanup_result(NULL, output);
        return NULL;
    }
    // Check if we had results, otherwise we send an exception
    if (output && output->nr_cols > 0) {
        numberOfColumns = output->nr_cols;
    } else {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "There was no output to retrieve!");
        monetdb_cleanup_result(NULL, output);
        return NULL;
    }

    //QueryResultSetMonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns, int numberOfRows, int[] typesIDs)
    copy = GDKmalloc(sizeof(jint) * numberOfColumns);
    thisResultSet = createResultSet(output);
    if(thisResultSet == NULL || copy == NULL) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return NULL;
    }
    typesIDs = (*env)->NewIntArray(env, numberOfColumns);

    for (i = 0; i < numberOfColumns; i++) {
        col = output->cols[i];
        nextSQLName = col.type.type->sqlname;
        if(strncmp(nextSQLName, "boolean", 7) == 0) {
            copy[i] = 1;
        } else if(strncmp(nextSQLName, "tinyint", 7) == 0) {
            copy[i] = 2;
        } else if(strncmp(nextSQLName, "smallint", 8) == 0) {
            copy[i] = 3;
        } else if(strncmp(nextSQLName, "int", 3) == 0 || strncmp(nextSQLName, "month_interval", 14) == 0) {
            copy[i] = 4;
        } else if(strncmp(nextSQLName, "bigint", 6) == 0 || strncmp(nextSQLName, "sec_interval", 12) == 0) {
            copy[i] = 5;
        } else if(strncmp(nextSQLName, "real", 4) == 0) {
            copy[i] = 6;
        } else if(strncmp(nextSQLName, "double", 6) == 0) {
            copy[i] = 7;
        } else if(strncmp(nextSQLName, "char", 4) == 0 || strncmp(nextSQLName, "varchar", 7) == 0 || strncmp(nextSQLName, "clob", 4) == 0) {
            copy[i] = 8;
        } else if(strncmp(nextSQLName, "date", 4) == 0) {
            copy[i] = 9;
        } else if(strncmp(nextSQLName, "timestamp", 9) == 0 || strncmp(nextSQLName, "timestamptz", 11) == 0) { //WARNING must come before the time type!!!
            copy[i] = 10;
        } else if(strncmp(nextSQLName, "time", 4) == 0 || strncmp(nextSQLName, "timetz", 6) == 0) {
            copy[i] = 11;
        } else if(strncmp(nextSQLName, "blob", 4) == 0) {
            copy[i] = 12;
        } else if(strncmp(nextSQLName, "decimal", 7) == 0) {
            copy[i] = 13;
        } else {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Unknown MonetDB type!");
        }
    }

    if((*env)->ExceptionCheck(env) == JNI_TRUE) {
        GDKfree(result);
        result = NULL;
    } else {
        numberOfRows = BATcount(thisResultSet->bats[0]);
        (*env)->SetIntArrayRegion(env, typesIDs, 0, numberOfColumns, copy);
        result = (*env)->NewObject(env, getQueryResultSetID(), getQueryResultSetConstructorID(), jconnection,
                                   (jlong) thisResultSet, numberOfColumns, numberOfRows, typesIDs);
    }
    GDKfree(copy);
    return result;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_getMonetDBTableInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring tableSchema, jstring tableName) {
    const char *schema_name_tmp, *table_name_tmp;
    char *err = NULL;
    sql_table* table;

    schema_name_tmp = (*env)->GetStringUTFChars(env, tableSchema, NULL);
    if(schema_name_tmp == NULL) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return NULL;
    }
    table_name_tmp = (*env)->GetStringUTFChars(env, tableName, NULL);
    if(table_name_tmp == NULL) {
        (*env)->ReleaseStringUTFChars(env, tableSchema, schema_name_tmp);
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return NULL;
    }

    err = monetdb_find_table((void*) connectionPointer, &table, schema_name_tmp, table_name_tmp);
    (*env)->ReleaseStringUTFChars(env, tableSchema, schema_name_tmp);
    (*env)->ReleaseStringUTFChars(env, tableName, table_name_tmp);
    if (err) {
       GDKfree(err);
       (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
       return NULL;
    }
    return (*env)->NewObject(env, getMonetDBTableClassID(), getMonetDBTableClassConstructorID(), jconnection, tableSchema, tableName);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_closeConnectionInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer) {
    (void) env;
    (void) jconnection;

    monetdb_disconnect((void*) connectionPointer);
}
