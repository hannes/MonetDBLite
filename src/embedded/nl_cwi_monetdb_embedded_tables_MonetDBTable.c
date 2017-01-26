/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_tables_MonetDBTable.h"

#include "monetdb_config.h"
#include "monet_options.h"
#include "res_table.h"
#include "embedded.h"
#include "converters.h"
#include "javaids.h"

static char* loadTable(JNIEnv *env, jobject monetDBTable, sql_table** table, int *ncols, jlong* connectionPointer) {
    char* err = NULL;

    jobject connection = (*env)->GetObjectField(env, monetDBTable, getGetConnectionID());
    *connectionPointer = (*env)->GetLongField(env, connection, getGetConnectionLongID());
    jstring schemaName = (*env)->GetObjectField(env, monetDBTable, getGetSchemaID());
    jstring tableName = (*env)->GetObjectField(env, monetDBTable, getGetTableID());

    const char *schema = (*env)->GetStringUTFChars(env, schemaName, NULL);
    const char *name = (*env)->GetStringUTFChars(env, tableName, NULL);
    err = monetdb_find_table((void*) (*connectionPointer), table, schema, name);
    if (!err) {
        *ncols = (*table)->columns.set->cnt;
    }
    (*env)->ReleaseStringUTFChars(env, schemaName, schema);
    (*env)->ReleaseStringUTFChars(env, tableName, name);
    return err;
}

#define LOADTABLEDATA(DATA_TO_RETURN) \
    sql_table* tableData; \
    int ncols; \
    jlong connectionPointer; \
    char* err = loadTable(env, monetDBTable, &tableData, &ncols, &connectionPointer); \
    if (err) { \
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err); \
        GDKfree(err); \
        return DATA_TO_RETURN; \
    }

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getNumberOfColumns
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(0)
    return ncols;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnNames
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jobjectArray result = (*env)->NewObjectArray(env, ncols, getStringClassID(), NULL);
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        (*env)->SetObjectArrayElement(env, result, col->colnr, (*env)->NewStringUTF(env, col->base.name));
    }
    return result;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnTypes
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jobjectArray result = (*env)->NewObjectArray(env, ncols, getStringClassID(), NULL);
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        (*env)->SetObjectArrayElement(env, result, col->colnr, (*env)->NewStringUTF(env, col->type.type->sqlname));
    }
    return result;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getMappings
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jobjectArray result = (*env)->NewObjectArray(env, ncols, getMappingEnumID(), NULL);
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jobject next = (*env)->CallStaticObjectMethod(env, getMappingEnumID(), getGetEnumValueID(), (*env)->NewStringUTF(env, col->type.type->sqlname));
        (*env)->SetObjectArrayElement(env, result, col->colnr, next);
    }
    return result;
}

JNIEXPORT jintArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnDigits
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jint* fdigits = GDKmalloc(ncols * sizeof(jint));
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fdigits[col->colnr] = col->type.digits;
    }
    jintArray result = (*env)->NewIntArray(env, ncols);
    (*env)->SetIntArrayRegion(env, result, 0, ncols, fdigits);
    GDKfree(fdigits);
    return result;
};

JNIEXPORT jintArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnScales
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jint* fscales = GDKmalloc(ncols * sizeof(jint));
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fscales[col->colnr] = col->type.scale;
    }
    jintArray result = (*env)->NewIntArray(env, ncols);
    (*env)->SetIntArrayRegion(env, result, 0, ncols, fscales);
    GDKfree(fscales);
    return result;
};

