/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse.h"

#include "jresulset.h"
#include "converters.h"

#define ANNOYING_RETRIEVAL(TYPE_FUNCTION_CALL) \
    (void) datablock; \
    JResultSet* thisResultSet = (JResultSet*) structPointer; \
    BAT* dearBat = thisResultSet->bats[column]; \
    return get##TYPE_FUNCTION_CALL##Single(env, row, dearBat);

JNIEXPORT jbyte JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getByteValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Tinyint)
}

JNIEXPORT jshort JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getShortValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Smallint)
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getIntValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Int)
}

JNIEXPORT jlong JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getLongValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Bigint)
}

JNIEXPORT jfloat JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getFloatValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Real)
}

JNIEXPORT jdouble JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDoubleValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Double)
}

JNIEXPORT jstring JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getStringValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(String)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDateValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Date)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimestampValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Timestamp)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimeValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Time)
}

JNIEXPORT jbyteArray JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getBlobValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(Blob)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDateAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(GregorianCalendarDate)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimestampAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(GregorianCalendarTimestamp)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimeAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL(GregorianCalendarTime)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDecimalValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    (void) datablock; //Decimals!
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    BAT* dearBat = thisResultSet->bats[column];
    int digits = thisResultSet->digits[column];
    int scale = thisResultSet->scales[column];

    if(digits <= 2) {
        return getDecimalbteSingle(env, row, dearBat, scale);
    } else if(digits > 2 && digits <= 4) {
        return getDecimalshtSingle(env, row, dearBat, scale);
    } else if(digits > 4 && digits <= 8) {
        return getDecimalintSingle(env, row, dearBat, scale);
    } else {
        return getDecimallngSingle(env, row, dearBat, scale);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_freeResultSet
    (JNIEnv* env, jobject datablock, jlong structPointer) {
    (void) env;
    (void) datablock;

    JResultSet* thisResultSet = (JResultSet*) structPointer;
    freeResultSet(thisResultSet);
}
