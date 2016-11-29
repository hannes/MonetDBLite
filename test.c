#include "monetdb_config.h"
#include "sql_scenario.h"
#include "mal.h"
#include "embedded.h"

int main() {
    char* err = 0;
    void* conn = 0;
    res_table* result = 0;

    err = monetdb_startup("/tmp/embedded-dbfarm", 1, 0);
    if (err != 0) {
        fprintf(stderr, "Init fail: %s\n", err);
        return -1;
    }
    conn = monetdb_connect();
    err = monetdb_query(conn, "SELECT * FROM tables;", 1, (void**) &result);
    if (err != 0) {
        fprintf(stderr, "Query fail: %s\n", err);
        return -2;
    }
    fprintf(stderr, "Query result with %i cols and %lu rows\n", result->nr_cols, BATcount(BATdescriptor(result->cols[0].b)));
    monetdb_disconnect(conn);
    monetdb_shutdown();
}
