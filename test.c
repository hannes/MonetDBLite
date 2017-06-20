#include "embedded.h"

#include <stdio.h>

int main() {
    char* err = 0;
    void* conn = 0;
    monetdb_result* result = 0;


    err = monetdb_startup(NULL, 1, 0);
    if (err != 0) {
        fprintf(stderr, "Init fail: %s\n", err);
        return -1;
    }
    conn = monetdb_connect();

    err = monetdb_query(conn, "START TRANSACTION;", 1, NULL, NULL, NULL);
      if (err != 0) {
          fprintf(stderr, "Query 1 fail: %s\n", err);
          return -2;
      }


    err = monetdb_query(conn, "CREATE TABLE lineitem (l_orderkey INT NOT NULL, l_partkey INT NOT NULL, l_suppkey INT NOT NULL, l_linenumber INT NOT NULL, l_quantity INTEGER NOT NULL, l_extendedprice DECIMAL(15,2) NOT NULL, l_discount DECIMAL(15,2) NOT NULL,l_tax DECIMAL(15,2) NOT NULL,l_returnflag VARCHAR(1) NOT NULL,l_linestatus VARCHAR(1) NOT NULL,l_shipdate DATE NOT NULL,l_commitdate DATE NOT NULL,l_receiptdate DATE NOT NULL,l_shipinstruct VARCHAR(25) NOT NULL,l_shipmode VARCHAR(10) NOT NULL,l_comment VARCHAR(44) NOT NULL);", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }

    err = monetdb_query(conn, "COPY INTO lineitem FROM '/Users/hannes/source/MonetDB/sql/benchmarks/tpch/SF-0.01/lineitem.tbl' USING DELIMITERS '|', '\n';", 1, NULL, NULL, NULL);
    if (err != 0) {
        fprintf(stderr, "Query 1 fail: %s\n", err);
        return -2;
    }

    err = monetdb_query(conn, "select 	l_returnflag, 	l_linestatus, 	sum(l_quantity) as sum_qty, 	sum(l_extendedprice) as sum_base_price, 	sum(l_extendedprice * (1 - l_discount)) as sum_disc_price, 	sum(l_extendedprice * (1 - l_discount) * (1 + l_tax)) as sum_charge, 	avg(l_quantity) as avg_qty, 	avg(l_extendedprice) as avg_price, 	avg(l_discount) as avg_disc, 	count(*) as count_order from 	lineitem where 	l_shipdate <= date '1998-12-01' - interval '90' day group by 	l_returnflag, 	l_linestatus order by 	l_returnflag, 	l_linestatus; ", 1, &result, NULL, NULL);
	if (err != 0) {
		fprintf(stderr, "Query 2 fail: %s\n", err);
		return -2;
	}

	fprintf(stderr, "Query result with %zu cols and %zu rows\n", result->ncols, result->nrows);



	err = monetdb_query(conn, "UPDATE lineitem SET l_quantity=42", 1, NULL, NULL, NULL);
	   if (err != 0) {
		   fprintf(stderr, "Query 1 fail: %s\n", err);
		   return -2;
	   }

	   err = monetdb_query(conn, "COMMIT", 1, NULL, NULL, NULL);
	      if (err != 0) {
	          fprintf(stderr, "Query 1 fail: %s\n", err);
	          return -2;
	      }



	err = monetdb_query(conn, "DELETE FROM lineitem;", 1, NULL, NULL, NULL);
	   if (err != 0) {
		   fprintf(stderr, "Query 1 fail: %s\n", err);
		   return -2;
	   }



  err = monetdb_query(conn, "select 	l_returnflag, 	l_linestatus, 	sum(l_quantity) as sum_qty, 	sum(l_extendedprice) as sum_base_price, 	sum(l_extendedprice * (1 - l_discount)) as sum_disc_price, 	sum(l_extendedprice * (1 - l_discount) * (1 + l_tax)) as sum_charge, 	avg(l_quantity) as avg_qty, 	avg(l_extendedprice) as avg_price, 	avg(l_discount) as avg_disc, 	count(*) as count_order from 	lineitem where 	l_shipdate <= date '1998-12-01' - interval '90' day group by 	l_returnflag, 	l_linestatus order by 	l_returnflag, 	l_linestatus; ", 1, &result, NULL, NULL);
	   if (err != 0) {
		   fprintf(stderr, "Query 2 fail: %s\n", err);
		   return -2;
	   }

		fprintf(stderr, "Query result with %zu cols and %zu rows\n", result->ncols, result->nrows);

		for (size_t r = 0; r < result->nrows; r++) {
			for (size_t c = 0; c < result->ncols; c++) {
				monetdb_column* col = monetdb_result_fetch(result, c);
				switch(col->typeid) {
				case monetdb_int8_t:
					monetdb_column_int8_t * col = (monetdb_column_int8_t *) col;

					break;
				default:
					printf("X");
				}
			}
		}


		err = monetdb_query(conn, "DROP table lineitem;", 1, NULL, NULL, NULL);
		   if (err != 0) {
			   fprintf(stderr, "Query 1 fail: %s\n", err);
			   return -2;
		   }




    monetdb_disconnect(conn);
    monetdb_shutdown();

}
