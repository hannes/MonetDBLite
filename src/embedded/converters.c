/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "converters.h"
#include "javaids.h"
#include "gdk_utils.h"
#include "sql.h"

#include <jni.h>
#include <string.h>
#include <stdlib.h>

#define DO_NOTHING                        ;
#define BIG_INTEGERS_ARRAY_SIZE           64
#define min(a, b)                         (((a) < (b)) ? (a) : (b))

static str str_nil_cast = (str) str_nil;

static blob* my_blob_null(void) {
    static blob mynullval;
    mynullval.nitems = ~(size_t) 0;
    return (&mynullval);
}

static void decimal_to_str_java(char* value, lng v, jint scale) {
    char buf[BIG_INTEGERS_ARRAY_SIZE];
    jint cur = 63, neg = (v<0), i, done = 0;

    if (v<0) v = -v;

    buf[cur--] = 0;
    if (scale){
        for (i=0; i<scale; i++) {
            buf[cur--] = (char) (v%10 + '0');
            v /= 10;
        }
        buf[cur--] = '.';
    }
    while (v) {
        buf[cur--] = (char ) (v%10 + '0');
        v /= 10;
        done = 1;
    }
    if (!done)
        buf[cur--] = '0';
    if (neg)
        buf[cur--] = '-';
    assert(cur >= -1);
    strcpy(value, buf+cur+1);
}

static lng decimal_from_str_java(const char *dec) {
    lng res = 0;
    const lng max0 = GDK_lng_max / 10, max1 = GDK_lng_max % 10;
    jint neg = 0;

    while(isspace(*dec))
        dec++;
    if (*dec == '-') {
        neg = 1;
        dec++;
    } else if (*dec == '+') {
        dec++;
    }
    for (; *dec && ((*dec >= '0' && *dec <= '9') || *dec == '.'); dec++) {
        if (*dec != '.') {
            if (res > max0 || (res == max0 && *dec - '0' > max1))
                break;
            res *= 10;
            res += *dec - '0';
        }
    }
    while(isspace(*dec))
        dec++;
    if (neg)
        return -res;
    else
        return res;
}

/* -- Get just a single value -- */

/* For primitive types the mapping is direct <3 */

#define FETCHING_LEVEL_ONE(NAME, JAVACAST) \
    JAVACAST get##NAME##Single(jint position, BAT* b) { \
        const JAVACAST* array = (const JAVACAST*) Tloc(b, 0); \
        return array[position]; \
    }

FETCHING_LEVEL_ONE(Tinyint, jbyte)
FETCHING_LEVEL_ONE(Smallint, jshort)
FETCHING_LEVEL_ONE(Int, jint)
FETCHING_LEVEL_ONE(Bigint, jlong)
FETCHING_LEVEL_ONE(Real, jfloat)
FETCHING_LEVEL_ONE(Double, jdouble)

/* For dates we have to create Java objects :( */

//number of days since jan first (year 0) to number of milliseconds since 1 jan 1970
#define GET_NEXT_JDATE           value = ((jlong) nvalue - 719528L) * 86400000L;

#define CHECK_NULL_BDATE         nvalue != date_nil
#define CREATE_JDATE             (*env)->NewObject(env, getDateClassID(),  getDateConstructorID(), value)

//convert number of milliseconds since start of the day to to number of milliseconds since 1 jan 1970
#define GET_NEXT_JTIME           value = (jlong) nvalue - 3600000L;

#define CHECK_NULL_BTIME         nvalue != daytime_nil
#define CREATE_JTIME             (*env)->NewObject(env, getTimeClassID(),  getTimeConstructorID(), value)

#define GET_NEXT_JTIMESTAMP      value = ((jlong) nvalue.payload.p_days - 719528L) * 86400000L + (jlong) nvalue.payload.p_msecs;

#define CHECK_NULL_BTIMESTAMP    !ts_isnil(nvalue)
#define CREATE_JTIMESTAMP        (*env)->NewObject(env, getTimestampClassID(),  getTimestampConstructorID(), value)

