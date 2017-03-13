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
    jstring schemaName = (*env)->GetObjectField(env, monetDBTable, getGetSchemaID());
    jstring tableName = (*env)->GetObjectField(env, monetDBTable, getGetTableID());
    const char *schema = (*env)->GetStringUTFChars(env, schemaName, NULL);
    const char *name = (*env)->GetStringUTFChars(env, tableName, NULL);

    *connectionPointer = (*env)->GetLongField(env, connection, getGetConnectionLongID());
    err = monetdb_find_table((void*) (*connectionPointer), table, schema, name);
    if (!err) {
        *ncols = (*table)->columns.set->cnt;
    }
    (*env)->ReleaseStringUTFChars(env, schemaName, schema);
    (*env)->ReleaseStringUTFChars(env, tableName, name);

    (*env)->DeleteLocalRef(env, connection);
    (*env)->DeleteLocalRef(env, schemaName);
    (*env)->DeleteLocalRef(env, tableName);

    return err;
}

#define LOADTABLEDATA \
    sql_table* tableData; \
    int ncols; \
    jlong connectionPointer; \
    node *n; \
    char* err = loadTable(env, monetDBTable, &tableData, &ncols, &connectionPointer);

#define AFTERLOAD \
    if (err) { \
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err); \
        GDKfree(err); \
    }

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getNumberOfColumns
    (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA
    AFTERLOAD

    (void) n;
    if((*env)->ExceptionCheck(env) == JNI_TRUE) {
        return 0;
    } else {
        return ncols;
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnNamesInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray result) {
    LOADTABLEDATA
    AFTERLOAD

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jstring colname = (*env)->NewStringUTF(env, col->base.name);
        (*env)->SetObjectArrayElement(env, result, col->colnr, colname);
        (*env)->DeleteLocalRef(env, colname);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnTypesInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray result) {
    LOADTABLEDATA
    AFTERLOAD

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jstring coltype = (*env)->NewStringUTF(env, col->type.type->sqlname);
        (*env)->SetObjectArrayElement(env, result, col->colnr, coltype);
        (*env)->DeleteLocalRef(env, coltype);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getMappingsInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray result) {
    LOADTABLEDATA
    AFTERLOAD

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jobject next = (*env)->CallStaticObjectMethod(env, getMappingEnumID(), getGetEnumValueID(), (*env)->NewStringUTF(env, col->type.type->sqlname));
        (*env)->SetObjectArrayElement(env, result, col->colnr, next);
        (*env)->DeleteLocalRef(env, next);
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnDigitsInternal
    (JNIEnv *env, jobject monetDBTable, jintArray result) {
    LOADTABLEDATA
    jint* fdigits;
    AFTERLOAD
    fdigits = GDKmalloc(ncols * sizeof(jint));

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fdigits[col->colnr] = col->type.digits;
    }
    (*env)->SetIntArrayRegion(env, result, 0, ncols, fdigits);
    GDKfree(fdigits);
};

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnScalesInternal
    (JNIEnv *env, jobject monetDBTable, jintArray result) {
    LOADTABLEDATA
    jint* fscales;
    AFTERLOAD
    fscales = GDKmalloc(ncols * sizeof(jint));

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fscales[col->colnr] = col->type.scale;
    }
    (*env)->SetIntArrayRegion(env, result, 0, ncols, fscales);
    GDKfree(fscales);
};

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnNullableIndexesInternal
    (JNIEnv *env, jobject monetDBTable, jbooleanArray result) {
    LOADTABLEDATA
    jboolean* fnulls;
    AFTERLOAD
    fnulls = GDKmalloc(ncols * sizeof(jboolean));

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        fnulls[col->colnr] = (jboolean) col->null;
    }
    (*env)->SetBooleanArrayRegion(env, result, 0, ncols, fnulls);
    GDKfree(fnulls);
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnDefaultValuesInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray result) {
    LOADTABLEDATA
    AFTERLOAD

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jstring defaultValue = (*env)->NewStringUTF(env, col->def); 
        (*env)->SetObjectArrayElement(env, result, col->colnr, defaultValue);
        (*env)->DeleteLocalRef(env, defaultValue);
    }
}

