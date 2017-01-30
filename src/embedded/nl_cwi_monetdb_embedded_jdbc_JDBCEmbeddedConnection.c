/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection.h"

#include "javaids.h"
#include "converters.h"
#include "embedded.h"
#include "monetdb_config.h"
#include "res_table.h"

static void setErrorResponse(JNIEnv *env, jobject jdbccon, char* errorMessage) {
    jintArray lineResponse = (jintArray) (*env)->GetObjectField(env, jdbccon, getServerResponsesID());
    int response[2] = {1,4}; //ERROR AND PROMPT
    (*env)->SetIntArrayRegion(env, lineResponse, 0, 2, response);
    (*env)->SetObjectField(env, jdbccon, getLastErrorID(), (*env)->NewStringUTF(env, errorMessage));
    GDKfree(errorMessage);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_getNextTableHeaderInternal
    (JNIEnv *env, jobject jdbccon, jlong resultSetPointer, jobjectArray columnNames, jintArray columnLengths, jobjectArray types, jobjectArray tableNames) {
    res_table *output = (res_table *) resultSetPointer;
    int numberOfColumns = (*env)->GetArrayLength(env, columnNames);
    int* columnLengthsFound = GDKmalloc(numberOfColumns * sizeof(int));
    (void) jdbccon;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        columnLengthsFound[i] = col.type.digits;
        jstring colname = (*env)->NewStringUTF(env, col.name);
        jstring sqlname = (*env)->NewStringUTF(env, col.type.type->sqlname);
        jstring tablename = (*env)->NewStringUTF(env, col.tn);
        (*env)->SetObjectArrayElement(env, columnNames, i, colname);
        (*env)->SetObjectArrayElement(env, types, i, sqlname);
        (*env)->SetObjectArrayElement(env, tableNames, i, tablename);
        (*env)->DeleteLocalRef(env, colname);
        (*env)->DeleteLocalRef(env, sqlname);
        (*env)->DeleteLocalRef(env, tablename);
    }
    (*env)->SetIntArrayRegion(env, columnLengths, 0, numberOfColumns, columnLengthsFound);
    GDKfree(columnLengthsFound);
    //Important! Don't free the result table yet!
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_parseTupleLinesInternal
    (JNIEnv *env, jobject jdbccon, jlong resultSetPointer, jintArray typesMap, jobjectArray values) {
    res_table *output = (res_table *) resultSetPointer;
    int numberOfColumns = (*env)->GetArrayLength(env, values);
    int numberOfRows = (*env)->GetArrayLength(env, (*env)->GetObjectArrayElement(env, values, 0));
    int* typesMapConverted = (int*) (*env)->GetIntArrayElements(env, typesMap, NULL);
    char* nextSQLName;
    (void) jdbccon;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        BAT* b = BATdescriptor(col.b);
        jobject nextColumnValues = (*env)->GetObjectArrayElement(env, values, i);

        switch(typesMapConverted[i]) {
            case 16: //Types.BOOLEAN:
                getBooleanColumn(env, (jbyteArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case -6: //Types.TINYINT:
                getTinyintColumn(env, (jbyteArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case 5: //Types.SMALLINT:
                getSmallintColumn(env, (jshortArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case 4: //Types.INTEGER:
                getIntColumn(env, (jintArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case -5: //Types.BIGINT:
                getBigintColumn(env, (jlongArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case 7: //Types.REAL:
                getRealColumn(env, (jfloatArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case 8: //Types.DOUBLE:
                getDoubleColumn(env, (jdoubleArray) nextColumnValues, 0, numberOfRows, b);
                break;
            case 3: //Types.DECIMAL:
                if(col.type.digits <= 2) {
                    getDecimalbteColumn(env, (jobjectArray) nextColumnValues, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
                } else if(col.type.digits > 2 && col.type.digits <= 4) {
                    getDecimalshtColumn(env, (jobjectArray) nextColumnValues, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
                } else if(col.type.digits > 4 && col.type.digits <= 8) {
                    getDecimalintColumn(env, (jobjectArray) nextColumnValues, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
                } else {
                    getDecimallngColumn(env, (jobjectArray) nextColumnValues, getBigDecimalClassID(), getBigDecimalConstructorID(), 0, numberOfRows, b, col.type.scale);
                }
                break;
            case 1: //Types.CHAR:
            case 12: //Types.VARCHAR:
            case -1: //Types.LONGVARCHAR:
                getStringColumn(env, (jobjectArray) nextColumnValues, getStringClassID(), NULL, 0, numberOfRows, b);
                break;
            case 91: //Types.DATE:
                getGregorianCalendarDateColumn(env, (jobjectArray) nextColumnValues, getGregorianCalendarClassID(), getGregorianCalendarConstructorID(), getGregorianCalendarSetterID(), 0, numberOfRows, b);
                break;
            case 92: //Types.TIME:
            case 2013: //Types.TIME_WITH_TIMEZONE:
                getGregorianCalendarTimeColumn(env, (jobjectArray) nextColumnValues, getGregorianCalendarClassID(), getGregorianCalendarConstructorID(), getGregorianCalendarSetterID(), 0, numberOfRows, b);
                break;
            case 93: //Types.TIMESTAMP:
            case 2014: //Types.TIMESTAMP_WITH_TIMEZONE
                getGregorianCalendarTimestampColumn(env, (jobjectArray) nextColumnValues, getGregorianCalendarClassID(), getGregorianCalendarConstructorID(), getGregorianCalendarSetterID(), 0, numberOfRows, b);
                break;
            case -4: //Types.LONGVARBINARY:
                getBlobColumn(env, (jobjectArray) nextColumnValues, NULL, NULL, 0, numberOfRows, b);
                break;
            default:
                (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Unknown Java mapping type!");
        }
        (*env)->DeleteLocalRef(env, nextColumnValues);
    }

    (*env)->ReleaseIntArrayElements(env, typesMap, typesMapConverted, 0);
    monetdb_cleanup_result(NULL, output); //it's safe to delete the table now as we don't have any extra blocks to fetch
    return numberOfRows;
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_sendQueryInternal
    (JNIEnv *env, jobject jdbccon, jlong connectionPointer, jstring query, jboolean execute) {
    long tablePointer, lastId, rowCount;
    int lineResponseCounter = 0, query_type, autoCommitStatus, numberOfRows, nextResponses[4], responseParameters[3];
    const char *query_string_tmp = (*env)->GetStringUTFChars(env, query, NULL);
    char *err = NULL;
    res_table *output = NULL;

    // Execute the query
    err = monetdb_query((void*) connectionPointer, (char*) query_string_tmp, (char) execute, (void**) &output);
    (*env)->ReleaseStringUTFChars(env, query, query_string_tmp);

    //if there are errors, set the error string and exit
    if (err) {
        setErrorResponse(env, jdbccon, err);
        monetdb_cleanup_result(NULL, output);
        return;
    }

    //set the result set pointer
    (*env)->SetLongField(env, jdbccon, getLastResultSetPointerID(), (jlong) output);
    nextResponses[lineResponseCounter++] = 6; //SOHEADER

    //set the next serverHeader
    query_type = (output == NULL) ? 4 : output->query_type;
    (*env)->SetIntField(env, jdbccon, getServerHeaderResponseID(), query_type);

    // The SCHEMA responses (query_type == 3), don't need anything from the server
    switch(query_type) {
        case 1: //PREPARE
        case 5: //TABLE
        case 6: //BLOCK
            //set the Table Headers values
            numberOfRows = BATcount(BATdescriptor(output->cols[0].b));
            responseParameters[0] = output->id;
            responseParameters[1] = numberOfRows; //number of rows
            if(query_type == 1 || query_type == 5) {
                responseParameters[2] = output->nr_cols; //number of columns
            }
            //set the other headers
            nextResponses[lineResponseCounter++] = 2; //HEADER
            if(numberOfRows > 0) {
                nextResponses[lineResponseCounter++] = 3; //RESULT
            }
            jintArray lastServerResponseParameters = (jintArray) (*env)->GetObjectField(env, jdbccon, getLastServerResponseParametersID());
            (*env)->SetIntArrayRegion(env, lastServerResponseParameters, 0, 3, responseParameters);
            break;
        case 2: //UPDATE
            getUpdateQueryData((void*) connectionPointer, &lastId, &rowCount);
            (*env)->SetObjectField(env, jdbccon, getLastServerResponseID(), (*env)->NewObject(env, getUpdateResponseClassID(), getUpdateResponseConstructorID(), (jint) lastId, (jint) rowCount));
            break;
        case 4: //TRANSACTION
            autoCommitStatus = getAutocommitFlag((void*) connectionPointer);
            (*env)->SetObjectField(env, jdbccon, getLastServerResponseID(), (*env)->NewObject(env, getAutoCommitResponseClassID(), getAutoCommitResponseConstructorID(), (autoCommitStatus) ? JNI_TRUE : JNI_FALSE));
            break;
    }
    nextResponses[lineResponseCounter++] = 4; //PROMPT
    //set the line response headers
    jintArray lineResponse = (jintArray) (*env)->GetObjectField(env, jdbccon, getServerResponsesID());
    (*env)->SetIntArrayRegion(env, lineResponse, 0, lineResponseCounter, nextResponses);

    if(query_type != 1 && query_type != 5) { //if the result is not a table or a prepare, delete it right away
        monetdb_cleanup_result(NULL, output);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_sendAutocommitCommandInternal
    (JNIEnv *env, jobject jdbccon, jlong connectionPointer, jint flag) {
    int autoCommitStatus;

    char *err = sendAutoCommitCommand((void*) connectionPointer, flag, &autoCommitStatus);
    if (err) { //if there is an error set it and return
        setErrorResponse(env, jdbccon, err);
        return;
    }
    (*env)->SetObjectField(env, jdbccon, getLastServerResponseID(), (*env)->NewObject(env, getAutoCommitResponseClassID(), getAutoCommitResponseConstructorID(), (autoCommitStatus) ? JNI_TRUE : JNI_FALSE));
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_sendReleaseCommandInternal
    (JNIEnv *env, jobject jdbccon, jlong connectionPointer, jint commandId) {
    (void) env;
    (void) jdbccon;
    sendReleaseCommand((void*) connectionPointer, commandId);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_sendCloseCommandInternal
    (JNIEnv *env, jobject jdbccon, jlong connectionPointer, jint commandId) {
    (void) env;
    (void) jdbccon;
    sendCloseCommand((void*) connectionPointer, commandId);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_JDBCEmbeddedConnection_sendReplySizeCommandInternal
    (JNIEnv *env, jobject jdbccon, jlong connectionPointer, jint size) {
    (void) env;
    (void) jdbccon;
    sendReplySizeCommand((void*) connectionPointer, (long) size);
}
