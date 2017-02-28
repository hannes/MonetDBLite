/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_resultset_QueryResultSet.h"

#include "javaids.h"
#include "jresulset.h"
#include "converters.h"
#include "checknulls.h"
#include "monetdb_config.h"
#include "res_table.h"

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getColumnNamesInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jobjectArray result) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    res_table *output = thisResultSet->output;
    jint numberOfColumns = output->nr_cols;
    (void) queryResultSet;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        jstring colname = (*env)->NewStringUTF(env, col.name);
        (*env)->SetObjectArrayElement(env, result, i, colname);
        (*env)->DeleteLocalRef(env, colname);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getColumnTypesInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jobjectArray result) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    res_table *output = thisResultSet->output;
    jint numberOfColumns = output->nr_cols;
    (void) queryResultSet;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        jstring coltype = (*env)->NewStringUTF(env, col.type.type->sqlname);
        (*env)->SetObjectArrayElement(env, result, i, coltype);
        (*env)->DeleteLocalRef(env, coltype);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getMappingsInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jobjectArray result) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    res_table *output = thisResultSet->output;
    jint numberOfColumns = output->nr_cols;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        jstring toCall = (*env)->NewStringUTF(env, col.type.type->sqlname);
        jobject next = (*env)->CallStaticObjectMethod(env, getMappingEnumID(), getGetEnumValueID(), toCall);
        (*env)->SetObjectArrayElement(env, result, i, next);
        (*env)->DeleteLocalRef(env, toCall);
        (*env)->DeleteLocalRef(env, next);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getColumnDigitsInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jintArray result) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    res_table *output = thisResultSet->output;
    jint numberOfColumns = output->nr_cols;
    jint* fdigits = GDKmalloc(numberOfColumns * sizeof(jint));
    (void) queryResultSet;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        fdigits[i] = col.type.digits;
    }
    (*env)->SetIntArrayRegion(env, result, 0, numberOfColumns, fdigits);
    GDKfree(fdigits);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getColumnScalesInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jintArray result) {
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    res_table *output = thisResultSet->output;
    jint numberOfColumns = output->nr_cols;
    jint* fscales = GDKmalloc(numberOfColumns * sizeof(jint));
    (void) queryResultSet;

    for (int i = 0; i < numberOfColumns; i++) {
        res_col col = output->cols[i];
        fscales[i] = col.type.scale;
    }
    (*env)->SetIntArrayRegion(env, result, 0, numberOfColumns, fscales);
    GDKfree(fscales);
}

#define THIS_IS_ANNOYING(TYPE_FUNCTION_CALL) \
    (void) queryResultSet; \
    JResultSet* thisResultSet = (JResultSet*) structPointer; \
    BAT* dearBat = thisResultSet->bats[column]; \
    return get##TYPE_FUNCTION_CALL##Single(env, row, dearBat);

JNIEXPORT jbyte JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getByteByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Tinyint)
}

JNIEXPORT jshort JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getShortByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Smallint)
}

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getIntegerByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Int)
}

JNIEXPORT jlong JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getLongByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Bigint)
}

JNIEXPORT jfloat JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getFloatByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Real)
}

JNIEXPORT jdouble JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDoubleByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Double)
}

JNIEXPORT jstring JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getStringByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(String)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDateByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Date)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getTimestampByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Timestamp)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getTimeByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Time)
}

JNIEXPORT jbyteArray JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getBlobByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    THIS_IS_ANNOYING(Blob)
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDecimalByColumnAndRowInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint row) {
    (void) queryResultSet; //Decimals!
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

#define ANOTHER_ANNOYING_TASK(TYPE_FUNCTION_CALL) \
    (void) queryResultSet; \
    JResultSet* thisResultSet = (JResultSet*) structPointer; \
    BAT* dearBat = thisResultSet->bats[column]; \
    get##TYPE_FUNCTION_CALL##Column(env, result, offset, length, dearBat);

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getBooleanColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jbooleanArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Boolean)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getByteColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jbyteArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Tinyint)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getShortColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jshortArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Smallint)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getIntColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jintArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Int)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getLongColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jlongArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Bigint)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getFloatColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jfloatArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Real)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDoubleColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jdoubleArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Double)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDateColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Date)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getTimestampColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Timestamp)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getTimeColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Time)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getStringColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(String)
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getBlobColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    ANOTHER_ANNOYING_TASK(Blob)
}