#define CREATE_JGREGORIAN        (*env)->NewObject(env, getGregorianCalendarClassID(), getGregorianCalendarConstructorID())
#define GREGORIAN_EXTRA          (*env)->CallVoidMethod(env, result, getGregorianCalendarSetterID(), value);

#define FETCHING_LEVEL_TWO(NAME, BAT_CAST, GET_ATOM, NOT_NULL_CMP, CONVERT_ATOM, EXTRA_STEP) \
    jobject get##NAME##Single(JNIEnv* env, jint position, BAT* b) { \
        const BAT_CAST *array = (BAT_CAST *) Tloc(b, 0); \
        BAT_CAST nvalue = array[position]; \
        jobject result; \
        jlong value; \
        if(NOT_NULL_CMP) { \
            GET_ATOM \
            result = CONVERT_ATOM; \
            EXTRA_STEP \
        } else { \
            result = NULL; \
        } \
        return result; \
    }

FETCHING_LEVEL_TWO(Date, jint, GET_NEXT_JDATE, CHECK_NULL_BDATE, CREATE_JDATE, DO_NOTHING)
FETCHING_LEVEL_TWO(Time, jint, GET_NEXT_JTIME, CHECK_NULL_BTIME, CREATE_JTIME, DO_NOTHING)
FETCHING_LEVEL_TWO(Timestamp, timestamp, GET_NEXT_JTIMESTAMP, CHECK_NULL_BTIMESTAMP, CREATE_JTIMESTAMP, DO_NOTHING)

FETCHING_LEVEL_TWO(GregorianCalendarDate, jint, GET_NEXT_JDATE, CHECK_NULL_BDATE, CREATE_JGREGORIAN, GREGORIAN_EXTRA)
FETCHING_LEVEL_TWO(GregorianCalendarTime, jint, GET_NEXT_JTIME, CHECK_NULL_BTIME, CREATE_JGREGORIAN, GREGORIAN_EXTRA)
FETCHING_LEVEL_TWO(GregorianCalendarTimestamp, timestamp, GET_NEXT_JTIMESTAMP, CHECK_NULL_BTIMESTAMP, CREATE_JGREGORIAN, GREGORIAN_EXTRA)

/* Decimals are harder! */

#define FETCHING_LEVEL_THREE(BAT_CAST, CONVERSION_CAST) \
    jobject getDecimal##BAT_CAST##Single(JNIEnv* env, jint position, BAT* b, jint scale) { \
        char value[BIG_INTEGERS_ARRAY_SIZE]; \
        const BAT_CAST *array = (const BAT_CAST *) Tloc(b, 0); \
        BAT_CAST nvalue = array[position]; \
        jobject result; \
        jstring aux; \
        if(nvalue != BAT_CAST##_nil) { \
            decimal_to_str_java(value, nvalue, scale); \
            aux = (*env)->NewStringUTF(env, value); \
            result = (*env)->NewObject(env, getBigDecimalClassID(), getBigDecimalConstructorID(), aux); \
            (*env)->DeleteLocalRef(env, aux); \
        } else { \
            result = NULL; \
        } \
        return result; \
    }

FETCHING_LEVEL_THREE(bte, lng)
FETCHING_LEVEL_THREE(sht, lng)
FETCHING_LEVEL_THREE(int, lng)
FETCHING_LEVEL_THREE(lng, lng)

/* Strings and BLOBs have to be retrieved from the BAT's heap */

#define GET_BAT_STRING      nvalue = BUNtail(li, p);
#define CHECK_NULL_STRING   strcmp(str_nil_cast, nvalue) != 0
#define BAT_TO_STRING       value = (*env)->NewStringUTF(env, nvalue);

#define GET_BAT_BLOB        nvalue = (blob*) BUNtail(li, p);
#define BAT_TO_JBLOB        value = (*env)->NewByteArray(env, nvalue->nitems); \
                            (*env)->SetByteArrayRegion(env, value, 0, nvalue->nitems, (jbyte*) nvalue->data);
