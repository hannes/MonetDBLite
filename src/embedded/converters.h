/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#ifndef SRC_CONVERTERS_H
#define SRC_CONVERTERS_H

#include "monetdb_config.h"
#include "mal_type.h"
#include <jni.h>

/* --  Get just a single value -- */

jbyte getTinyintSingle(JNIEnv* env, jint position, BAT* b);
jshort getSmallintSingle(JNIEnv* env, jint position, BAT* b);
jint getIntSingle(JNIEnv* env, jint position, BAT* b);
jlong getBigintSingle(JNIEnv* env, jint position, BAT* b);
jfloat getRealSingle(JNIEnv* env, jint position, BAT* b);
jdouble getDoubleSingle(JNIEnv* env, jint position, BAT* b);

jobject getDateSingle(JNIEnv* env, jint position, BAT* b);
jobject getTimeSingle(JNIEnv* env, jint position, BAT* b);
jobject getTimestampSingle(JNIEnv* env, jint position, BAT* b);

jobject getGregorianCalendarDateSingle(JNIEnv* env, jint position, BAT* b);
jobject getGregorianCalendarTimeSingle(JNIEnv* env, jint position, BAT* b);
jobject getGregorianCalendarTimestampSingle(JNIEnv* env, jint position, BAT* b);

jobject getDecimalbteSingle(JNIEnv* env, jint position, BAT* b, jint scale);
jobject getDecimalshtSingle(JNIEnv* env, jint position, BAT* b, jint scale);
jobject getDecimalintSingle(JNIEnv* env, jint position, BAT* b, jint scale);
jobject getDecimallngSingle(JNIEnv* env, jint position, BAT* b, jint scale);

jstring getStringSingle(JNIEnv* env, jint position, BAT* b);
jbyteArray getBlobSingle(JNIEnv* env, jint position, BAT* b);

/* --  Converting BATs to Java Classes and primitives arrays -- */

void getBooleanColumn(JNIEnv* env, jbooleanArray input, jint first, jint size, BAT* b);
void getTinyintColumn(JNIEnv* env, jbyteArray input, jint first, jint size, BAT* b);
void getSmallintColumn(JNIEnv* env, jshortArray input, jint first, jint size, BAT* b);
void getIntColumn(JNIEnv* env, jintArray input, jint first, jint size, BAT* b);
void getBigintColumn(JNIEnv* env, jlongArray input, jint first, jint size, BAT* b);
void getRealColumn(JNIEnv* env, jfloatArray input, jint first, jint size, BAT* b);
void getDoubleColumn(JNIEnv* env, jdoubleArray input, jint first, jint size, BAT* b);

void getBooleanColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getTinyintColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getSmallintColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getIntColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getBigintColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getRealColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getDoubleColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);

void getDateColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getTimeColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getTimestampColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);

void getDecimalbteColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b, jint scale);
void getDecimalshtColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b, jint scale);
void getDecimalintColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b, jint scale);
void getDecimallngColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b, jint scale);

void getStringColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);
void getBlobColumn(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b);

/* -- Converting Java Classes and primitives to BATs -- */

void storeBooleanColumn(JNIEnv* env, BAT** b, jbooleanArray input, size_t cnt, jint localtype);
void storeTinyintColumn(JNIEnv* env, BAT** b, jbyteArray input, size_t cnt, jint localtype);
void storeSmallintColumn(JNIEnv* env, BAT** b, jshortArray input, size_t cnt, jint localtype);
void storeIntColumn(JNIEnv* env, BAT** b, jintArray input, size_t cnt, jint localtype);
void storeBigintColumn(JNIEnv* env, BAT** b, jlongArray input, size_t cnt, jint localtype);
void storeRealColumn(JNIEnv* env, BAT** b, jfloatArray input, size_t cnt, jint localtype);
void storeDoubleColumn(JNIEnv* env, BAT** b, jdoubleArray input, size_t cnt, jint localtype);

void storeDateColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype);
void storeTimeColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype);
void storeTimestampColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype);

void storeDecimalbteColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype, jint scale, jint roundingMode);
void storeDecimalshtColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype, jint scale, jint roundingMode);
void storeDecimalintColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype, jint scale, jint roundingMode);
void storeDecimallngColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype, jint scale, jint roundingMode);

void storeStringColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype);
void storeBlobColumn(JNIEnv* env, BAT** b, jobjectArray input, size_t cnt, jint localtype);

#endif //SRC_CONVERTERS_H
