#include "monetdb_config.h"
#include "sql_scenario.h"
#include "mal.h"
#include "embedded.h"

int main() {
    char* err = 0;
    void* conn = 0;
    res_table* result = 0;


    err = monetdb_startup(NULL, 1, 0);
    if (err != 0) {
        fprintf(stderr, "Init fail: %s\n", err);
        return -1;
    }
    conn = monetdb_connect();

 err = monetdb_query(conn, "START TRANSACTION", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }
    err = monetdb_query(conn, "CREATE TABLE a (I INTEGER);", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }
     err = monetdb_query(conn, "INSERT INTO a VALUES (42)", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }
  err = monetdb_query(conn, "COMMIT", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }

    err = monetdb_query(conn, "SELECT * FROM a;", 1, (void**) &result, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 2 fail: %s\n", err);
        return -2;
    }

    fprintf(stderr, "Query result with %i cols and %lu rows\n", result->nr_cols, BATcount(BATdescriptor(result->cols[0].b)));
    monetdb_disconnect(conn);
    monetdb_shutdown();

}
