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

jmethodID getMonetDBEmbeddedDatabaseConstructorID();
jclass getMonetDBEmbeddedExceptionClassID();
jclass getMonetDBEmbeddedConnectionClassID();
jmethodID getMonetDBEmbeddedConnectionConstructorID();
jclass getJDBCEmbeddedConnectionClassID();
jmethodID getJDBCDBEmbeddedConnectionConstructorID();
jclass getQueryResultSetID();
jmethodID getQueryResultSetConstructorID();
jclass getMonetDBTableClassID();
jmethodID getMonetDBTableClassConstructorID();
jfieldID getMonetDBEmbeddedConnectionPointerID();
jfieldID getConnectionResultPointerID();

/* Java MonetDB mappings constructors */

jclass getBooleanClassID();
jmethodID getBooleanConstructorID();
jclass getByteClassID();
jmethodID getByteConstructorID();
jclass getShortClassID();
jmethodID getShortConstructorID();
jclass getIntegerClassID();
jmethodID getIntegerConstructorID();
jclass getLongClassID();
jmethodID getLongConstructorID();
jclass getFloatClassID();
jmethodID getFloatConstructorID();
jclass getDoubleClassID();
jmethodID getDoubleConstructorID();

jclass getShortArrayClassID();
jclass getIntegerArrayClassID();
jclass getLongArrayClassID();
jclass getFloatArrayClassID();
jclass getDoubleArrayClassID();
jclass getByteArrayClassID();
jclass getByteMatrixClassID();
jclass getBigDecimalClassID();

jclass getBigDecimalArrayClassID();
jmethodID getBigDecimalConstructorID();
jclass getDateClassID();
jclass getDateClassArrayID();
jmethodID getDateConstructorID();
jclass getTimeClassID();
jclass getTimeArrayClassID();
jmethodID getTimeConstructorID();
jclass getTimestampClassID();
jclass getTimestampArrayClassID();
jmethodID getTimestampConstructorID();
jclass getGregorianCalendarClassID();
jmethodID getGregorianCalendarConstructorID();
jmethodID getGregorianCalendarSetterID();
jclass getStringClassID();
jclass getStringArrayClassID();
jmethodID getStringByteArrayConstructorID();

/* JDBC Embedded Connection */

jfieldID getServerResponsesID();
jfieldID getLastErrorID();
jfieldID getLastResultSetPointerID();
jfieldID getServerHeaderResponseID();
jfieldID getLastServerResponseParametersID();
jfieldID getLastServerResponseID();
jclass getAutoCommitResponseClassID();
jmethodID getAutoCommitResponseConstructorID();
jclass getUpdateResponseClassID();
jmethodID getUpdateResponseConstructorID();

/* MonetDB Table */

jclass getMonetDBTableColumnClassID();
jmethodID getMonetDBTableColumnConstructorID();
jclass getMappingEnumID();
jmethodID getGetEnumValueID();
jfieldID getGetConnectionID();
jfieldID getGetConnectionLongID();
jfieldID getGetSchemaID();
jfieldID getGetTableID();
jfieldID getStructPointerID();

jmethodID getBigDecimalToStringID();
jmethodID getSetBigDecimalScaleID();
jmethodID getDateToLongID();
jmethodID getTimeToLongID();
jmethodID getTimestampToLongID();

#endif //SRC_JAVAIDS_H
