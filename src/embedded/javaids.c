/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "javaids.h"

#include <jni.h>

/* Embedded database environment Classes */

static jmethodID monetDBEmbeddedDatabaseConstructorID;
static jclass monetDBEmbeddedExceptionClassID;
static jclass monetDBEmbeddedConnectionClassID;
static jmethodID monetDBEmbeddedConnectionConstructorID;
static jclass jDBCEmbeddedConnectionClassID;
static jmethodID jDBCDBEmbeddedConnectionConstructorID;

static jclass queryResultSetID;
static jmethodID queryResultSetConstructorID;
static jclass monetDBTableClassID;
static jmethodID monetDBTableClassConstructorID;

static jfieldID monetDBEmbeddedConnectionPointerID;
static jfieldID connectionResultPointerID;

/* Java MonetDB mappings constructors */
static jclass booleanClassID;
static jmethodID booleanConstructorID;
static jclass byteClassID;
static jmethodID byteConstructorID;
static jclass shortClassID;
static jmethodID shortConstructorID;
static jclass integerClassID;
static jmethodID integerConstructorID;
static jclass longClassID;
static jmethodID longConstructorID;
static jclass floatClassID;
static jmethodID floatConstructorID;
static jclass doubleClassID;
static jmethodID doubleConstructorID;

static jclass byteArrayClassID;
static jclass shortArrayClassID;
static jclass integerArrayClassID;
static jclass longArrayClassID;
static jclass floatArrayClassID;
static jclass doubleArrayClassID;
static jclass byteMatrixClassID;
static jclass bigDecimalClassID;
static jclass bigDecimalArrayClassID;
static jmethodID bigDecimalConstructorID;

static jclass dateClassID;
static jclass dateClassArrayID;
static jmethodID dateConstructorID;
static jclass timeClassID;
static jclass timeArrayClassID;
static jmethodID timeConstructorID;
static jclass timestampClassID;
static jclass timestampArrayClassID;
static jmethodID timestampConstructorID;
static jclass gregorianCalendarClassID;
static jmethodID gregorianCalendarConstructorID;
static jmethodID gregorianCalendarSetterID;

static jclass stringClassID;
static jclass stringArrayClassID;
static jmethodID stringByteArrayConstructorID;

/* JDBC Embedded Connection */

static jfieldID serverResponsesID;
static jfieldID lastErrorID;
static jfieldID lastResultSetPointerID;
static jfieldID serverHeaderResponseID;
static jfieldID lastServerResponseParametersID;
static jfieldID lastServerResponseID;
static jfieldID structPointerID;

static jclass autoCommitResponseClassID;
static jmethodID autoCommitResponseConstructorID;
static jclass updateResponseClassID;
static jmethodID updateResponseConstructorID;

/* MonetDB Table */

static jclass monetDBTableColumnClassID;
static jmethodID monetDBTableColumnConstructorID;
static jclass mappingEnumID;
static jmethodID getEnumValueID;

static jfieldID getConnectionID;
static jfieldID getConnectionLongID;
static jfieldID getSchemaID;
static jfieldID getTableID;

static jmethodID bigDecimalToStringID;
static jmethodID setBigDecimalScaleID;
static jmethodID dateToLongID;
static jmethodID timeToLongID;
static jmethodID timestampToLongID;