#define CHECK_NULL_BLOB     nvalue->nitems != ~(size_t) 0

#define FETCHING_LEVEL_FOUR(NAME, RETURN_TYPE, GET_ATOM, CHECK_NOT_NULL, CONVERT_ATOM, ONE_CAST, TWO_CAST) \
    RETURN_TYPE get##NAME##Single(JNIEnv* env, jint p, BAT* b) { \
        BATiter li = bat_iterator(b); \
        ONE_CAST nvalue; \
        TWO_CAST value; \
        GET_ATOM \
        if (CHECK_NOT_NULL) { \
            CONVERT_ATOM \
            return value; \
        } else { \
            return NULL; \
        } \
    }

FETCHING_LEVEL_FOUR(String, jstring, GET_BAT_STRING, CHECK_NULL_STRING, BAT_TO_STRING, str, jstring)
FETCHING_LEVEL_FOUR(Blob, jbyteArray, GET_BAT_BLOB, CHECK_NULL_BLOB, BAT_TO_JBLOB, blob*, jbyteArray)

/* -- Converting BATs to Java Classes and primitives -- */

#define BATCH_LEVEL_ONE(NAME, JAVA_CAST, ARRAY_FUNCTION_NAME, INTERNAL_SIZE) \
    void get##NAME##Column(JNIEnv* env, JAVA_CAST##Array input, jint first, jint size, BAT* b) { \
        jboolean isCopy; \
        const JAVA_CAST* array = (const JAVA_CAST*) Tloc(b, 0); \
        JAVA_CAST* inputConverted = (JAVA_CAST*) (*env)->GetPrimitiveArrayCritical(env, input, &isCopy); \
        if(inputConverted == NULL) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
        } else { \
            if(isCopy == JNI_FALSE) { \
                memcpy(inputConverted, array + first, size * INTERNAL_SIZE); \
            } else { \
                (*env)->Set##ARRAY_FUNCTION_NAME##ArrayRegion(env, input, first, size, array); \
            } \
            (*env)->ReleasePrimitiveArrayCritical(env, input, inputConverted, 0); \
        } \
    }

BATCH_LEVEL_ONE(Boolean, jboolean, Boolean, sizeof(bit))
BATCH_LEVEL_ONE(Tinyint, jbyte, Byte, sizeof(bte))
BATCH_LEVEL_ONE(Smallint, jshort, Short, sizeof(sht))
BATCH_LEVEL_ONE(Int, jint, Int, sizeof(jint))
BATCH_LEVEL_ONE(Bigint, jlong, Long, sizeof(lng))
BATCH_LEVEL_ONE(Real, jfloat, Float, sizeof(flt))
BATCH_LEVEL_ONE(Double, jdouble, Double, sizeof(dbl))

//If the user wants objects for everything, we can't deny him :)

#define CREATE_NEW_BOOLEAN     (*env)->NewObject(env, getBooleanClassID(),  getBooleanConstructorID(), nvalue)
#define CREATE_NEW_BYTE        (*env)->NewObject(env, getByteClassID(),  getByteConstructorID(), nvalue)
#define CREATE_NEW_SHORT       (*env)->NewObject(env, getShortClassID(),  getShortConstructorID(), nvalue)
#define CREATE_NEW_INTEGER     (*env)->NewObject(env, getIntegerClassID(),  getIntegerConstructorID(), nvalue)
#define CREATE_NEW_LONG        (*env)->NewObject(env, getLongClassID(),  getLongConstructorID(), nvalue)
#define CREATE_NEW_FLOAT       (*env)->NewObject(env, getFloatClassID(),  getFloatConstructorID(), nvalue)
#define CREATE_NEW_DOUBLE      (*env)->NewObject(env, getDoubleClassID(),  getDoubleConstructorID(), nvalue)

