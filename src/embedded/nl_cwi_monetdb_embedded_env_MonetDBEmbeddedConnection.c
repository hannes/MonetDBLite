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

JNIEXPORT jboolean JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_getAutoCommitInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer) {
    int result = getAutocommitFlag((Client) connectionPointer);
    (void) env;
    (void) jconnection;
    return (result == 0) ? JNI_FALSE : JNI_TRUE;
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_setAutoCommitInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jboolean autoCommit) {
    int toSet = (autoCommit == JNI_FALSE) ? 0 : 1;
    (void) env;
    (void) jconnection;
    setAutocommitFlag((Client) connectionPointer, toSet);
}

static int executeQuery(JNIEnv *env, jlong connectionPointer, jstring query, jboolean execute, res_table **output,
                        int *query_type, lng *lastId, lng *rowCount, lng *prepareID) {
    const char *query_string_tmp;
    char* err;

    if(connectionPointer == 0) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Connection already closed?");
        return 1;
    }
    query_string_tmp = (*env)->GetStringUTFChars(env, query, NULL);
    if(query_string_tmp == NULL) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return 2;
    }
    // Execute the query
    err = monetdb_query((Client) connectionPointer, (char*) query_string_tmp, (char) execute, (void**) output, query_type, lastId, rowCount, prepareID);
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);
    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        GDKfree(err);
        return 3;
    }
    return 0;
}

static jobject generateQueryResultSet(JNIEnv *env, jobject jconnection, jlong connectionPointer, res_table *output, int query_type, lng prepareID) {
    int i, numberOfColumns, numberOfRows;
    char *nextSQLName;
    jobject result;
    jintArray typesIDs;
    jint* copy;
    JResultSet* thisResultSet;
    res_col col;

    // Check if we had results, otherwise we send an exception
    if (output && (query_type == Q_TABLE || query_type == Q_PREPARE || query_type == Q_BLOCK) && output->nr_cols > 0) {
        numberOfColumns = output->nr_cols;
    } else {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "There query returned no results?");
        monetdb_cleanup_result((Client) connectionPointer, output);
        return NULL;
    }

    copy = GDKmalloc(sizeof(jint) * numberOfColumns);
    thisResultSet = createResultSet((Client) connectionPointer, output);
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
        result = NULL;
    } else {
        numberOfRows = BATcount(thisResultSet->bats[0]);
        (*env)->SetIntArrayRegion(env, typesIDs, 0, numberOfColumns, copy);
        if(prepareID) {
            //public PreparedQueryResultSet(MonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns, int numberOfRows, int[] typesIDs, long preparedID)
            result = (*env)->NewObject(env, getPreparedQueryResultSetClassID(), getPreparedQueryResultSetClassConstructorID(), jconnection,
                                       (jlong) thisResultSet, numberOfColumns, numberOfRows, typesIDs, (jlong) prepareID);
        } else {
            //QueryResultSet(MonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns, int numberOfRows, int[] typesIDs)
            result = (*env)->NewObject(env, getQueryResultSetID(), getQueryResultSetConstructorID(), jconnection,
                                       (jlong) thisResultSet, numberOfColumns, numberOfRows, typesIDs);
        }
    }
    GDKfree(copy);
    return result;
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_sendUpdateInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    res_table *output = NULL;
    lng rowCount;
    jint returnValue = -1;
    int query_type, res;

    (void) jconnection;
    res = executeQuery(env, connectionPointer, query, execute, &output, &query_type, NULL, &rowCount, NULL);
    monetdb_cleanup_result((Client) connectionPointer, output);
    if(res) {
        return returnValue;
    } else if(query_type == Q_UPDATE) {
        returnValue = (jint) rowCount;
    } else if(query_type == Q_SCHEMA) {
        returnValue = -2;
    }
    return returnValue;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_sendQueryInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    int query_type, res;
    res_table *output = NULL;

    res = executeQuery(env, connectionPointer, query, execute, &output, &query_type, NULL, NULL, NULL);
    if(res) {
        return NULL;
    } else if(query_type != Q_TABLE && query_type != Q_BLOCK) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The query did not produce a result set!");
        monetdb_cleanup_result((Client) connectionPointer, output);
        return NULL;
    } else {
        return generateQueryResultSet(env, jconnection, connectionPointer, output, query_type, 0);
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_prepareStatementInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    int query_type, res;
    res_table *output = NULL;
    lng prepareID;

    res = executeQuery(env, connectionPointer, query, execute, &output, &query_type, NULL, NULL, &prepareID);
    if(res) {
        return NULL;
    } else if(query_type != Q_PREPARE) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The query not produce a prepared statement!");
        monetdb_cleanup_result((Client) connectionPointer, output);
        return NULL;
    } else {
        return generateQueryResultSet(env, jconnection, connectionPointer, output, query_type, prepareID);
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_executePrepareStatementInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    int query_type, res;
    lng rowCount;
    res_table *output = NULL;
    jobject resultSet = NULL;
    jint returnValue = -1;
    jboolean retStatus = JNI_FALSE;

    res = executeQuery(env, connectionPointer, query, execute, &output, &query_type, NULL, &rowCount, NULL);
    if(res) {
        return NULL;
    } else if(query_type == Q_TABLE || query_type == Q_BLOCK || query_type == Q_PREPARE) {
        retStatus = JNI_TRUE;
        resultSet = generateQueryResultSet(env, jconnection, connectionPointer, output, query_type, 0);
    } else {
        if(query_type == Q_UPDATE) {
            returnValue = (jint) rowCount;
        } else if(query_type == Q_SCHEMA) {
            returnValue = -2;
        }
        monetdb_cleanup_result((Client) connectionPointer, output);
    }
    //public ExecResultSet(boolean status, QueryResultSet resultSet, int numberOfRows)
    return (*env)->NewObject(env, getExecResultSetClassID(), getExecResultSetClassConstructorID(), retStatus, resultSet, returnValue);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_executePrepareStatementAndIgnoreInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    res_table *output = NULL;
    (void) jconnection;
    (void) executeQuery(env, connectionPointer, query, execute, &output, NULL, NULL, NULL, NULL);
    monetdb_cleanup_result((Client) connectionPointer, output);
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

    err = monetdb_find_table((Client) connectionPointer, &table, schema_name_tmp, table_name_tmp);
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

    monetdb_disconnect((Client) connectionPointer);
}