static jobject getColumnData(JNIEnv *env, sql_column *col) {
    jstring sqlname = (*env)->NewStringUTF(env, col->type.type->sqlname);
    jstring colname = (*env)->NewStringUTF(env, col->base.name);
    jstring defaultValue = (*env)->NewStringUTF(env, col->def);
    jobject res = (*env)->NewObject(env, getMonetDBTableColumnClassID(), getMonetDBTableColumnConstructorID(), sqlname, colname, col->type.digits, col->type.scale, defaultValue, (jboolean) col->null);
    (*env)->DeleteLocalRef(env, sqlname);
    (*env)->DeleteLocalRef(env, colname);
    (*env)->DeleteLocalRef(env, defaultValue);
    return res;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnMetadataByIndex
    (JNIEnv *env, jobject monetDBTable, jint index) {
    LOADTABLEDATA
    jobject res = NULL;
    AFTERLOAD

    index--;
    if(index > -1 && index < ncols) {
        for (n = tableData->columns.set->h; n; n = n->next) {
            sql_column *col = n->data;
            if(col->colnr == index) {
                res = getColumnData(env, col);
                break;
            }
        }
    }
    return res;
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getColumnMetadataByName
    (JNIEnv *env, jobject monetDBTable, jstring colname) {
    LOADTABLEDATA
    jobject res = NULL;
    const char *col_name_tmp;
    AFTERLOAD
    col_name_tmp = (*env)->GetStringUTFChars(env, colname, NULL);

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        if(!strcmp(col_name_tmp, col->base.name)) {
            res = getColumnData(env, col);
            break;
        }
    }
    (*env)->ReleaseStringUTFChars(env, colname, col_name_tmp);
    return res;
}

JNIEXPORT jobjectArray JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_getAllColumnsMetadata
    (JNIEnv *env, jobject monetDBTable) {
    LOADTABLEDATA
    jobjectArray result;
    AFTERLOAD
    result = (*env)->NewObjectArray(env, ncols, getMonetDBTableColumnClassID(), NULL);

    for (n = tableData->columns.set->h; n; n = n->next) {
        sql_column *col = n->data;
        jobject newColumn = getColumnData(env, col);
        (*env)->SetObjectArrayElement(env, result, col->colnr, newColumn);
        (*env)->DeleteLocalRef(env, newColumn);
    }
    return result;
}

static char* generateWrongArrayErrorMessage(int index, const char* arrayClass) {
    char errorBuffer[64];
    snprintf(errorBuffer, 64, "The array at column %d must be a %s array!", index, arrayClass);
    return GDKstrdup(errorBuffer);
}

#define CHECK_ARRAY_CLASS(METHOD, ARRAY_CLASS) \
    if((*env)->IsInstanceOf(env, nextArray, METHOD) == JNI_FALSE) { \
        err = generateWrongArrayErrorMessage(nextColumnIndex + 1, ARRAY_CLASS); \
        break; \
    }

JNIEXPORT jint JNICALL Java_nl_cwi_monetdb_embedded_tables_MonetDBTable_appendColumnsInternal
    (JNIEnv *env, jobject monetDBTable, jobjectArray columnData, jintArray javaIndexes, jint roundingMode) {
    LOADTABLEDATA

    jint *jindexes;
    append_data* newdata;
    jsize numberOfRows, nextSize;
    sql_column *col;
    int nextMonetDBIndex, nextColumnIndex;
    jint nextJavaIndex;
    BAT* nextBAT;
    jobject nextArray;

    AFTERLOAD

    if((*env)->ExceptionCheck(env) == JNI_TRUE) {
        return -1;
    }

    jindexes = (*env)->GetIntArrayElements(env, javaIndexes, NULL);
    numberOfRows = (*env)->GetArrayLength(env, (*env)->GetObjectArrayElement(env, columnData, 0));
    newdata = GDKmalloc(ncols * sizeof(append_data));
    if(newdata == NULL) {
        (*env)->ReleaseIntArrayElements(env, javaIndexes, jindexes, JNI_ABORT);
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System out of memory!");
        return -1;
    }

    for (n = tableData->columns.set->h; n; n = n->next) {
        col = n->data;
        nextMonetDBIndex = col->type.type->localtype;
        nextColumnIndex = col->colnr;
        nextJavaIndex = jindexes[nextColumnIndex];
        newdata[nextColumnIndex].colname = col->base.name;

        nextBAT = NULL;
        nextArray = (*env)->GetObjectArrayElement(env, columnData, nextColumnIndex);
        nextSize = (*env)->GetArrayLength(env, nextArray);
        if(nextSize != numberOfRows) {
           err = GDKstrdup("The row sizes between the columns are not consistent!");
           break;
        }

        switch(nextJavaIndex) {
            case 0: //boolean
                CHECK_ARRAY_CLASS(getByteArrayClassID(), "byte")
                storeBooleanColumn(env, &nextBAT, (jbyteArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 1: //char
            case 2: //varchar
            case 3: //clob
                CHECK_ARRAY_CLASS(getStringArrayClassID(), "java.lang.String")
                storeStringColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 4: //tinyint
                CHECK_ARRAY_CLASS(getByteArrayClassID(), "byte")
                storeTinyintColumn(env, &nextBAT, (jbyteArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 5: //smallint
                CHECK_ARRAY_CLASS(getShortArrayClassID(), "short")
                storeSmallintColumn(env, &nextBAT, (jshortArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 6: //int
            case 11: //month_interval
                CHECK_ARRAY_CLASS(getIntegerArrayClassID(), "int")
                storeIntColumn(env, &nextBAT, (jintArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 7: //bigint
            case 12: //second_interval
                CHECK_ARRAY_CLASS(getLongArrayClassID(), "long")
                storeBigintColumn(env, &nextBAT, (jlongArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 8: //decimal
                CHECK_ARRAY_CLASS(getBigDecimalArrayClassID(), "java.math.BigDecimal")
                if(col->type.digits <= 2) {
                    storeDecimalbteColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else if(col->type.digits > 2 && col->type.digits <= 4) {
                    storeDecimalshtColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else if(col->type.digits > 4 && col->type.digits <= 8) {
                    storeDecimalintColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                } else {
                    storeDecimallngColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex, col->type.scale, roundingMode);
                }
                break;
            case 9: //real
                CHECK_ARRAY_CLASS(getFloatArrayClassID(), "float")
                storeRealColumn(env, &nextBAT, (jfloatArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 10: //double
                CHECK_ARRAY_CLASS(getDoubleArrayClassID(), "double")
                storeDoubleColumn(env, &nextBAT, (jdoubleArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 13: //time
            case 14: //timetz
                CHECK_ARRAY_CLASS(getTimeArrayClassID(), "java.sql.Time")
                storeTimeColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 15: //date
                CHECK_ARRAY_CLASS(getDateClassArrayID(), "java.sql.Date")
                storeDateColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 16: //timestamp
            case 17: //timestamptz
                CHECK_ARRAY_CLASS(getTimestampArrayClassID(), "java.sql.Timestamp")
                storeTimestampColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            case 18: //blob
                CHECK_ARRAY_CLASS(getByteMatrixClassID(), "byte[]")
                storeBlobColumn(env, &nextBAT, (jobjectArray) nextArray, numberOfRows, nextMonetDBIndex);
                break;
            default:
                err = GDKstrdup("Unknown Java mapping class!");
        }
        (*env)->DeleteLocalRef(env, nextArray);
        if(!err) {
            newdata[nextColumnIndex].batid = nextBAT->batCacheid;
        } else {
            break;
        }
    }

    if(!err) {
        err = monetdb_append((void*) connectionPointer, tableData->s->base.name, tableData->base.name, newdata, ncols);
    }
    (*env)->ReleaseIntArrayElements(env, javaIndexes, jindexes, JNI_ABORT);
    GDKfree(newdata);

    if (err) {
        (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
        GDKfree(err);
        return -1;
    } else {
        return numberOfRows;
    }
}
