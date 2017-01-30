/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection.h"

#include "javaids.h"
#include "converters.h"
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
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);
    monetdb_cleanup_result(NULL, output);
    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        return -1;
    }
    getUpdateQueryData((void*) connectionPointer, &lastId, &rowCount);
    return rowCount;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_sendQueryInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring query, jboolean execute) {
    int i, numberOfColumns, numberOfRows;
    const char *query_string_tmp = (*env)->GetStringUTFChars(env, query, NULL);
    char *err = NULL;
    res_table *output = NULL;

    // Execute the query
    err = monetdb_query((void*) connectionPointer, (char*) query_string_tmp, (char) execute, (void**) &output);
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);
    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        monetdb_cleanup_result(NULL, output);
        return NULL;
    }
    // Check if we had results, otherwise we send an exception
    if (output && output->nr_cols > 0) {
        numberOfColumns = output->nr_cols;
        numberOfRows = BATcount(BATdescriptor(output->cols[0].b));
    } else {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "There was no output to retrieve!");
        monetdb_cleanup_result(NULL, output);
        return NULL;
    }

    //public QueryResultSet(MonetDBEmbeddedConnection connection, long tablePointer, String[] columnNames, String[] columnTypes, int[] columnDigits, int[] columnScales, Object[] data, int numberOfRows
    jobjectArray columnNamesArray = (*env)->NewObjectArray(env, numberOfColumns, getStringClassID(), NULL);
    jobjectArray columnTypesArray = (*env)->NewObjectArray(env, numberOfColumns, getStringClassID(), NULL);
    jintArray digitsArray = (*env)->NewIntArray(env, numberOfColumns);
    jintArray scalesArray = (*env)->NewIntArray(env, numberOfColumns);
    jobjectArray dataArray = (*env)->NewObjectArray(env, numberOfColumns, getJavaObjectClassID(), NULL);
    int* digitsAux = (*env)->GetIntArrayElements(env, digitsArray, NULL);
    int* scalesAux = (*env)->GetIntArrayElements(env, scalesArray, NULL);

    for (i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        BAT* b = BATdescriptor(col.b);
        char* nextSQLName = col.type.type->sqlname;
        
        jstring colname = (*env)->NewStringUTF(env, col.name);
        jstring coltype = (*env)->NewStringUTF(env, nextSQLName);
        (*env)->SetObjectArrayElement(env, columnNamesArray, i, colname);
        (*env)->SetObjectArrayElement(env, columnTypesArray, i, coltype);
        (*env)->DeleteLocalRef(env, colname);
        (*env)->DeleteLocalRef(env, coltype);
        digitsAux[i] = (int) col.type.digits;
        scalesAux[i] = (int) col.type.scale;

        if(strncmp(nextSQLName, "boolean", 7) == 0) {
            jbyteArray aux1 = (*env)->NewByteArray(env, numberOfRows);
            getBooleanColumn(env, aux1, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux1);
            (*env)->DeleteLocalRef(env, aux1);
        } else if(strncmp(nextSQLName, "tinyint", 7) == 0) {
            jbyteArray aux2 = (*env)->NewByteArray(env, numberOfRows);
            getTinyintColumn(env, aux2, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux2);
            (*env)->DeleteLocalRef(env, aux2);
        } else if(strncmp(nextSQLName, "smallint", 8) == 0) {
            jshortArray aux3 = (*env)->NewShortArray(env, numberOfRows);
            getSmallintColumn(env, aux3, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux3);
            (*env)->DeleteLocalRef(env, aux3);
        } else if(strncmp(nextSQLName, "int", 3) == 0 || strncmp(nextSQLName, "month_interval", 14) == 0) {
            jintArray aux4 = (*env)->NewIntArray(env, numberOfRows);
            getIntColumn(env, aux4, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux4);
            (*env)->DeleteLocalRef(env, aux4);
        } else if(strncmp(nextSQLName, "bigint", 6) == 0 || strncmp(nextSQLName, "sec_interval", 12) == 0) {
            jlongArray aux5 = (*env)->NewLongArray(env, numberOfRows);
            getBigintColumn(env, aux5, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux5);
            (*env)->DeleteLocalRef(env, aux5);
        } else if(strncmp(nextSQLName, "real", 4) == 0) {
            jfloatArray aux6 = (*env)->NewFloatArray(env, numberOfRows);
            getRealColumn(env, aux6, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux6);
            (*env)->DeleteLocalRef(env, aux6);
        } else if(strncmp(nextSQLName, "double", 6) == 0) {
            jdoubleArray aux7 = (*env)->NewDoubleArray(env, numberOfRows);
            getDoubleColumn(env, aux7, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux7);
            (*env)->DeleteLocalRef(env, aux7);
        } else if(strncmp(nextSQLName, "char", 4) == 0 || strncmp(nextSQLName, "varchar", 7) == 0 || strncmp(nextSQLName, "clob", 4) == 0) {
            jobjectArray aux8 = (*env)->NewObjectArray(env, numberOfRows, getStringClassID(), NULL);
            getStringColumn(env, aux8, getStringClassID(), NULL, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux8);
            (*env)->DeleteLocalRef(env, aux8);
        } else if(strncmp(nextSQLName, "date", 4) == 0) {
            jobjectArray aux9 = (*env)->NewObjectArray(env, numberOfRows, getDateClassID(), NULL);
            getDateColumn(env, aux9, getDateClassID(), getDateConstructorID(), NULL, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux9);
            (*env)->DeleteLocalRef(env, aux9);
        } else if(strncmp(nextSQLName, "timestamp", 9) == 0 || strncmp(nextSQLName, "timestamptz", 11) == 0) { //WARNING must come before the time type!!!
            jobjectArray aux10 = (*env)->NewObjectArray(env, numberOfRows, getTimestampClassID(), NULL);
            getTimestampColumn(env, aux10, getTimestampClassID(), getTimestampConstructorID(), NULL, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux10);
            (*env)->DeleteLocalRef(env, aux10);
        } else if(strncmp(nextSQLName, "time", 4) == 0 || strncmp(nextSQLName, "timetz", 6) == 0) {
            jobjectArray aux11 = (*env)->NewObjectArray(env, numberOfRows, getTimeClassID(), NULL);
            getTimeColumn(env, aux11, getTimeClassID(), getTimeConstructorID(), NULL, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux11);
            (*env)->DeleteLocalRef(env, aux11);
        } else if(strncmp(nextSQLName, "blob", 4) == 0) {
            jobjectArray aux12 = (*env)->NewObjectArray(env, numberOfRows, getByteArrayClassID(), NULL);
            getBlobColumn(env, aux12, NULL, NULL, 0, numberOfRows, b);
            (*env)->SetObjectArrayElement(env, dataArray, i, aux12);
            (*env)->DeleteLocalRef(env, aux12);
        } else if(strncmp(nextSQLName, "decimal", 7) == 0) {
            jobjectArray aux13 = (*env)->NewObjectArray(env, numberOfRows, getBigDecimalClassID(), NULL);
            if(col.type.digits <= 2) {
                getDecimalbteColumn(env, aux13, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
            } else if(col.type.digits > 2 && col.type.digits <= 4) {
                getDecimalshtColumn(env, aux13, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
            } else if(col.type.digits > 4 && col.type.digits <= 8) {
                getDecimalintColumn(env, aux13, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
            } else {
                getDecimallngColumn(env, aux13, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
            }
            (*env)->SetObjectArrayElement(env, dataArray, i, aux13);
            (*env)->DeleteLocalRef(env, aux13);
        } else {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Unknown MonetDB type!");
        }
    }

    (*env)->ReleaseIntArrayElements(env, digitsArray, digitsAux, 0);
    (*env)->ReleaseIntArrayElements(env, scalesArray, scalesAux, 0);
    return (*env)->NewObject(env, getQueryResultSetID(), getQueryResultSetConstructorID(), jconnection, (long) output, columnNamesArray, columnTypesArray, digitsArray, scalesArray, dataArray, numberOfRows);
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_getMonetDBTableInternal
    (JNIEnv *env, jobject jconnection, jlong connectionPointer, jstring tableSchema, jstring tableName) {
    const char *schema_name_tmp = (*env)->GetStringUTFChars(env, tableSchema, NULL), *table_name_tmp = (*env)->GetStringUTFChars(env, tableName, NULL);
    char *err = NULL;
    sql_table* table;

    err = monetdb_find_table((void*) connectionPointer, &table, schema_name_tmp, table_name_tmp);
    (*env)->ReleaseStringUTFChars(env, tableSchema, schema_name_tmp);
    (*env)->ReleaseStringUTFChars(env, tableName, table_name_tmp);
    if (err) {
       (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
       return NULL;
    }
    return (*env)->NewObject(env, getMonetDBTableClassID(), getMonetDBTableClassConstructorID(), jconnection, tableSchema, tableName);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedConnection_closeConnectionInternal
    (JNIEnv *env, jobject jconnection) {

    jfieldID connectionPointerID = getMonetDBEmbeddedConnectionPointerID();
    jlong connectionPointer = (*env)->GetLongField(env, jconnection, connectionPointerID);
    monetdb_disconnect((void*) connectionPointer);
    (*env)->SetLongField(env, jconnection, connectionPointerID, 0);
}