static void getDecimalColumn(JNIEnv *env, JResultSet* thisResultSet, jint column, jobjectArray result, jint offset, jint length, BAT* dearBat) {
    int digits = thisResultSet->digits[column];
    int scale = thisResultSet->scales[column];
    if(digits <= 2) {
        getDecimalbteColumn(env, result, offset, length, dearBat, scale);
    } else if(digits > 2 && digits <= 4) {
        getDecimalshtColumn(env, result, offset, length, dearBat, scale);
    } else if(digits > 4 && digits <= 8) {
        getDecimalintColumn(env, result, offset, length, dearBat, scale);
    } else {
        getDecimallngColumn(env, result, offset, length, dearBat, scale);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getDecimalColumnByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jobjectArray result, jint offset, jint length) {
    (void) queryResultSet; //Decimals!
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    BAT* dearBat = thisResultSet->bats[column];
    getDecimalColumn(env, thisResultSet, column, result, offset, length, dearBat);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_getColumnNullMappingsByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint typeID, jbooleanArray result) {
    (void) queryResultSet;
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    BAT* dearBat = thisResultSet->bats[column];
    int numberOfRows = BATcount(dearBat), digits, scale;

    //I could use function pointers, but there is too much variety
    switch(typeID) {
        case 1:
            checkBooleanNulls(env, result, numberOfRows, dearBat);
            break;
        case 2:
            checkTinyintNulls(env, result, numberOfRows, dearBat);
            break;
        case 3:
            checkSmallintNulls(env, result, numberOfRows, dearBat);
            break;
        case 4:
            checkIntNulls(env, result, numberOfRows, dearBat);
            break;
        case 5:
            checkBigintNulls(env, result, numberOfRows, dearBat);
            break;
        case 6:
            checkRealNulls(env, result, numberOfRows, dearBat);
            break;
        case 7:
            checkDoubleNulls(env, result, numberOfRows, dearBat);
            break;
        case 8:
            checkStringNulls(env, result, numberOfRows, dearBat);
            break;
        case 9:
            checkDateNulls(env, result, numberOfRows, dearBat);
            break;
        case 10:
            checkTimestampNulls(env, result, numberOfRows, dearBat);
            break;
        case 11:
            checkTimeNulls(env, result, numberOfRows, dearBat);
            break;
        case 12:
            checkBlobNulls(env, result, numberOfRows, dearBat);
            break;
        case 13:
            digits = thisResultSet->digits[column];
            scale = thisResultSet->scales[column];
            if(digits <= 2) {
                checkTinyintNulls(env, result, numberOfRows, dearBat);
            } else if(digits > 2 && digits <= 4) {
                checkSmallintNulls(env, result, numberOfRows, dearBat);
            } else if(digits > 4 && digits <= 8) {
                checkIntNulls(env, result, numberOfRows, dearBat);
            } else {
                checkBigintNulls(env, result, numberOfRows, dearBat);
            }
            break;
        default:
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Unknown MonetDB type!");
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_mapColumnToObjectByIndexInternal
    (JNIEnv *env, jobject queryResultSet, jlong structPointer, jint column, jint typeID, jobjectArray result) {
    (void) queryResultSet;
    JResultSet* thisResultSet = (JResultSet*) structPointer;
    BAT* dearBat = thisResultSet->bats[column];
    int numberOfRows = BATcount(dearBat);

    //I could use function pointers, but there is too much variety
    switch(typeID) {
        case 1:
            getBooleanColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 2:
            getTinyintColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 3:
            getSmallintColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 4:
            getIntColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 5:
            getBigintColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 6:
            getRealColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 7:
            getDoubleColumnAsObject(env, result, 0, numberOfRows, dearBat);
            break;
        case 8:
            getStringColumn(env, result, 0, numberOfRows, dearBat);
            break;
        case 9:
            getDateColumn(env, result, 0, numberOfRows, dearBat);
            break;
        case 10:
            getTimestampColumn(env, result, 0, numberOfRows, dearBat);
            break;
        case 11:
            getTimeColumn(env, result, 0, numberOfRows, dearBat);
            break;
        case 12:
            getBlobColumn(env, result, 0, numberOfRows, dearBat);
            break;
        case 13:
            getDecimalColumn(env, thisResultSet, column, result, 0, numberOfRows, dearBat);
            break;
        default:
           (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "Unknown MonetDB type!");
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_resultset_QueryResultSet_freeResultSet
    (JNIEnv *env, jobject queryResultSet, jlong structPointer) {
    (void) env;
    (void) queryResultSet;

    JResultSet* thisResultSet = (JResultSet*) structPointer;
    freeResultSet(thisResultSet);
}