#define BATCH_LEVEL_ONE_OBJECT(NAME, BAT_CAST, NULL_ATOM, CONVERT_ATOM) \
    void get##NAME##ColumnAsObject(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b) { \
        BAT_CAST *array = (BAT_CAST *) Tloc(b, 0); \
        jobject next; \
        BAT_CAST nvalue; \
        array += first; \
        if (b->tnonil && !b->tnil) { \
            for (jint i = 0; i < size; i++) { \
                nvalue = array[i]; \
                next = CONVERT_ATOM; \
                (*env)->SetObjectArrayElement(env, input, i, next); \
                (*env)->DeleteLocalRef(env, next); \
            } \
        } else { \
            for (jint i = 0; i < size; i++) { \
                nvalue = array[i]; \
                if(nvalue != NULL_ATOM##_nil) { \
                    next = CONVERT_ATOM; \
                    (*env)->SetObjectArrayElement(env, input, i, next); \
                    (*env)->DeleteLocalRef(env, next); \
                } else { \
                    (*env)->SetObjectArrayElement(env, input, i, NULL); \
                } \
            } \
        } \
    }

BATCH_LEVEL_ONE_OBJECT(Boolean, jboolean, bit, CREATE_NEW_BOOLEAN)
BATCH_LEVEL_ONE_OBJECT(Tinyint, jbyte, bte, CREATE_NEW_BYTE)
BATCH_LEVEL_ONE_OBJECT(Smallint, jshort, sht, CREATE_NEW_SHORT)
BATCH_LEVEL_ONE_OBJECT(Int, jint, int, CREATE_NEW_INTEGER)
BATCH_LEVEL_ONE_OBJECT(Bigint, jlong, lng, CREATE_NEW_LONG)
BATCH_LEVEL_ONE_OBJECT(Real, jfloat, flt, CREATE_NEW_FLOAT)
BATCH_LEVEL_ONE_OBJECT(Double, jdouble, dbl, CREATE_NEW_DOUBLE)

//If we use 03 optimization, we don't need to switch for the nulls, because the compiler will create this code I think...
#define BATCH_LEVEL_TWO(NAME, BAT_CAST, GET_ATOM, NOT_NULL_CMP, CONVERT_ATOM) \
    void get##NAME##Column(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b) { \
        BAT_CAST *array = (BAT_CAST *) Tloc(b, 0); \
        BAT_CAST nvalue; \
        jobject next; \
        jlong value; \
        array += first; \
        if (b->tnonil && !b->tnil) { \
            for (jint i = 0; i < size; i++) { \
                nvalue = array[i]; \
                GET_ATOM \
                next = CONVERT_ATOM; \
                (*env)->SetObjectArrayElement(env, input, i, next); \
                (*env)->DeleteLocalRef(env, next); \
            } \
        } else { \
            for (jint i = 0; i < size; i++) { \
                nvalue = array[i]; \
                if(NOT_NULL_CMP) { \
                    GET_ATOM \
                    next = CONVERT_ATOM; \
                    (*env)->SetObjectArrayElement(env, input, i, next); \
                    (*env)->DeleteLocalRef(env, next); \
                } else { \
                    (*env)->SetObjectArrayElement(env, input, i, NULL); \
                } \
            } \
        } \
    }

BATCH_LEVEL_TWO(Date, jint, GET_NEXT_JDATE, CHECK_NULL_BDATE, CREATE_JDATE)
BATCH_LEVEL_TWO(Time, jint, GET_NEXT_JTIME, CHECK_NULL_BTIME, CREATE_JTIME)
BATCH_LEVEL_TWO(Timestamp, timestamp, GET_NEXT_JTIMESTAMP, CHECK_NULL_BTIMESTAMP, CREATE_JTIMESTAMP)

