/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "checknulls.h"
#include "javaids.h"
#include "gdk_utils.h"
#include "sql.h"

#include <jni.h>
#include <string.h>
#include <stdlib.h>

#define CHECK_NULLS_LEVEL_ONE(NAME, JAVA_CAST, NULL_CONST) \
    void check##NAME##Nulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b) { \
        const JAVA_CAST* array = (const JAVA_CAST*) Tloc(b, 0); \
        jboolean* aux = (jboolean*) GDKmalloc(sizeof(jboolean) * size); \
        if(aux == NULL) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
        } else { \
            for(int i = 0 ; i < size ; i++) { \
                aux[i] = (array[i] == NULL_CONST##_nil) ? JNI_TRUE : JNI_FALSE; \
            } \
            (*env)->SetBooleanArrayRegion(env, input, 0, size, aux); \
            GDKfree(aux); \
        } \
    }

CHECK_NULLS_LEVEL_ONE(Boolean, jboolean, bit)
CHECK_NULLS_LEVEL_ONE(Tinyint, jbyte, bte)
CHECK_NULLS_LEVEL_ONE(Smallint, jshort, sht)
CHECK_NULLS_LEVEL_ONE(Int, jint, int)
CHECK_NULLS_LEVEL_ONE(Bigint, jlong, lng)
CHECK_NULLS_LEVEL_ONE(Real, jfloat, flt)
CHECK_NULLS_LEVEL_ONE(Double, jdouble, dbl)

CHECK_NULLS_LEVEL_ONE(Date, jint, int)
CHECK_NULLS_LEVEL_ONE(Time, jint, int)

void checkTimestampNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b) {
    const timestamp* array = (const timestamp*) Tloc(b, 0);
    jboolean* aux = (jboolean*) GDKmalloc(sizeof(jboolean) * size);
    if(aux == NULL) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!");
    } else {
        for(int i = 0 ; i < size ; i++) {
            aux[i] = ts_isnil(array[i]) ? JNI_TRUE : JNI_FALSE;
        }
        (*env)->SetBooleanArrayRegion(env, input, 0, size, aux);
        GDKfree(aux);
    }
}

#define GET_BAT_STRING_NULL      str nvalue = BUNtail(li, p);
#define CHECK_NULL_STRING_NULL   strcmp((str) str_nil, nvalue) == 0

#define GET_BAT_BLOB_NULL        blob* nvalue = (blob*) BUNtail(li, p);
#define CHECK_NULL_BLOB_NULL     nvalue->nitems == ~(size_t) 0

#define CHECK_NULLS_LEVEL_TWO(NAME, GET_ATOM, CHECK_ATOM) \
    void check##NAME##Nulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b) { \
        BATiter li = bat_iterator(b); \
        jboolean* aux = (jboolean*) GDKmalloc(sizeof(jboolean) * size); \
        if(aux == NULL) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
        } else { \
            int i = 0; \
            for (BUN p = 0, q = (BUN) size; p < q; p++) { \
                GET_ATOM \
                aux[i++] = (CHECK_ATOM) ? JNI_TRUE : JNI_FALSE; \
            } \
            (*env)->SetBooleanArrayRegion(env, input, 0, size, aux); \
            GDKfree(aux); \
        } \
    }

CHECK_NULLS_LEVEL_TWO(String, GET_BAT_STRING_NULL, CHECK_NULL_STRING_NULL)
CHECK_NULLS_LEVEL_TWO(Blob, GET_BAT_BLOB_NULL, CHECK_NULL_BLOB_NULL)

