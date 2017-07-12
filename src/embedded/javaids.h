/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#ifndef SRC_JAVAIDS_H
#define SRC_JAVAIDS_H

#include <jni.h>

void initializeIDS(JNIEnv *env);
void releaseIDS(JNIEnv *env);

/* Embedded database environment Classes */

jmethodID getMonetDBEmbeddedDatabaseConstructorID(void);
jclass getMonetDBEmbeddedExceptionClassID(void);
jclass getMonetDBEmbeddedConnectionClassID(void);
jmethodID getMonetDBEmbeddedConnectionConstructorID(void);
jclass getJDBCEmbeddedConnectionClassID(void);
jmethodID getJDBCDBEmbeddedConnectionConstructorID(void);
jclass getQueryResultSetID(void);
jmethodID getQueryResultSetConstructorID(void);
jclass getPreparedQueryResultSetClassID(void);
jmethodID getPreparedQueryResultSetClassConstructorID(void);
jclass getExecResultSetClassID(void);
jmethodID getExecResultSetClassConstructorID(void);
jclass getMonetDBTableClassID(void);
jmethodID getMonetDBTableClassConstructorID(void);
jfieldID getConnectionResultPointerID(void);

/* Java MonetDB mappings constructors */

jclass getBooleanClassID(void);
jmethodID getBooleanConstructorID(void);
jclass getByteClassID(void);
jmethodID getByteConstructorID(void);
jclass getShortClassID(void);
jmethodID getShortConstructorID(void);
jclass getIntegerClassID(void);
jmethodID getIntegerConstructorID(void);
jclass getLongClassID(void);
jmethodID getLongConstructorID(void);
jclass getFloatClassID(void);
jmethodID getFloatConstructorID(void);
jclass getDoubleClassID(void);
jmethodID getDoubleConstructorID(void);

jclass getShortArrayClassID(void);
jclass getIntegerArrayClassID(void);
jclass getLongArrayClassID(void);
jclass getFloatArrayClassID(void);
jclass getDoubleArrayClassID(void);
jclass getByteArrayClassID(void);
jclass getByteMatrixClassID(void);
jclass getBigDecimalClassID(void);

jclass getBigDecimalArrayClassID(void);
jmethodID getBigDecimalConstructorID(void);
jclass getDateClassID(void);
jclass getDateClassArrayID(void);
jmethodID getDateConstructorID(void);
jclass getTimeClassID(void);
jclass getTimeArrayClassID(void);
jmethodID getTimeConstructorID(void);
jclass getTimestampClassID(void);
jclass getTimestampArrayClassID(void);
jmethodID getTimestampConstructorID(void);
jclass getGregorianCalendarClassID(void);
jmethodID getGregorianCalendarConstructorID(void);
jmethodID getGregorianCalendarSetterID(void);
jclass getStringClassID(void);
jclass getStringArrayClassID(void);
jmethodID getStringByteArrayConstructorID(void);

/* JDBC Embedded Connection */

jfieldID getServerResponsesID(void);
jfieldID getLastErrorID(void);
jfieldID getLastResultSetPointerID(void);
jfieldID getServerHeaderResponseID(void);
jfieldID getLastServerResponseParametersID(void);
jfieldID getLastServerResponseID(void);
jclass getAutoCommitResponseClassID(void);
jmethodID getAutoCommitResponseConstructorID(void);
jclass getUpdateResponseClassID(void);
jmethodID getUpdateResponseConstructorID(void);

/* MonetDB Table */

jclass getMonetDBTableColumnClassID(void);
jmethodID getMonetDBTableColumnConstructorID(void);
jclass getMappingEnumID(void);
jmethodID getGetEnumValueID(void);
jfieldID getGetConnectionID(void);
jfieldID getGetConnectionLongID(void);
jfieldID getGetSchemaID(void);
jfieldID getGetTableID(void);
jfieldID getStructPointerID(void);

jmethodID getBigDecimalToStringID(void);
jmethodID getSetBigDecimalScaleID(void);
jmethodID getDateToLongID(void);
jmethodID getTimeToLongID(void);
jmethodID getTimestampToLongID(void);

#endif //SRC_JAVAIDS_H