#define BATCH_LEVEL_THREE(BAT_CAST, CONVERSION_CAST) \
    void getDecimal##BAT_CAST##Column(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b, jint scale) { \
        char value[BIG_INTEGERS_ARRAY_SIZE]; \
        const BAT_CAST *array = (const BAT_CAST *) Tloc(b, 0); \
        jclass lbigDecimalClassID = getBigDecimalClassID(); \
        jmethodID lbigDecimalConstructorID = getBigDecimalConstructorID(); \
        jstring aux; \
        jobject next; \
        array += first; \
        if (b->tnonil && !b->tnil) { \
            for (jint i = 0; i < size; i++) { \
                decimal_to_str_java(value, (CONVERSION_CAST) array[i], scale); \
                aux = (*env)->NewStringUTF(env, value); \
                next = (*env)->NewObject(env, lbigDecimalClassID, lbigDecimalConstructorID, aux); \
                (*env)->SetObjectArrayElement(env, input, i, next); \
                (*env)->DeleteLocalRef(env, aux); \
                (*env)->DeleteLocalRef(env, next); \
            } \
        } else { \
            for (jint i = 0; i < size; i++) { \
                BAT_CAST nvalue = array[i]; \
                if(nvalue != BAT_CAST##_nil) { \
                    decimal_to_str_java(value, (CONVERSION_CAST) nvalue, scale); \
                    aux = (*env)->NewStringUTF(env, value); \
                    next = (*env)->NewObject(env, lbigDecimalClassID, lbigDecimalConstructorID, aux); \
                    (*env)->SetObjectArrayElement(env, input, i, next); \
                    (*env)->DeleteLocalRef(env, aux); \
                    (*env)->DeleteLocalRef(env, next); \
                } else { \
                    (*env)->SetObjectArrayElement(env, input, i, NULL); \
                } \
            } \
        } \
    }

BATCH_LEVEL_THREE(bte, lng)
BATCH_LEVEL_THREE(sht, lng)
BATCH_LEVEL_THREE(int, lng)
BATCH_LEVEL_THREE(lng, lng)

#define BATCH_LEVEL_FOUR(NAME, GET_ATOM, CHECK_NOT_NULL, CONVERT_ATOM, ONE_CAST, TWO_CAST) \
    void get##NAME##Column(JNIEnv* env, jobjectArray input, jint first, jint size, BAT* b) { \
        jint i = 0; \
        BATiter li = bat_iterator(b); \
        ONE_CAST nvalue; \
        TWO_CAST value; \
        if (b->tnonil && !b->tnil) { \
            for (BUN p = first, q = (BUN) size; p < q; p++) { \
                GET_ATOM \
                CONVERT_ATOM \
                (*env)->SetObjectArrayElement(env, input, i, value); \
                i++; \
                (*env)->DeleteLocalRef(env, value); \
            } \
        } else { \
            for (BUN p = (BUN) first, q = (BUN) size; p < q; p++) { \
                GET_ATOM \
                if (CHECK_NOT_NULL) { \
                    CONVERT_ATOM \
                    (*env)->SetObjectArrayElement(env, input, i, value); \
                    (*env)->DeleteLocalRef(env, value); \
                } else { \
                    (*env)->SetObjectArrayElement(env, input, i, NULL); \
                } \
               i++; \
            } \
        } \
    }

BATCH_LEVEL_FOUR(String, GET_BAT_STRING, CHECK_NULL_STRING, BAT_TO_STRING, str, jstring)
BATCH_LEVEL_FOUR(Blob, GET_BAT_BLOB, CHECK_NULL_BLOB, BAT_TO_JBLOB, blob*, jbyteArray)

/* --  Converting Java Classes and primitives to BATs -- */

/* Direct mapping for primitives :) */