void initializeIDS(JNIEnv *env) {
    /* Embedded database environment Classes */

    jobject tempLocalRef;
    jclass monetDBEmbeddedDatabaseClass = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedDatabase");

    // private MonetDBEmbeddedDatabase(String dbDirectory, boolean silentFlag, boolean sequentialFlag)
    monetDBEmbeddedDatabaseConstructorID = (*env)->GetMethodID(env, monetDBEmbeddedDatabaseClass, "<init>", "(Ljava/lang/String;ZZ)V");
    (*env)->DeleteLocalRef(env, monetDBEmbeddedDatabaseClass);

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
    monetDBEmbeddedExceptionClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedConnection");
    monetDBEmbeddedConnectionClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    // protected MonetDBEmbeddedConnection(long connectionPointer)
    monetDBEmbeddedConnectionConstructorID = (*env)->GetMethodID(env, monetDBEmbeddedConnectionClassID, "<init>", "(J)V");
    monetDBEmbeddedConnectionPointerID = (*env)->GetFieldID(env, monetDBEmbeddedConnectionClassID, "connectionPointer", "J");

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/jdbc/JDBCEmbeddedConnection");
    jDBCEmbeddedConnectionClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    // protected JDBCEmbeddedConnection(long connectionPointer)
    jDBCDBEmbeddedConnectionConstructorID = (*env)->GetMethodID(env, jDBCEmbeddedConnectionClassID, "<init>", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/resultset/QueryResultSet");
    queryResultSetID = (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    //QueryResultSetMonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns, int numberOfRows, int[] typesIDs)
    queryResultSetConstructorID = (*env)->GetMethodID(env, queryResultSetID, "<init>", "(Lnl/cwi/monetdb/embedded/env/MonetDBEmbeddedConnection;JII[I)V");

    connectionResultPointerID = (*env)->GetFieldID(env, queryResultSetID, "structPointer", "J");

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/tables/MonetDBTable");
    monetDBTableClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    //public MonetDBTable(MonetDBEmbeddedConnection connection, String tableSchema, String tableName)
    monetDBTableClassConstructorID = (*env)->GetMethodID(env, monetDBTableClassID, "<init>", "(Lnl/cwi/monetdb/embedded/env/MonetDBEmbeddedConnection;Ljava/lang/String;Ljava/lang/String;)V");

    /* Java MonetDB mappings constructors */
    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Boolean");
    booleanClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    booleanConstructorID = (*env)->GetMethodID(env, booleanClassID, "<init>", "(Z)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Byte");
    byteClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    byteConstructorID = (*env)->GetMethodID(env, byteClassID, "<init>", "(B)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Short");
    shortClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    shortConstructorID = (*env)->GetMethodID(env, shortClassID, "<init>", "(S)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Integer");
    integerClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    integerConstructorID = (*env)->GetMethodID(env, integerClassID, "<init>", "(I)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Long");
    longClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    longConstructorID = (*env)->GetMethodID(env, longClassID, "<init>", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Float");
    floatClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    floatConstructorID = (*env)->GetMethodID(env, floatClassID, "<init>", "(F)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/Double");
    doubleClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    doubleConstructorID = (*env)->GetMethodID(env, doubleClassID, "<init>", "(D)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "[B");
    byteArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[S");
    shortArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[I");
    integerArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[J");
    longArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[F");
    floatArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[D");
    doubleArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[[B");
    byteMatrixClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/math/BigDecimal");
    bigDecimalClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[Ljava/math/BigDecimal;");
    bigDecimalArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    bigDecimalConstructorID = (*env)->GetMethodID(env, bigDecimalClassID, "<init>", "(Ljava/lang/String;)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/sql/Date");
    dateClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[Ljava/sql/Date;");
    dateClassArrayID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    dateConstructorID = (*env)->GetMethodID(env, dateClassID, "<init>", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/sql/Time");
    timeClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[Ljava/sql/Time;");
    timeArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    timeConstructorID = (*env)->GetMethodID(env, timeClassID, "<init>", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/sql/Timestamp");
    timestampClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[Ljava/sql/Timestamp;");
    timestampArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    timestampConstructorID = (*env)->GetMethodID(env, timestampClassID, "<init>", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/util/GregorianCalendar");
    gregorianCalendarClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    gregorianCalendarConstructorID = (*env)->GetMethodID(env, gregorianCalendarClassID, "<init>", "()V");
    gregorianCalendarSetterID = (*env)->GetMethodID(env, gregorianCalendarClassID, "setTimeInMillis", "(J)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "java/lang/String");
    stringClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    tempLocalRef = (jobject) (*env)->FindClass(env, "[Ljava/lang/String;");
    stringArrayClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    stringByteArrayConstructorID = (*env)->GetMethodID(env, stringClassID, "<init>", "([B)V");

    /* JDBC Embedded Connection */

    serverResponsesID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "lineResponse", "[I");
    lastErrorID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "lastError", "Ljava/lang/String;");
    lastResultSetPointerID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "lastResultSetPointer", "J");
    serverHeaderResponseID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "serverHeaderResponse", "I");
    lastServerResponseParametersID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "lastServerResponseParameters", "[I");
    lastServerResponseID = (*env)->GetFieldID(env, jDBCEmbeddedConnectionClassID, "lastServerResponse", "Lnl/cwi/monetdb/mcl/responses/IResponse;");

    jclass embeddedDataBlockResponseClass = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/jdbc/EmbeddedDataBlockResponse");
    structPointerID = (*env)->GetFieldID(env, embeddedDataBlockResponseClass, "structPointer", "J");
    (*env)->DeleteLocalRef(env, (jobject) embeddedDataBlockResponseClass);

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/mcl/responses/AutoCommitResponse");
    autoCommitResponseClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    autoCommitResponseConstructorID = (*env)->GetMethodID(env, autoCommitResponseClassID, "<init>", "(Z)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/mcl/responses/UpdateResponse");
    updateResponseClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    updateResponseConstructorID = (*env)->GetMethodID(env, updateResponseClassID, "<init>", "(II)V");

    tempLocalRef = (jobject) (*env)->FindClass(env, "nl/cwi/monetdb/embedded/tables/MonetDBTableColumn");
    monetDBTableColumnClassID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    //public MonetDBTableColumn(String columnType, String columnName, int columnDigits, int columnScale, String defaultValue, boolean isNullable)
    monetDBTableColumnConstructorID = (*env)->GetMethodID(env, monetDBTableColumnClassID, "<init>", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;Z)V");

    tempLocalRef = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/mapping/MonetDBToJavaMapping");
    mappingEnumID = (jclass) (*env)->NewGlobalRef(env, tempLocalRef);
    (*env)->DeleteLocalRef(env, tempLocalRef);

    getEnumValueID = (*env)->GetStaticMethodID(env, mappingEnumID, "GetJavaMappingFromMonetDBString", "(Ljava/lang/String;)Lnl/cwi/monetdb/embedded/mapping/MonetDBToJavaMapping;");
    jclass tableClass = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/tables/MonetDBTable");
    getConnectionID = (*env)->GetFieldID(env, tableClass, "connection", "Lnl/cwi/monetdb/embedded/env/MonetDBEmbeddedConnection;");
    getConnectionLongID = (*env)->GetFieldID(env, monetDBEmbeddedConnectionClassID, "connectionPointer", "J");
    getSchemaID = (*env)->GetFieldID(env, tableClass, "tableSchema", "Ljava/lang/String;");
    getTableID = (*env)->GetFieldID(env, tableClass, "tableName", "Ljava/lang/String;");
    (*env)->DeleteLocalRef(env, tableClass);

    bigDecimalToStringID = (*env)->GetMethodID(env, bigDecimalClassID, "toPlainString", "()Ljava/lang/String;");
    setBigDecimalScaleID = (*env)->GetMethodID(env, bigDecimalClassID, "setScale", "(II)Ljava/math/BigDecimal;");
    dateToLongID = (*env)->GetMethodID(env, dateClassID, "getTime", "()J");
    timeToLongID = (*env)->GetMethodID(env, timeClassID, "getTime", "()J");
    timestampToLongID = (*env)->GetMethodID(env, timestampClassID, "getTime", "()J");
}

void releaseIDS(JNIEnv *env) {
    /* Embedded database environment Classes */

    (*env)->DeleteGlobalRef(env, monetDBEmbeddedExceptionClassID);
    (*env)->DeleteGlobalRef(env, monetDBEmbeddedConnectionClassID);
    (*env)->DeleteGlobalRef(env, jDBCEmbeddedConnectionClassID);
    (*env)->DeleteGlobalRef(env, queryResultSetID);
    (*env)->DeleteGlobalRef(env, monetDBTableClassID);

    /* Java MonetDB mappings classes */
    (*env)->DeleteGlobalRef(env, booleanClassID);
    (*env)->DeleteGlobalRef(env, byteClassID);
    (*env)->DeleteGlobalRef(env, shortClassID);
    (*env)->DeleteGlobalRef(env, integerClassID);
    (*env)->DeleteGlobalRef(env, longClassID);
    (*env)->DeleteGlobalRef(env, floatClassID);
    (*env)->DeleteGlobalRef(env, doubleClassID);

    (*env)->DeleteGlobalRef(env, byteArrayClassID);
    (*env)->DeleteGlobalRef(env, shortArrayClassID);
    (*env)->DeleteGlobalRef(env, integerArrayClassID);
    (*env)->DeleteGlobalRef(env, longArrayClassID);
    (*env)->DeleteGlobalRef(env, floatArrayClassID);
    (*env)->DeleteGlobalRef(env, doubleArrayClassID);
    (*env)->DeleteGlobalRef(env, byteMatrixClassID);
    (*env)->DeleteGlobalRef(env, bigDecimalClassID);
    (*env)->DeleteGlobalRef(env, bigDecimalArrayClassID);
    (*env)->DeleteGlobalRef(env, dateClassID);
    (*env)->DeleteGlobalRef(env, dateClassArrayID);
    (*env)->DeleteGlobalRef(env, timeClassID);
    (*env)->DeleteGlobalRef(env, timeArrayClassID);
    (*env)->DeleteGlobalRef(env, timestampClassID);
    (*env)->DeleteGlobalRef(env, timestampArrayClassID);
    (*env)->DeleteGlobalRef(env, gregorianCalendarClassID);
    (*env)->DeleteGlobalRef(env, stringClassID);
    (*env)->DeleteGlobalRef(env, stringArrayClassID);

    /* JDBC Embedded Connection */

    (*env)->DeleteGlobalRef(env, autoCommitResponseClassID);
    (*env)->DeleteGlobalRef(env, updateResponseClassID);

    /* MonetDB Table */

    (*env)->DeleteGlobalRef(env, monetDBTableColumnClassID);
    (*env)->DeleteGlobalRef(env, mappingEnumID);
}

/* Embedded database environment Classes */

jmethodID getMonetDBEmbeddedDatabaseConstructorID() {
    return monetDBEmbeddedDatabaseConstructorID;
}

jclass getMonetDBEmbeddedExceptionClassID() {
    return monetDBEmbeddedExceptionClassID;
}

jclass getMonetDBEmbeddedConnectionClassID() {
    return monetDBEmbeddedConnectionClassID;
}

jmethodID getMonetDBEmbeddedConnectionConstructorID() {
    return monetDBEmbeddedConnectionConstructorID;
}

jclass getJDBCEmbeddedConnectionClassID() {
    return jDBCEmbeddedConnectionClassID;
}

jmethodID getJDBCDBEmbeddedConnectionConstructorID() {
    return jDBCDBEmbeddedConnectionConstructorID;
}

jclass getQueryResultSetID() {
    return queryResultSetID;
}

jmethodID getQueryResultSetConstructorID() {
    return queryResultSetConstructorID;
}

jclass getMonetDBTableClassID() {
    return monetDBTableClassID;
}

jmethodID getMonetDBTableClassConstructorID() {
    return monetDBTableClassConstructorID;
}

jfieldID getMonetDBEmbeddedConnectionPointerID() {
    return monetDBEmbeddedConnectionPointerID;
}

jfieldID getConnectionResultPointerID() {
    return connectionResultPointerID;
}

/* Java MonetDB mappings constructors */

jclass getBooleanClassID() {
    return booleanClassID;
}

jmethodID getBooleanConstructorID() {
    return booleanConstructorID;
}

jclass getByteClassID() {
    return byteClassID;
}

jmethodID getByteConstructorID() {
    return byteConstructorID;
}

jclass getShortClassID() {
    return shortClassID;
}

jmethodID getShortConstructorID() {
    return shortConstructorID;
}

jclass getIntegerClassID() {
    return integerClassID;
}

jmethodID getIntegerConstructorID() {
    return integerConstructorID;
}

jclass getLongClassID() {
    return longClassID;
}

jmethodID getLongConstructorID() {
    return longConstructorID;
}

jclass getFloatClassID() {
    return floatClassID;
}

jmethodID getFloatConstructorID() {
    return floatConstructorID;
}

jclass getDoubleClassID() {
    return doubleClassID;
}

jmethodID getDoubleConstructorID() {
    return doubleConstructorID;
}

jclass getByteArrayClassID() {
    return byteArrayClassID;
}

jclass getShortArrayClassID() {
    return shortArrayClassID;
}

jclass getIntegerArrayClassID() {
    return integerArrayClassID;
}

jclass getLongArrayClassID() {
    return longArrayClassID;
}

jclass getFloatArrayClassID() {
    return floatArrayClassID;
}

jclass getDoubleArrayClassID() {
    return doubleArrayClassID;
}

jclass getByteMatrixClassID() {
    return byteMatrixClassID;
}

jclass getBigDecimalClassID() {
    return bigDecimalClassID;
}

jclass getBigDecimalArrayClassID() {
    return bigDecimalArrayClassID;
}

jmethodID getBigDecimalConstructorID() {
    return bigDecimalConstructorID;
}

jclass getDateClassID() {
    return dateClassID;
}

jclass getDateClassArrayID() {
    return dateClassArrayID;
}

jmethodID getDateConstructorID() {
    return dateConstructorID;
}

jclass getTimeClassID() {
    return timeClassID;
}

jclass getTimeArrayClassID() {
    return timeArrayClassID;
}

jmethodID getTimeConstructorID() {
    return timeConstructorID;
}

jclass getTimestampClassID() {
    return timestampClassID;
}

jclass getTimestampArrayClassID() {
    return timestampArrayClassID;
}

jmethodID getTimestampConstructorID() {
    return timestampConstructorID;
}

jclass getGregorianCalendarClassID() {
    return gregorianCalendarClassID;
}

jmethodID getGregorianCalendarConstructorID() {
    return gregorianCalendarConstructorID;
}

jmethodID getGregorianCalendarSetterID() {
    return gregorianCalendarSetterID;
}

jclass getStringClassID() {
    return stringClassID;
}

jclass getStringArrayClassID() {
    return stringArrayClassID;
}

jmethodID getStringByteArrayConstructorID() {
    return stringByteArrayConstructorID;
}

/* JDBC Embedded Connection */

jfieldID getServerResponsesID() {
    return serverResponsesID;
}

jfieldID getLastErrorID() {
    return lastErrorID;
}

jfieldID getLastResultSetPointerID() {
    return lastResultSetPointerID;
}

jfieldID getServerHeaderResponseID() {
    return serverHeaderResponseID;
}

jfieldID getLastServerResponseParametersID() {
    return lastServerResponseParametersID;
}

jfieldID getLastServerResponseID() {
    return lastServerResponseID;
}

jfieldID getStructPointerID() {
    return structPointerID;
}

jclass getAutoCommitResponseClassID() {
    return autoCommitResponseClassID;
}

jmethodID getAutoCommitResponseConstructorID() {
    return autoCommitResponseConstructorID;
}

jclass getUpdateResponseClassID() {
    return updateResponseClassID;
}

jmethodID getUpdateResponseConstructorID() {
    return updateResponseConstructorID;
}

/* MonetDB Table */

jclass getMonetDBTableColumnClassID() {
    return monetDBTableColumnClassID;
}

jmethodID getMonetDBTableColumnConstructorID() {
    return monetDBTableColumnConstructorID;
}

jclass getMappingEnumID() {
    return mappingEnumID;
}

jmethodID getGetEnumValueID() {
    return getEnumValueID;
}

jfieldID getGetConnectionID() {
    return getConnectionID;
}

jfieldID getGetConnectionLongID() {
    return getConnectionLongID;
}

jfieldID getGetSchemaID() {
    return getSchemaID;
}

jfieldID getGetTableID() {
    return getTableID;
}

jmethodID getBigDecimalToStringID() {
    return bigDecimalToStringID;
}

jmethodID getSetBigDecimalScaleID() {
    return setBigDecimalScaleID;
}

jmethodID getDateToLongID() {
    return dateToLongID;
}

jmethodID getTimeToLongID() {
    return timeToLongID;
}

jmethodID getTimestampToLongID() {
    return timestampToLongID;
}
