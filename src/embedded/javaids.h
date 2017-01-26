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

jclass getJavaObjectClassID();
jclass getByteArrayClassID();
/*jclass getBigIntegerClassID();
jmethodID getBigIntegerConstructorID();*/
jclass getBigDecimalClassID();
jmethodID getBigDecimalConstructorID();
jclass getDateClassID();
jmethodID getDateConstructorID();
jclass getTimeClassID();
jmethodID getTimeConstructorID();
jclass getTimestampClassID();
jmethodID getTimestampConstructorID();
jclass getGregorianCalendarClassID();
jmethodID getGregorianCalendarConstructorID();
jmethodID getGregorianCalendarSetterID();
/*jclass getUrlClassID();
jmethodID getUrlConstructorID();
jclass getMonetINETClassID();
jmethodID getMonetINETConstructorID();
jclass getUuidClassID();
jmethodID getUuidConstructorID();
jclass getMonetBLOBClassID();
jmethodID getMonetBLOBConstructorID();
jclass getMonetCLOBClassID();
jmethodID getMonetCLOBConstructorID();*/
jclass getStringClassID();
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

//jmethodID getBigIntegerToStringID();
jmethodID getBigDecimalToStringID();
jmethodID getSetBigDecimalScaleID();
jmethodID getDateToLongID();
jmethodID getTimeToLongID();
jmethodID getTimestampToLongID();
/*jmethodID getUrlToStringID();
jmethodID getMonetINETToStringID();
jmethodID getUUIDToStringID();*/

#endif //SRC_JAVAIDS_H