#define CONVERSION_LEVEL_ONE(NAME, BAT_CAST, JAVA_CAST, COPY_METHOD) \
    void store##NAME##Column(JNIEnv *env, BAT** b, JAVA_CAST##Array data, size_t cnt, jint localtype) { \
        BAT *aux = COLnew(0, localtype, cnt, TRANSIENT); \
        BAT_CAST *p; \
        BAT_CAST value, prev = BAT_CAST##_nil; \
        if (!aux) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
            *b = NULL; \
            return; \
        } \
        aux->tnil = 0; \
        aux->tnonil = 1; \
        aux->tkey = 0; \
        aux->tsorted = 1; \
        aux->trevsorted = 1; \
        aux->tdense = 0; \
        p = (BAT_CAST *) Tloc(aux, 0); \
        (*env)->Get##COPY_METHOD##ArrayRegion(env, data, 0, cnt, (JAVA_CAST *) p); \
        for(size_t i = 0; i < cnt; i++, p++) { \
            value = p[i]; \
            if (value == BAT_CAST##_nil) { \
                aux->tnil = 1; \
                aux->tnonil = 0; \
            } \
            if (i > 0) { \
                if (value > prev && aux->trevsorted) { \
                    aux->trevsorted = 0; \
                } else if (value < prev && aux->tsorted) { \
                    aux->tsorted = 0; \
                } \
            } \
            prev = value; \
        } \
        BATsetcount(aux, cnt); \
        BATsettrivprop(aux); \
        BBPkeepref(aux->batCacheid); \
        *b = aux; \
    }

CONVERSION_LEVEL_ONE(Boolean, bit, jbyte, Byte)
CONVERSION_LEVEL_ONE(Tinyint, bte, jbyte, Byte)
CONVERSION_LEVEL_ONE(Smallint, sht, jshort, Short)
CONVERSION_LEVEL_ONE(Int, int, jint, Int)
CONVERSION_LEVEL_ONE(Bigint, lng, jlong, Long)
CONVERSION_LEVEL_ONE(Real, flt, jfloat, Float)
CONVERSION_LEVEL_ONE(Double, dbl, jdouble, Double)

/* These types have constant sizes, so the conversion is still easy :P */

#ifndef WIN32
#define DIVMOD_HELPER_FIR ldiv_t aux1;
#define DIVMOD_HELPER_SEC ldiv(nvalue, 86400000L);
#else
#define DIVMOD_HELPER_FIR lldiv_t aux1;
#define DIVMOD_HELPER_SEC lldiv(nvalue, 86400000L);
#endif

#define EASY_CMP                 *p - prev

#define JDATE_TO_BAT             nvalue = (*env)->CallLongMethod(env, value, getDateToLongID()); \
                                 *p = (date) (nvalue / 86400000L + 719529L);                     \
                                 (void) aux1;

#define JTIME_TO_BAT             nvalue = (*env)->CallLongMethod(env, value, getTimeToLongID()); \
                                 *p = (daytime) (nvalue + 3600000L);                             \
                                 (void) aux1;

#define JTIMESTAMP_TO_BAT        nvalue = (*env)->CallLongMethod(env, value, getTimestampToLongID()); \
                                 aux1 = DIVMOD_HELPER_SEC                                             \
                                 p->payload.p_days = (date) (aux1.quot + 719529L);                    \
                                 p->payload.p_msecs = (daytime) (aux1.rem);

#define TIMESTAMP_CMP            p->payload.p_days + p->payload.p_msecs - prev.payload.p_days - prev.payload.p_msecs

#define CONVERSION_LEVEL_TWO(NAME, BAT_CAST, NULL_CONST, CONVERT_TO_BAT, ORDER_CMP) \
    void store##NAME##Column(JNIEnv *env, BAT** b, jobjectArray data, size_t cnt, jint localtype) { \
        BAT *aux = COLnew(0, localtype, cnt, TRANSIENT); \
        jlong nvalue; \
        BAT_CAST *p; \
        BAT_CAST prev = NULL_CONST; \
        jobject value; \
        DIVMOD_HELPER_FIR \
        if (!aux) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
            *b = NULL; \
            return; \
        } \
        aux->tnil = 0; \
        aux->tnonil = 1; \
        aux->tkey = 0; \
        aux->tsorted = 1; \
        aux->trevsorted = 1; \
        aux->tdense = 0; \
        p = (BAT_CAST *) Tloc(aux, 0); \
        for(size_t i = 0; i < cnt; i++, p++) { \
            value = (*env)->GetObjectArrayElement(env, data, i); \
            if (value == NULL) { \
                aux->tnil = 1; \
                aux->tnonil = 0; \
                *p = NULL_CONST; \
            } else { \
                CONVERT_TO_BAT \
                (*env)->DeleteLocalRef(env, value); \
            } \
            if (i > 0) { \
                if ((ORDER_CMP > 0) && aux->trevsorted) { \
                    aux->trevsorted = 0; \
                } else if ((ORDER_CMP < 0) && aux->tsorted) { \
                    aux->tsorted = 0; \
                } \
            } \
            prev = *p; \
        } \
        BATsetcount(aux, cnt); \
        BATsettrivprop(aux); \
        BBPkeepref(aux->batCacheid); \
        *b = aux; \
    }