JNIEXPORT jbooleanArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnNullableIndexes
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jboolean* fnulls = GDKmalloc(ncols * sizeof(jboolean));
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fnulls[col->colnr] = (jboolean) col->null;
    }
    jbooleanArray result = (*env)->NewBooleanArray(env, ncols);
    (*env)->SetBooleanArrayRegion(env, result, 0, ncols, fnulls);
    GDKfree(fnulls);
    return result;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnDefaultValues
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jobjectArray result = (*env)->NewObjectArray(env, ncols, getStringClassID(), NULL);
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        (*env)->SetObjectArrayElement(env, result, col->colnr, (*env)->NewStringUTF(env, col->def));
    }
    return result;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnMetadataByIndex
        (JNIEnv *env, jobject monetDBTable, jint index) {
    LOADTABLEDATA(NULL)

    node *n;
    jobject res = NULL;
    if(index > 0 && index < ncols) {
        for (n = tableData->columns.set->h; n; n = n->next) {
            sql_column *col = n->data;
            if(col->colnr == index) {
                res = (*env)->NewObject(env, getMonetDBTableColumnClassID(), getMonetDBTableColumnConstructorID(), (*env)->NewStringUTF(env, col->type.type->sqlname), (*env)->NewStringUTF(env, col->base.name), col->type.digits, col->type.scale, (*env)->NewStringUTF(env, col->def), (jboolean) col->null);
                break;
            }
        }
    }
    return res;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnMetadataByName
        (JNIEnv *env, jobject monetDBTable, jstring colname) {
    LOADTABLEDATA(NULL)

    const char *col_name_tmp = (*env)->GetStringUTFChars(env, colname, NULL);
    node *n;
    jobject res = NULL;
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        if(!strcmp(col_name_tmp, col->base.name)) {
            res = (*env)->NewObject(env, getMonetDBTableColumnClassID(), getMonetDBTableColumnConstructorID(), (*env)->NewStringUTF(env, col->type.type->sqlname), (*env)->NewStringUTF(env, col->base.name), col->type.digits, col->type.scale, (*env)->NewStringUTF(env, col->def), (jboolean) col->null);
            break;
        }
    }
    (*env)->ReleaseStringUTFChars(env, colname, col_name_tmp);
    return res;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getAllColumnsMetadata
        (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA(NULL)

    node *n;
    jobjectArray result = (*env)->NewObjectArray(env, ncols, getMonetDBTableColumnClassID(), NULL);
    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jobject newColumn = (*env)->NewObject(env, getMonetDBTableColumnClassID(), getMonetDBTableColumnConstructorID(), (*env)->NewStringUTF(env, col->type.type->sqlname), (*env)->NewStringUTF(env, col->base.name), col->type.digits, col->type.scale, (*env)->NewStringUTF(env, col->def), (jboolean) col->null);
        (*env)->SetObjectArrayElement(env, result, col->colnr, newColumn);
    }
    return result;
}

