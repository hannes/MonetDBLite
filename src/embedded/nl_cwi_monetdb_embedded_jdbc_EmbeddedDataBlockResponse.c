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

#define ANNOYING_RETRIEVAL \
    JResultSet* thisResultSet = (JResultSet*) structPointer; \
    BAT* dearBat = thisResultSet->bats[column]; \
    (void) datablock;

#define ANNOYING_RETRIEVAL_LEVEL_ONE(TYPE_FUNCTION_CALL) \
    (void) env; \
    return get##TYPE_FUNCTION_CALL##Single(row, dearBat);

#define ANNOYING_RETRIEVAL_LEVEL_TWO(TYPE_FUNCTION_CALL) \
    return get##TYPE_FUNCTION_CALL##Single(env, row, dearBat);

JNIEXPORT jbyte JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getByteValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Tinyint)
}

JNIEXPORT jshort JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getShortValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Smallint)
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getIntValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Int)
}

JNIEXPORT jlong JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getLongValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Bigint)
}

JNIEXPORT jfloat JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getFloatValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Real)
}

JNIEXPORT jdouble JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDoubleValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_ONE(Double)
}

JNIEXPORT jstring JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getStringValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(String)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDateValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(Date)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimestampValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(Timestamp)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimeValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(Time)
}

JNIEXPORT jbyteArray JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getBlobValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(Blob)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDateAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(GregorianCalendarDate)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimestampAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(GregorianCalendarTimestamp)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getTimeAsCalendarValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    ANNOYING_RETRIEVAL
    ANNOYING_RETRIEVAL_LEVEL_TWO(GregorianCalendarTime)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_jdbc_EmbeddedDataBlockResponse_getDecimalValueInternal
    (JNIEnv* env, jobject datablock, jlong structPointer, jint column, jint row) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    BAT* dearBat = thisResultSet->bats[column];
    int digits = thisResultSet->digits[column];
    int scale = thisResultSet->scales[column];
    (void) datablock; //Decimals!

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
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    (void) env;
    (void) datablock;
    freeResultSet(thisResultSet);
}