CONVERSION_LEVEL_TWO(Date, date, date_nil, JDATE_TO_BAT, EASY_CMP)
CONVERSION_LEVEL_TWO(Time, daytime, daytime_nil, JTIME_TO_BAT, EASY_CMP)
CONVERSION_LEVEL_TWO(Timestamp, timestamp, *timestamp_nil, JTIMESTAMP_TO_BAT, TIMESTAMP_CMP)

/* Decimals are harder :P */

#define CONVERSION_LEVEL_THREE(BAT_CAST) \
    void storeDecimal##BAT_CAST##Column(JNIEnv *env, BAT** b, jobjectArray data, size_t cnt, jint localtype, jint scale, jint roundingMode) { \
        BAT *aux = COLnew(0, localtype, cnt, TRANSIENT); \
        BAT_CAST *p; \
        BAT_CAST prev = BAT_CAST##_nil; \
        jmethodID lbigDecimalToStringID = getBigDecimalToStringID(); \
        jmethodID lsetBigDecimalScaleID = getSetBigDecimalScaleID(); \
        jobject value, bigDecimal; \
        jstring nvalue; \
        const char *representation; \
        if (!aux) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
            *b = NULL; \
            return; \
        } \
        aux->tnil = 0; \
        aux->tnonil = 1; \
        aux->tkey = 0; \
        aux->tsorted = 1; \
        aux->trevsorted = 1; \
        aux->tdense = 0; \
        p = (BAT_CAST *) Tloc(aux, 0); \
        for(size_t i = 0; i < cnt; i++, p++) { \
            value = (*env)->GetObjectArrayElement(env, data, i); \
            if (value == NULL) { \
                aux->tnil = 1; \
                aux->tnonil = 0; \
                *p = BAT_CAST##_nil; \
            } else { \
                bigDecimal = (*env)->CallObjectMethod(env, value, lsetBigDecimalScaleID, scale, roundingMode); \
                nvalue = (*env)->CallObjectMethod(env, bigDecimal, lbigDecimalToStringID); \
                representation = (*env)->GetStringUTFChars(env, nvalue, NULL); \
                if(representation == NULL) { \
                    (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
                    *p = BAT_CAST##_nil; \
                } else { \
                    *p = (BAT_CAST) decimal_from_str_java(representation); \
                    (*env)->ReleaseStringUTFChars(env, nvalue, representation); \
                    (*env)->DeleteLocalRef(env, nvalue); \
                    (*env)->DeleteLocalRef(env, bigDecimal); \
                    (*env)->DeleteLocalRef(env, value); \
                } \
            } \
            if (i > 0) { \
                if (*p - prev > 0 && aux->trevsorted) { \
                    aux->trevsorted = 0; \
                } else if (*p - prev < 0 && aux->tsorted) { \
                    aux->tsorted = 0; \
                } \
            } \
            prev = *p; \
        } \
        BATsetcount(aux, cnt); \
        BATsettrivprop(aux); \
        BBPkeepref(aux->batCacheid); \
        *b = aux; \
    }

CONVERSION_LEVEL_THREE(bte)
CONVERSION_LEVEL_THREE(sht)
CONVERSION_LEVEL_THREE(int)
CONVERSION_LEVEL_THREE(lng)

/* Put in the BAT's heap :S */