#define CHECK_NEXT_ARRAY(NEXT_ARRAY) \
    NEXT_ARRAY = (*env)->GetObjectArrayElement(env, columnData, nextColumnIndex); \
    nextSize = (*env)->GetArrayLength(env, NEXT_ARRAY); \
    if(nextSize != numberOfRows) { \
        err = "The row sizes are not consistent!"; \
        break; \
    }

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_appendColumnsInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray columnData, jintArray javaIndexes, jint roundingMode) {
    LOADTABLEDATA(0)

    //preparing data to insert
    node *n;
    jint *jindexes = (*env)->GetIntArrayElements(env, javaIndexes, NULL);
    append_data* newdata = GDKmalloc(ncols * sizeof(append_data));
    jsize numberOfRows = (*env)->GetArrayLength(env, (*env)->GetObjectArrayElement(env, columnData, 0));
    int toFree = 0;

    for (n = tableData->columns.set->h; n && !err; n = n->next) {
        sql_column *col = n->data;
        int nextMonetDBIndex = col->type.type->localtype;
        int nextColumnIndex = col->colnr;
        jint nextJavaIndex = jindexes[nextColumnIndex];
        newdata[nextColumnIndex].colname = col->base.name;

        BAT* nextBAT = NULL;
        jobjectArray nextObjectArray;
        jbooleanArray nextBooleanArray;
        jbyteArray nextByteArray;
        jshortArray nextShortArray;
        jintArray nextIntArray;
        jlongArray nextLongArray;
        jfloatArray nextFloatArray;
        jdoubleArray nextDoubleArray;
        jsize nextSize;

        switch(nextJavaIndex) {
            case 0: //boolean
                CHECK_NEXT_ARRAY(nextBooleanArray)
                storeBooleanColumn(env, &nextBAT, nextBooleanArray, numberOfRows, nextMonetDBIndex);
                break;
            case 1: //char
            case 2: //varchar
            case 3: //clob
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeStringColumn(env, &nextBAT, nextObjectArray, NULL, numberOfRows, nextMonetDBIndex);
                break;
            case 4: //tinyint
            CHECK_NEXT_ARRAY(nextByteArray)
                storeTinyintColumn(env, &nextBAT, nextByteArray, numberOfRows, nextMonetDBIndex);
                break;
            case 5: //smallint
            CHECK_NEXT_ARRAY(nextShortArray)
                storeSmallintColumn(env, &nextBAT, nextShortArray, numberOfRows, nextMonetDBIndex);
                break;
            case 6: //int
            case 11: //month_interval
            CHECK_NEXT_ARRAY(nextIntArray)
                storeIntColumn(env, &nextBAT, nextIntArray, numberOfRows, nextMonetDBIndex);
                break;
            case 7: //bigint
            case 12: //second_interval
                CHECK_NEXT_ARRAY(nextLongArray)
                storeBigintColumn(env, &nextBAT, nextLongArray, numberOfRows, nextMonetDBIndex);
                break;
            /*#ifdef HAVE_HGE
            case ??: //hugeint
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeHugeintColumn(env, &nextBAT, nextObjectArray, getBigIntegerToStringID(), numberOfRows, nextMonetDBIndex);
                break;
            #endif*/
            case 8: //decimal
                CHECK_NEXT_ARRAY(nextObjectArray)
                if(col->type.digits <= 2) {
                    storeDecimalbteColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else if(col->type.digits > 2 && col->type.digits <= 4) {
                    storeDecimalshtColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else if(col->type.digits > 4 && col->type.digits <= 8) {
                    storeDecimalintColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                /*#ifdef HAVE_HGE
                } else if(col->type.digits > 8 && col->type.digits <= 18) {
                    storeDecimallngColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else {
                    storeDecimalhgeColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                }
                #else*/
                } else {
                    storeDecimallngColumn(env, &nextBAT, nextObjectArray, getBigDecimalToStringID(), getSetBigDecimalScaleID(), numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                }
                //#endif
                break;
            case 9: //real
                CHECK_NEXT_ARRAY(nextFloatArray)
                storeRealColumn(env, &nextBAT, nextFloatArray, numberOfRows, nextMonetDBIndex);
                break;
            case 10: //double
                CHECK_NEXT_ARRAY(nextDoubleArray)
                storeDoubleColumn(env, &nextBAT, nextDoubleArray, numberOfRows, nextMonetDBIndex);
                break;
            case 13: //time
            case 14: //timetz
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeTimeColumn(env, &nextBAT, nextObjectArray, getTimeToLongID(), numberOfRows, nextMonetDBIndex);
                break;
            case 15: //date
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeDateColumn(env, &nextBAT, nextObjectArray, getDateToLongID(), numberOfRows, nextMonetDBIndex);
                break;
            case 16: //timestamp
            case 17: //timestamptz
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeTimestampColumn(env, &nextBAT, nextObjectArray, getTimestampToLongID(), numberOfRows, nextMonetDBIndex);
                break;
            case 18: //blob
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeBlobColumn(env, &nextBAT, nextObjectArray, NULL, numberOfRows, nextMonetDBIndex);
                break;
            /*case ??: //url
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeURLColumn(env, &nextBAT, nextObjectArray, getUrlToStringID(), numberOfRows, nextMonetDBIndex);
            case ??: //inet
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeInetColumn(env, &nextBAT, nextObjectArray, getMonetINETToStringID(), numberOfRows, nextMonetDBIndex);
                break;
            case ??: //uuid
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeUUIDColumn(env, &nextBAT, nextObjectArray, getUUIDToStringID(), numberOfRows, nextMonetDBIndex);
                break;
            case ??: //geometry
            case ??: //geometrya
            case ??: //json
                CHECK_NEXT_ARRAY(nextObjectArray)
                storeBinaryColumn(env, &nextBAT, nextObjectArray, NULL, numberOfRows, nextMonetDBIndex);
                break;*/
            default:
                err = "Unknown Java mapping class!";
        }
        if(!err) {
            newdata[nextColumnIndex].batid = nextBAT->batCacheid;
        } else {
            break;
        }
    }

    if(!err) {
        err = monetdb_append((void*) connectionPointer, tableData->s->base.name, tableData->base.name, newdata, ncols);
        toFree = 1;
    }
    (*env)->ReleaseIntArrayElements(env, javaIndexes, jindexes, JNI_ABORT);
    GDKfree(newdata);

    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        if(toFree) {
            GDKfree(err);
        }
        return 0;
    } else {
        return numberOfRows;
    }
}
