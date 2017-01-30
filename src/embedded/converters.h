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

void initializeMinimums(jbyte m1, jshort m2, jint m3, jlong m4, jfloat m5, jdouble m6);

/* ----------------------------------------------------  Converting BATs to Java Classes and primitives ------------------------------------------------- */

void getBooleanColumn(JNIEnv *env, jbyteArray result, int first, int last, BAT* b);
void getTinyintColumn(JNIEnv *env, jbyteArray result, int first, int last, BAT* b);
void getSmallintColumn(JNIEnv *env, jshortArray result, int first, int last, BAT* b);
void getIntColumn(JNIEnv *env, jintArray result, int first, int last, BAT* b);
void getBigintColumn(JNIEnv *env, jlongArray result, int first, int last, BAT* b);
void getRealColumn(JNIEnv *env, jfloatArray result, int first, int last, BAT* b);
void getDoubleColumn(JNIEnv *env, jdoubleArray result, int first, int last, BAT* b);

void getDateColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);
void getTimeColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);
void getTimestampColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);

void getGregorianCalendarDateColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);
void getGregorianCalendarTimeColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);
void getGregorianCalendarTimestampColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, jmethodID setter, int first, int last, BAT* b);

void getDecimalbteColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b, int scale);
void getDecimalshtColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b, int scale);
void getDecimalintColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b, int scale);
void getDecimallngColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b, int scale);

void getStringColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b);
void getURLColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b);
void getBlobColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b);
void getBinaryColumn(JNIEnv *env, jobjectArray result, jclass jClass, jmethodID constructor, int first, int last, BAT* b);

/* ----------------------------------------------------  Converting Java Classes and primitives to BATs ------------------------------------------------- */

void storeBooleanColumn(JNIEnv *env, BAT** b, jbooleanArray data, size_t cnt, int localtype);
void storeTinyintColumn(JNIEnv *env, BAT** b, jbyteArray data, size_t cnt, int localtype);
void storeSmallintColumn(JNIEnv *env, BAT** b, jshortArray data, size_t cnt, int localtype);
void storeIntColumn(JNIEnv *env, BAT** b, jintArray data, size_t cnt, int localtype);
void storeBigintColumn(JNIEnv *env, BAT** b, jlongArray data, size_t cnt, int localtype);
void storeRealColumn(JNIEnv *env, BAT** b, jfloatArray data, size_t cnt, int localtype);
void storeDoubleColumn(JNIEnv *env, BAT** b, jdoubleArray data, size_t cnt, int localtype);

void storeDateColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);
void storeTimeColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);
void storeTimestampColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);

void storeDecimalbteColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, jmethodID setScale, size_t cnt, int localtype, int scale, int roundingMode);
void storeDecimalshtColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, jmethodID setScale, size_t cnt, int localtype, int scale, int roundingMode);
void storeDecimalintColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, jmethodID setScale, size_t cnt, int localtype, int scale, int roundingMode);
void storeDecimallngColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, jmethodID setScale, size_t cnt, int localtype, int scale, int roundingMode);

void storeStringColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);
void storeURLColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);
void storeBlobColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);
void storeBinaryColumn(JNIEnv *env, BAT** b, jobjectArray data, jmethodID conversor, size_t cnt, int localtype);

#endif //SRC_CONVERTERS_H