#define JSTRING_TO_BAT      nvalue = (*env)->GetStringUTFChars(env, value, 0);                                                     \
                            if(nvalue == NULL) {                                                                                   \
                                (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!");     \
                                p = NULL;                                                                                          \
                            } else {                                                                                               \
                                p = GDKstrdup(nvalue);                                                                             \
                                if(p == NULL) {                                                                                    \
                                    (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
                                }                                                                                                  \
                                (*env)->ReleaseStringUTFChars(env, value, nvalue);                                                 \
                            }

#define STRING_START        const char* nvalue;

#define PUT_STR_IN_HEAP     if (BUNappend(aux, p, FALSE) != GDK_SUCCEED) { \
                                BBPreclaim(aux);                           \
                                p = str_nil_cast;                          \
                            }

#define STR_CMP             strcmp(p, prev)

#define JBLOB_TO_BAT        nvalue = (jbyteArray) value;                                                                       \
                            len = (*env)->GetArrayLength(env, nvalue);                                                         \
                            p = GDKmalloc(blobsize(len));                                                                      \
                            if(p == NULL) {                                                                                    \
                                (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
                            } else {                                                                                           \
                                p->nitems = len;                                                                               \
                                (*env)->GetByteArrayRegion(env, nvalue, 0, len, (jbyte*) p->data);                             \
                            }

#define BLOB_START          var_t bun_offset = 0; \
                            jsize len;            \
                            jbyteArray nvalue;

#define PUT_BLOB_IN_HEAP    BLOBput(aux->tvheap, &bun_offset, p);          \
                            if (BUNappend(aux, p, FALSE) != GDK_SUCCEED) { \
                                BBPreclaim(aux);                           \
                                p = my_blob_null();                        \
                            }

#define BLOB_CMP            memcmp(p->data, prev->data, min(p->nitems, prev->nitems))

#define CONVERSION_LEVEL_FOUR(NAME, BAT_CAST, NULL_CONST, START_STEP, CONVERT_TO_BAT, ORDER_CMP, PUT_IN_HEAP) \
    void store##NAME##Column(JNIEnv *env, BAT** b, jobjectArray data, size_t cnt, jint localtype) { \
        BAT *aux = COLnew(0, localtype, cnt, TRANSIENT); \
        jint previousToFree = 0; \
        BAT_CAST p; \
        BAT_CAST prev = NULL_CONST; \
        jobject value; \
        START_STEP \
        if (!aux) { \
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The system went out of memory!"); \
            *b = NULL; \
            return; \
        } \
        aux->tnil = 0; \
        aux->tnonil = 1; \
        aux->tkey = 0; \
        aux->tsorted = 1; \
        aux->trevsorted = 1; \
        for(size_t i = 0; i < cnt; i++) { \
            value = (*env)->GetObjectArrayElement(env, data, i); \
            if (value == NULL) { \
                aux->tnil = 1; \
                aux->tnonil = 0; \
                p = NULL_CONST; \
            } else { \
                CONVERT_TO_BAT \
                if(p == NULL) { \
                   p = NULL_CONST; \
                } \
                (*env)->DeleteLocalRef(env, value); \
            } \
            PUT_IN_HEAP \
            if (i > 0) { \
                if ((ORDER_CMP > 0) && aux->trevsorted) { \
                    aux->trevsorted = 0; \
                } else if ((ORDER_CMP < 0) && aux->tsorted) { \
                    aux->tsorted = 0; \
                } \
                if(previousToFree) { \
                    GDKfree(prev); \
                } \
            } \
            prev = p; \
            previousToFree = (value == NULL) ? 0 : 1; \
        } \
        if(previousToFree) { \
            GDKfree(p); \
        } \
        BATsetcount(aux, cnt); \
        BATsettrivprop(aux); \
        BBPkeepref(aux->batCacheid); \
        *b = aux; \
    }

CONVERSION_LEVEL_FOUR(String, str, str_nil_cast, STRING_START, JSTRING_TO_BAT, STR_CMP, PUT_STR_IN_HEAP)
CONVERSION_LEVEL_FOUR(Blob, blob*, my_blob_null(), BLOB_START, JBLOB_TO_BAT, BLOB_CMP, PUT_BLOB_IN_HEAP)
