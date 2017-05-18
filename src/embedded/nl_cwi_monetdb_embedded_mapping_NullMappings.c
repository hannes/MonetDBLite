/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_mapping_NullMappings.h"

#include "converters.h"

JNIEXPORT jbyte JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getBooleanNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jbyte) bit_nil;
}

JNIEXPORT jbyte JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getByteNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jbyte) bte_nil;
}

JNIEXPORT jshort JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getShortNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jshort) sht_nil;
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getIntNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jint) int_nil;
}

JNIEXPORT jlong JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getLongNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jlong) lng_nil;
}

JNIEXPORT jfloat JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getFloatNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jfloat) flt_nil;
}

JNIEXPORT jdouble JNICALL Java_nl_cwi_monetdb_embedded_mapping_NullMappings_getDoubleNullConstant
        (JNIEnv *env, jclass jClass) {
    (void) env;
    (void) jClass;
    return (jdouble) dbl_nil;
}
