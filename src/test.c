
#include "embedded.h"


/*
 cd src/

./configure --enable-embedded \
--disable-fits --disable-geom --disable-rintegration --disable-gsl --disable-netcdf \
--disable-jdbc --disable-merocontrol --disable-odbc --disable-console --disable-microhttpd \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-perl --without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
--enable-debug --enable-silent-rules --disable-int128

make -j && gcc -shared -o libmonetdb5.so `find common gdk mal/mal mal/modules mal/optimizer sql embedded -name "*.o" | tr "\n" " "` -lpthread -lpcre -lz -liconv

gcc -g -O0 test.c -Icommon/options -Icommon/stream -Igdk -Imal/mal -Imal/modules/atoms -Imal/modules/mal -Isql/include -Isql/backends/monet5 -Isql/server -Isql/common -Isql/storage -Isql/storage/bat -Iembedded -lmonetdb5 -L. -Wall  && lldb -o r -o q ./a.out


 * */

#include "monetdb_config.h"
#include "monet_options.h"
#include "mal.h"
#include "mal_client.h"
#include "mal_linker.h"
#include "sql_scenario.h"
#include "gdk_utils.h"
#include "sql_scenario.h"
#include "sql_execute.h"
#include "sql.h"
#include "sql_mvc.h"
#include "res_table.h"
#include "sql_scenario.h"
#include "sql_gencode.h"

#include <locale.h>

#define NULLFILE "/dev/null"
#define dbdir "/tmp/mini"

FILE* embedded_stdout;
FILE* embedded_stderr;


ValPtr execute_stmt(mvc *sql, stmt *s)
{
	node *n;

	if (s) {
		if (s->nr > 0)
			return s->nr;	/* stmt already handled */

		switch (s->type) {
		case st_none:{
			printf("execute st_none\n");

/*			q = newAssignment(mb);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			(void) pushInt(mb, q, 1);
*/
		} break;
		case st_var:{
			printf("execute st_var\n");

			/*
			if (s->op1) {
				if (VAR_GLOBAL(s->flag)) {	// globals
					int tt = tail_type(s)->type->localtype;

					q = newStmt(mb, sqlRef, "getVariable");
					q = pushArgument(mb, q, sql->mvc_var);
					q = pushStr(mb, q, s->op1->op4.aval->data.val.sval);
					if (q == NULL)
						return -1;
					setVarType(mb, getArg(q, 0), tt);
					setVarUDFtype(mb, getArg(q, 0));
				} else if ((s->flag & VAR_DECLARE) == 0) {
					char *buf = GDKmalloc(MAXIDENTLEN);

					if (buf == NULL)
						return -1;
					(void) snprintf(buf, MAXIDENTLEN, "A%s", s->op1->op4.aval->data.val.sval);
					q = newAssignment(mb);
					q = pushArgumentId(mb, q, buf);
					if (q == NULL)
						return -1;
				} else {
					sql_subtype *st = tail_type(s);
					char *buf;
					int tt;

					if (s->op3) {
						// declared table
						s->nr = dump_table(mb, (sql_table*)s->op3);
						if (s->nr < 0)
							return -1;
						break;
					}
					tt = st->type->localtype;
				       	buf = GDKmalloc(MAXIDENTLEN);
					if (buf == NULL)
						return -1;
					(void) snprintf(buf, MAXIDENTLEN, "A%s", s->op1->op4.aval->data.val.sval);
					q = newInstruction(mb, ASSIGNsymbol);
					if (q == NULL) {
						GDKfree(buf);
						return -1;
					}
					q->argc = q->retc = 0;
					q = pushArgumentId(mb, q, buf);
					q = pushNil(mb, q, tt);
					pushInstruction(mb, q);
					if (q == NULL)
						return -1;
					q->retc++;
				}
			} else {
				q = newAssignment(mb);
				if (sql->mvc->argc && sql->mvc->args[s->flag]->varid >= 0) {
					q = pushArgument(mb, q, sql->mvc->args[s->flag]->varid);
				} else {
					char *buf = GDKmalloc(IDLENGTH);
					if (buf == NULL)
						return -1;
					(void) snprintf(buf, IDLENGTH, "A%d", s->flag);
					q = pushArgumentId(mb, q, buf);
				}
				if (q == NULL)
					return -1;
			}
			s->nr = getDestVar(q);*/

		} break;
		case st_single:{
			printf("execute st_single\n");
			/*
			int tt = s->op4.typeval.type->localtype;
			int val = _dumpstmt(sql, mb, s->op1);

			if (val < 0)
				return -1;
			q = newStmt(mb, sqlRef, "single");
			if (q == NULL)
				return -1;
			setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
			q = pushArgument(mb, q, val);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/

		} break;
		case st_temp:{
			printf("execute st_temp\n");
			/*
			int tt = s->op4.typeval.type->localtype;

			q = newStmt(mb, batRef, "new");
			if (q == NULL)
				return -1;
			setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
			setVarUDFtype(mb, getArg(q, 0));
			q = pushType(mb, q, TYPE_oid);
			q = pushType(mb, q, tt);
			if (q == NULL)
				return -1;

			s->nr = getDestVar(q);*/
		} break;
		case st_tid:{
			printf("execute st_tid\n");
/*
			int tt = TYPE_oid;
			sql_table *t = s->op4.tval;

			q = newStmt(mb, sqlRef, "tid");
			if (q == NULL)
				return -1;
			setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
			setVarUDFtype(mb, getArg(q, 0));
			q = pushArgument(mb, q, sql->mvc_var);
			q = pushSchema(mb, q, t);
			q = pushStr(mb, q, t->base.name);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			if (t && (!isRemote(t) && !isMergeTable(t)) && s->partition) {
				sql_trans *tr = sql->mvc->session->tr;
				BUN rows = (BUN) store_funcs.count_col(tr, t->columns.set->h->data, 1);
				setRowCnt(mb,getArg(q,0),rows);
				if (t->p && 0)
					setMitosisPartition(q, t->p->base.id);
			}
			*/
		}
			break;
		case st_bat:{
			printf("execute st_bat\n");
/*
			int tt = s->op4.cval->type.type->localtype;
			sql_column *c = s->op4.cval;
			sql_table *t = c->t;

			q = newStmt(mb, sqlRef, bindRef);
			if (q == NULL)
				return -1;
			if (s->flag == RD_UPD_ID) {
				q = pushReturn(mb, q, newTmpVariable(mb, newBatType(TYPE_oid, tt)));
			} else {
				setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
				setVarUDFtype(mb, getArg(q, 0));
			}
			q = pushArgument(mb, q, sql->mvc_var);
			q = pushSchema(mb, q, t);
			q = pushArgument(mb, q, getStrConstant(mb,t->base.name));
			q = pushArgument(mb, q, getStrConstant(mb,c->base.name));
			q = pushArgument(mb, q, getIntConstant(mb,s->flag));
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);

			if (s->flag == RD_UPD_ID) {
				// rename second result
				renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
			}
			if (s->flag != RD_INS && s->partition) {
				sql_trans *tr = sql->mvc->session->tr;

				if (c && (!isRemote(c->t) && !isMergeTable(c->t))) {
					BUN rows = (BUN) store_funcs.count_col(tr, c, 1);
					setRowCnt(mb,getArg(q,0),rows);
					if (t->p && 0)
						setMitosisPartition(q, t->p->base.id);
				}
			}*/

		}
			break;
		case st_idxbat:{
			printf("execute st_idxbat\n");
			/*
			int tt = tail_type(s)->type->localtype;
			sql_idx *i = s->op4.idxval;
			sql_table *t = i->t;

			q = newStmt(mb, sqlRef, bindidxRef);
			if (q == NULL)
				return -1;
			if (s->flag == RD_UPD_ID) {
				q = pushReturn(mb, q, newTmpVariable(mb, newBatType(TYPE_oid, tt)));
			} else {
				setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
				setVarUDFtype(mb, getArg(q, 0));
			}

			q = pushArgument(mb, q, sql->mvc_var);
			q = pushSchema(mb, q, t);
			q = pushArgument(mb, q, getStrConstant(mb,t->base.name));
			q = pushArgument(mb, q, getStrConstant(mb,i->base.name));
			q = pushArgument(mb, q, getIntConstant(mb,s->flag));
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);

			if (s->flag == RD_UPD_ID) {
				// rename second result
				renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
			}
			if (s->flag != RD_INS && s->partition) {
				sql_trans *tr = sql->mvc->session->tr;

				if (i && (!isRemote(i->t) && !isMergeTable(i->t))) {
					BUN rows = (BUN) store_funcs.count_idx(tr, i, 1);
					setRowCnt(mb,getArg(q,0),rows);
					if (t->p && 0)
						setMitosisPartition(q, t->p->base.id);
				}
			}*/
		}
			break;
		case st_const:{
			printf("execute st_const\n");
			/*
			if (s->op2) {
				if (dump_2(sql, mb, s, algebraRef, projectRef) < 0)
					return -1;
			} else {
				if (dump_1(sql, mb, s, algebraRef, projectRef) < 0)
					return -1;
			}*/
		}
			break;
		case st_gen_group:{
			printf("execute st_gen_group\n");
			/*
			if (dump_2(sql, mb, s, algebraRef, groupbyRef) < 0)
				return -1;*/
		}
			break;
		case st_mirror:{
			printf("execute st_mirror\n");
/*
			if (dump_1(sql, mb, s, batRef, mirrorRef) < 0)
				return -1;
				*/
		}
			break;
		case st_limit2:
		case st_limit:{
			printf("execute st_limit\n");
/*
			stmt *piv, *gid, *col;
			int l, offset, len, p, g, c;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			col = (s->type == st_limit2) ? s->op1->op4.lval->h->data : s->op1;
			piv = (s->type == st_limit2) ? s->op1->op4.lval->h->next->data : NULL;
			gid = (s->type == st_limit2) ? s->op1->op4.lval->t->data : NULL;
			if ((offset = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			if ((len = _dumpstmt(sql, mb, s->op3)) < 0)
				return -1;
			c = (col) ? col->nr : 0;
			p = (piv) ? piv->nr : 0;
			g = (gid) ? gid->nr : 0;

			// first insert single value into a bat
			assert(s->nrcols);
			if (s->nrcols == 0) {
				int k;
				int tt = tail_type(s->op1)->type->localtype;

				assert(0);
				q = newStmt(mb, batRef, "new");
				if (q == NULL)
					return -1;
				setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, tt));
				setVarUDFtype(mb, getArg(q, 0));
				q = pushType(mb, q, TYPE_oid);
				q = pushType(mb, q, tt);
				if (q == NULL)
					return -1;
				k = getDestVar(q);

				q = newStmt(mb, batRef, appendRef);
				q = pushArgument(mb, q, k);
				q = pushArgument(mb, q, c);
				if (q == NULL)
					return -1;
				c = k;
			}
			if (s->flag&1) {
				int topn = 0, flag = s->flag;
				int last = (flag & 2);
				int dir = (flag & 4);
				int distinct = (flag & 8);

				q = newStmt(mb, calcRef, "+");
				q = pushArgument(mb, q, offset);
				q = pushArgument(mb, q, len);
				if (q == NULL)
					return -1;
				topn = getDestVar(q);

				q = newStmt(mb, algebraRef, firstnRef);
				if (!last) // we need the groups for the next firstn
					q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, c);
				if (p)
					q = pushArgument(mb, q, p);
				if (g)
					q = pushArgument(mb, q, g);
				q = pushArgument(mb, q, topn);
				q = pushBit(mb, q, dir != 0);
				q = pushBit(mb, q, distinct != 0);

				if (q == NULL)
					return -1;
				s->nr = getArg(q, 0);
				if (!last)
					renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
				l = getDestVar(q);
			} else {
				q = newStmt(mb, calcRef, "+");
				q = pushArgument(mb, q, offset);
				q = pushArgument(mb, q, len);
				if (q == NULL)
					return -1;
				len = getDestVar(q);

				/* since both arguments of algebra.subslice are
				   inclusive correct the LIMIT value by
				   subtracting 1 //
				q = newStmt(mb, calcRef, "-");
				q = pushArgument(mb, q, len);
				q = pushInt(mb, q, 1);
				if (q == NULL)
					return -1;
				len = getDestVar(q);

				q = newStmt(mb, algebraRef, "subslice");
				q = pushArgument(mb, q, c);
				q = pushArgument(mb, q, offset);
				q = pushArgument(mb, q, len);
				if (q == NULL)
					return -1;
				l = getDestVar(q);

			}
			// retrieve the single values again
			if (s->nrcols == 0) {
				q = newStmt(mb, algebraRef, "find");
				q = pushArgument(mb, q, l);
				q = pushOid(mb, q, 0);
				if (q == NULL)
					return -1;
				l = getDestVar(q);
			}
			s->nr = l;*/
		}
			break;
		case st_sample:{
			printf("execute st_samp;e\n");
/*
			int l, r;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if ((r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			q = newStmt(mb, "sample", "subuniform");
			q = pushArgument(mb, q, l);
			q = pushArgument(mb, q, r);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/
		} break;
		case st_order:{
			printf("execute st_order\n");
/*
			int l = _dumpstmt(sql, mb, s->op1);
			int reverse = (s->flag <= 0);

			if (l < 0)
				return -1;
			q = newStmt(mb, algebraRef, "subsort");
			// both ordered result and oid's order en subgroups
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushArgument(mb, q, l);
			q = pushBit(mb, q, reverse);
			q = pushBit(mb, q, FALSE);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);

			renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
			renameVariable(mb, getArg(q, 2), "r2_%d", s->nr);
			*/
		} break;
		case st_reorder:{
			printf("execute st_reorder\n");
/*
			int l;
			int oids;
			int ogrp;
			int reverse;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if ((oids = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			if ((ogrp = _dumpstmt(sql, mb, s->op3)) < 0)
				return -1;
			reverse = (s->flag <= 0);

			q = newStmt(mb, algebraRef, "subsort");
			//  both ordered result and oid's order en subgroups
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushArgument(mb, q, l);
			q = pushArgument(mb, q, oids);
			q = pushArgument(mb, q, ogrp);
			q = pushBit(mb, q, reverse);
			q = pushBit(mb, q, FALSE);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);

			renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
			renameVariable(mb, getArg(q, 2), "r2_%d", s->nr);
			*/
		} break;
		case st_uselect:{
			printf("execute st_uselect\n");
/*
			bit need_not = FALSE;
			int l, r, sub, anti;
			node *n;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if ((r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			sub = -1;
			anti = is_anti(s);

			if (s->op3 && (sub = _dumpstmt(sql, mb, s->op3)) < 0)
				return -1;

			if (s->op2->nrcols >= 1) {
				char *mod = calcRef;
				char *op = "=";
				int k, done = 0;

				switch (get_cmp(s)) {
				case cmp_equal:
					op = "=";
					break;
				case cmp_notequal:
					op = "!=";
					break;
				case cmp_lt:
					op = "<";
					break;
				case cmp_lte:
					op = "<=";
					break;
				case cmp_gt:
					op = ">";
					break;
				case cmp_gte:
					op = ">=";
					break;
				case cmp_filter:
					done = 1;

					if (backend_create_subfunc(sql, s->op4.funcval, NULL) < 0)
						return -1;
					op = sql_func_imp(s->op4.funcval->func);
					mod = sql_func_mod(s->op4.funcval->func);

					q = newStmt(mb, "mal", "multiplex");
					setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, TYPE_bit));
					setVarUDFtype(mb, getArg(q, 0));
					q = pushStr(mb, q, convertMultiplexMod(mod, op));
					q = pushStr(mb, q, convertMultiplexFcn(op));
					for (n = s->op1->op4.lval->h; n; n = n->next) {
						stmt *op = n->data;
						q = pushArgument(mb, q, op->nr);
					}
					for (n = s->op2->op4.lval->h; n; n = n->next) {
						stmt *op = n->data;
						q = pushArgument(mb, q, op->nr);
					}
					if (q == NULL)
						return -1;
					break;
				default:
					showException(GDKout, SQL, "sql", "Unknown operator");
				}

				if (!done && (q = multiplex2(mb, mod, convertOperator(op), l, r, TYPE_bit)) == NULL)
					return -1;
				k = getDestVar(q);

				q = newStmt(mb, algebraRef, "subselect");
				q = pushArgument(mb, q, k);
				if (sub > 0)
					q = pushArgument(mb, q, sub);
				q = pushBit(mb, q, !need_not);
				q = pushBit(mb, q, !need_not);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, anti);
				if (q == NULL)
					return -1;
				k = getDestVar(q);
			} else {
				char *cmd = subselectRef;

				if (s->flag != cmp_equal && s->flag != cmp_notequal)
					cmd = thetasubselectRef;

				if (get_cmp(s) == cmp_filter) {
					node *n;
					char *mod, *fimp;
					sql_func *f = s->op4.funcval->func;

					if (backend_create_subfunc(sql, s->op4.funcval, NULL) < 0)
						return -1;

					mod = sql_func_mod(f);
					fimp = sql_func_imp(f);
					fimp = sa_strconcat(sql->mvc->sa, fimp, "subselect");
					q = newStmt(mb, mod, convertOperator(fimp));
					// push pointer to the SQL structure into the MAL call
					// allows getting argument names for example
					if (LANG_EXT(f->lang))
						q = pushPtr(mb, q, f);
					// f->query contains the R code to be run
					if (f->lang == FUNC_LANG_R)
						q = pushStr(mb, q, f->query);

					for (n = s->op1->op4.lval->h; n; n = n->next) {
						stmt *op = n->data;

						q = pushArgument(mb, q, op->nr);
					}
					//  candidate lists
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					else
						q = pushNil(mb, q, TYPE_bat);

					for (n = s->op2->op4.lval->h; n; n = n->next) {
						stmt *op = n->data;

						q = pushArgument(mb, q, op->nr);
					}

					q = pushBit(mb, q, anti);
					if (q == NULL)
						return -1;
					s->nr = getDestVar(q);
					break;
				}

				switch (s->flag) {
				case cmp_equal:{
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushArgument(mb, q, r);
					q = pushBit(mb, q, TRUE);
					q = pushBit(mb, q, FALSE);
					q = pushBit(mb, q, FALSE);
					if (q == NULL)
						return -1;
					break;
				}
				case cmp_notequal:{
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushArgument(mb, q, r);
					q = pushBit(mb, q, TRUE);
					q = pushBit(mb, q, TRUE);
					q = pushBit(mb, q, TRUE);
					if (q == NULL)
						return -1;
					break;
				}
				case cmp_lt:
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushStr(mb, q, "<");
					if (q == NULL)
						return -1;
					break;
				case cmp_lte:
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushStr(mb, q, "<=");
					if (q == NULL)
						return -1;
					break;
				case cmp_gt:
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushStr(mb, q, ">");
					if (q == NULL)
						return -1;
					break;
				case cmp_gte:
					q = newStmt(mb, algebraRef, cmd);
					q = pushArgument(mb, q, l);
					if (sub > 0)
						q = pushArgument(mb, q, sub);
					q = pushArgument(mb, q, r);
					q = pushStr(mb, q, ">=");
					if (q == NULL)
						return -1;
					break;
				default:
					showException(GDKout, SQL, "sql", "SQL2MAL: error impossible subselect compare\n");
				}
			}
			if (q)
				s->nr = getDestVar(q);
			else
				s->nr = newTmpVariable(mb, TYPE_any);*/
		}
			break;
		case st_uselect2:
		case st_join2:{
			printf("execute st_uselect2\n");
/*
			InstrPtr r, p;
			int l = _dumpstmt(sql, mb, s->op1);
			stmt *base, *low = NULL, *high = NULL;
			int r1 = -1, r2 = -1, rs = 0;
			bit anti = (s->flag & ANTI) ? TRUE : FALSE;
			bit swapped = (s->flag & SWAPPED) ? TRUE : FALSE;
			char *cmd = (s->type == st_uselect2) ? subselectRef : subrangejoinRef;
			int sub = -1;

			if (l < 0)
				return -1;
			if (s->op4.stval &&
			    (sub = _dumpstmt(sql, mb, s->op4.stval)) < 0)
				return -1;

			if ((s->op2->nrcols > 0 || s->op3->nrcols) && (s->type == st_uselect2)) {
				int k, symmetric = s->flag&CMP_SYMMETRIC;
				char *mod = calcRef;
				char *op1 = "<", *op2 = "<";

				if ((r1 = _dumpstmt(sql, mb, s->op2)) < 0)
					return -1;
				if ((r2 = _dumpstmt(sql, mb, s->op3)) < 0)
					return -1;

				if (s->flag & 1)
					op1 = "<=";
				if (s->flag & 2)
					op2 = "<=";

				if (s->flag&1 && s->flag&2) {
					if (symmetric)
						p = newStmt(mb, batcalcRef, "between_symmetric");
					else
						p = newStmt(mb, batcalcRef, "between");
					p = pushArgument(mb, p, l);
					p = pushArgument(mb, p, r1);
					p = pushArgument(mb, p, r2);
					k = getDestVar(p);
				} else {
					if ((q = multiplex2(mb, mod, convertOperator(op1), l, r1, TYPE_bit)) == NULL)
						return -1;

					if ((r = multiplex2(mb, mod, convertOperator(op2), l, r2, TYPE_bit)) == NULL)
						return -1;
					p = newStmt(mb, batcalcRef, "and");
					p = pushArgument(mb, p, getDestVar(q));
					p = pushArgument(mb, p, getDestVar(r));
					if (p == NULL)
						return -1;
					k = getDestVar(p);
				}

				q = newStmt(mb, algebraRef, "subselect");
				q = pushArgument(mb, q, k);
				if (sub > 0)
					q = pushArgument(mb, q, sub);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, FALSE);
				if (q == NULL)
					return -1;
				s->nr = getDestVar(q);
				break;
			}
			//  if st_join2 try to convert to bandjoin
			// ie check if we subtract/add a constant, to the
			//   same column
			if (s->type == st_join2 && range_join_convertable(s, &base, &low, &high)) {
				int tt = tail_type(base)->type->localtype;
				if ((rs = _dumpstmt(sql, mb, base)) < 0)
					return -1;
				if (low) {
					if ((r1 = _dumpstmt(sql, mb, low)) < 0)
						return -1;
				} else
					r1 = argumentZero(mb, tt);
				if (high) {
					if ((r2 = _dumpstmt(sql, mb, high)) < 0)
						return -1;
				} else
					r2 = argumentZero(mb, tt);
				cmd = subbandjoinRef;
			}

			if (!rs) {
				if ((r1 = _dumpstmt(sql, mb, s->op2)) < 0)
					return -1;
				if ((r2 = _dumpstmt(sql, mb, s->op3)) < 0)
					return -1;
			}
			q = newStmt(mb, algebraRef, cmd);
			if (s->type == st_join2)
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushArgument(mb, q, l);
			if (sub > 0) //  only for uselect2
				q = pushArgument(mb, q, sub);
			if (rs) {
				q = pushArgument(mb, q, rs);
			} else {
				q = pushArgument(mb, q, r1);
				q = pushArgument(mb, q, r2);
			}
			if (s->type == st_join2) {
				q = pushNil(mb, q, TYPE_bat);
				q = pushNil(mb, q, TYPE_bat);
			}

			switch (s->flag & 3) {
			case 0:
				q = pushBit(mb, q, FALSE);
				q = pushBit(mb, q, FALSE);
				break;
			case 1:
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, FALSE);
				break;
			case 2:
				q = pushBit(mb, q, FALSE);
				q = pushBit(mb, q, TRUE);
				break;
			case 3:
				q = pushBit(mb, q, TRUE);
				q = pushBit(mb, q, TRUE);
				break;
			}
			if (s->type == st_join2)
				q = pushNil(mb, q, TYPE_lng); //  estimate
			if (s->type == st_uselect2) {
				q = pushBit(mb, q, anti);
				if (q == NULL)
					return -1;
				s->nr = getDestVar(q);
				break;
			}
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);

			if (swapped) {
				InstrPtr r = newInstruction(mb, ASSIGNsymbol);
				if (r == NULL)
					return -1;
				getArg(r, 0) = newTmpVariable(mb, TYPE_any);
				getArg(r, 1) = getArg(q, 1);
				r->retc = 1;
				r->argc = 2;
				pushInstruction(mb, r);
				s->nr = getArg(r, 0);

				r = newInstruction(mb, ASSIGNsymbol);
				if (r == NULL)
					return -1;
				getArg(r, 0) = newTmpVariable(mb, TYPE_any);
				getArg(r, 1) = getArg(q, 0);
				r->retc = 1;
				r->argc = 2;
				pushInstruction(mb, r);

				//  rename second result
				renameVariable(mb, getArg(r, 0), "r1_%d", s->nr);
			} else {
				//  rename second result
				renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);
			}*/
			break;
		}
		case st_joinN:
			printf("execute st_joinN\n");

		//	s->nr = dump_joinN(sql, mb, s);
			break;
		case st_tunion:{
			printf("execute st_tunion\n");
/*
			if (dump_2_(sql, mb, s, batRef, mergecandRef) < 0)
				return -1;
		*/}
			break;
		case st_tdiff:
		case st_tinter:{
			printf("execute st_tinter\n");
/*
			int o1, o2;
			if ((o1 = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if ((o2 = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;

			q = newStmt(mb, algebraRef, s->type == st_tdiff ? subdiffRef : subinterRef);
			q = pushArgument(mb, q, o1); //  left
			q = pushArgument(mb, q, o2); //  right
			q = pushNil(mb, q, TYPE_bat); //  left candidate
			q = pushNil(mb, q, TYPE_bat); //  right candidate
			q = pushBit(mb, q, FALSE);    //  nil matches
			q = pushNil(mb, q, TYPE_lng); //  estimate
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/
		}
			break;
		case st_join:{
			printf("execute st_join\n");

			ValPtr l, r;
			int cmp = s->flag;
			int left = (cmp == cmp_left);
			char *sjt = "subjoin";

			if (left) {
				cmp = cmp_equal;
				sjt = "subleftjoin";
			}
			l = execute_stmt(sql, s->op1);
			r = execute_stmt(sql, s->op2);
			assert(l != NULL 0 && r != NULL);

			if (cmp == cmp_joined) {
				return l;
			}
			if (cmp == cmp_left_project) {
				ValPtr op3 = execute_stmt(sql, s->op3);

				assert(op3 != NULL);

				BATleftproject();

				q = newStmt(mb, sqlRef, projectRef);
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				q = pushArgument(mb, q, op3);
				if (q == NULL)
					return -1;
				s->nr = getDestVar(q);
				return s->nr;
			}
			if (cmp == cmp_project) {
				int ins;

				//  delta bat
				if (s->op3) {
					char nme[IDLENGTH];
					int uval = -1;

					snprintf(nme, IDLENGTH, "r1_%d", r);
					uval = findVariable(mb, nme);
					assert(uval >= 0);

					if ((ins = _dumpstmt(sql, mb, s->op3)) < 0)
						return -1;
					q = newStmt(mb, sqlRef, deltaRef);
					q = pushArgument(mb, q, l);
					q = pushArgument(mb, q, r);
					q = pushArgument(mb, q, uval);
					q = pushArgument(mb, q, ins);
					if (q == NULL)
						return -1;
					s->nr = getDestVar(q);
					return s->nr;
				}
				//  projections, ie left is void headed
				q = newStmt(mb, algebraRef, "projection");
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				if (q == NULL)
					return -1;
				s->nr = getDestVar(q);
				if (cmp == cmp_project && s->key) {
					q = newStmt(mb, batRef, "setKey");
					q = pushArgument(mb, q, s->nr);
					q = pushBit(mb, q, TRUE);
					s->nr = getDestVar(q);
				}
				return s->nr;
			}


			switch (cmp) {
			case cmp_equal:
				q = newStmt(mb, algebraRef, sjt);
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				q = pushNil(mb, q, TYPE_bat);
				q = pushNil(mb, q, TYPE_bat);
				q = pushBit(mb, q, FALSE);
				q = pushNil(mb, q, TYPE_lng);
				if (q == NULL)
					return -1;
				break;
			case cmp_equal_nil: //  nil == nil
				q = newStmt(mb, algebraRef, sjt);
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				q = pushNil(mb, q, TYPE_bat);
				q = pushNil(mb, q, TYPE_bat);
				q = pushBit(mb, q, TRUE);
				q = pushNil(mb, q, TYPE_lng);
				if (q == NULL)
					return -1;
				break;
			case cmp_notequal:
				q = newStmt(mb, algebraRef, subantijoinRef);
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				q = pushNil(mb, q, TYPE_bat);
				q = pushNil(mb, q, TYPE_bat);
				q = pushBit(mb, q, FALSE);
				q = pushNil(mb, q, TYPE_lng);
				if (q == NULL)
					return -1;
				break;
			case cmp_lt:
			case cmp_lte:
			case cmp_gt:
			case cmp_gte:
				q = newStmt(mb, algebraRef, subthetajoinRef);
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				q = pushNil(mb, q, TYPE_bat);
				q = pushNil(mb, q, TYPE_bat);
				if (cmp == cmp_lt)
					q = pushInt(mb, q, -1);
				else if (cmp == cmp_lte)
					q = pushInt(mb, q, -2);
				else if (cmp == cmp_gt)
					q = pushInt(mb, q, 1);
				else if (cmp == cmp_gte)
					q = pushInt(mb, q, 2);
				q = pushBit(mb, q, TRUE);
				q = pushNil(mb, q, TYPE_lng);
				if (q == NULL)
					return -1;
				break;
			case cmp_all:	//  aka cross table
				q = newStmt(mb, algebraRef, crossRef);
				q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
				q = pushArgument(mb, q, l);
				q = pushArgument(mb, q, r);
				if (q == NULL)
					return -1;
				break;
			case cmp_project:
				assert(0);
				break;
			default:
				showException(GDKout, SQL, "sql", "SQL2MAL: error impossible\n");
			}
			s->nr = getDestVar(q);

			//  rename second result
			renameVariable(mb, getArg(q, 1), "r1_%d", s->nr);*/
			break;
		}
		case st_group:{
			printf("execute st_group\n");
/*
			int cnt = 0, ext = 0, grp = 0, o1;

			if ((o1 = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if (s->op2) {
				if ((grp = _dumpstmt(sql, mb, s->op2)) < 0)
					return -1;
				if ((ext = _dumpstmt(sql, mb, s->op3)) < 0)
					return -1;
				if ((cnt = _dumpstmt(sql, mb, s->op4.stval)) < 0)
					return -1;
			}

			q = newStmt(mb, groupRef, s->flag & GRP_DONE ? subgroupdoneRef : subgroupRef);

			//  output variables extend and hist
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushReturn(mb, q, newTmpVariable(mb, TYPE_any));
			q = pushArgument(mb, q, o1);
			if (grp)
				q = pushArgument(mb, q, grp);
			if (q == NULL)
				return -1;

			s->nr = getDestVar(q);

			//  rename second result
			ext = getArg(q, 1);
			renameVariable(mb, ext, "r1_%d", s->nr);

			//  rename 3rd result
			cnt = getArg(q, 2);
			renameVariable(mb, cnt, "r2_%d", s->nr);
*/
		} break;
		case st_result:{
			printf("execute st_result\n");
/*
			int l;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;

			if (s->op1->type == st_join && s->op1->flag == cmp_joined) {
				s->nr = l;
				if (s->flag)
					s->nr = s->op1->op2->nr;
			} else if (s->flag) {
				char nme[IDLENGTH];
				int v = -1;

				snprintf(nme, IDLENGTH, "r%d_%d", s->flag, l);
				v = findVariable(mb, nme);
				assert(v >= 0);

				s->nr = v;
			} else {
				s->nr = l;
			}*/
		}
			break;
		case st_convert:{
			printf("execute st_convert\n");
/*
			list *types = s->op4.lval;
			sql_subtype *f = types->h->data;
			sql_subtype *t = types->t->data;
			char *convert = t->type->base.name;
			//  convert types and make sure they are rounded up correctly
			int l;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;

			if (t->type->localtype == f->type->localtype && (t->type->eclass == f->type->eclass || (EC_VARCHAR(f->type->eclass) && EC_VARCHAR(t->type->eclass))) && !EC_INTERVAL(f->type->eclass) && f->type->eclass != EC_DEC &&
			    (t->digits == 0 || f->digits == t->digits)
				) {
				s->nr = l;
				break;
			}

			// external types have sqlname convert functions,
			 //  these can generate errors (fromstr cannot)
			if (t->type->eclass == EC_EXTERNAL)
				convert = t->type->sqlname;

			if (t->type->eclass == EC_MONTH)
				convert = "month_interval";
			else if (t->type->eclass == EC_SEC)
				convert = "second_interval";

			/* Lookup the sql convert function, there is no need
			 // for single value vs bat, this is handled by the
			 // mal function resolution
			if (s->nrcols == 0) {	//  simple calc
				q = newStmt(mb, calcRef, convert);
			} else if (s->nrcols > 0 &&
				   (t->type->localtype > TYPE_str || f->type->eclass == EC_DEC || t->type->eclass == EC_DEC || EC_INTERVAL(t->type->eclass) || EC_TEMP(t->type->eclass) ||
				    (EC_VARCHAR(t->type->eclass) && !(f->type->eclass == EC_STRING && t->digits == 0)))) {
				int type = t->type->localtype;

				q = newStmt(mb, "mal", "multiplex");
				if (q == NULL)
					return -1;
				setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, type));
				setVarUDFtype(mb, getArg(q, 0));
				q = pushStr(mb, q, convertMultiplexMod("calc", convert));
				q = pushStr(mb, q, convertMultiplexFcn(convert));
			} else
				q = newStmt(mb, batcalcRef, convert);

			// convert to string is complex, we need full type info
			//   and mvc for the timezone
			if (EC_VARCHAR(t->type->eclass) && !(f->type->eclass == EC_STRING && t->digits == 0)) {
				q = pushInt(mb, q, f->type->eclass);
				q = pushInt(mb, q, f->digits);
				q = pushInt(mb, q, f->scale);
				q = pushInt(mb, q, type_has_tz(f));
			} else if (f->type->eclass == EC_DEC)
				//  scale of the current decimal
				q = pushInt(mb, q, f->scale);
			q = pushArgument(mb, q, l);

			if (t->type->eclass == EC_DEC || EC_TEMP_FRAC(t->type->eclass) || EC_INTERVAL(t->type->eclass)) {
				//  digits, scale of the result decimal
				q = pushInt(mb, q, t->digits);
				if (!EC_TEMP_FRAC(t->type->eclass))
					q = pushInt(mb, q, t->scale);
			}
			//  convert to string, give error on to large strings
			if (EC_VARCHAR(t->type->eclass) && !(f->type->eclass == EC_STRING && t->digits == 0))
				q = pushInt(mb, q, t->digits);
			//  convert a string to a time(stamp) with time zone
			if (EC_VARCHAR(f->type->eclass) && EC_TEMP_FRAC(t->type->eclass) && type_has_tz(t))
				q = pushInt(mb, q, type_has_tz(t));
			if (t->type->eclass == EC_GEOM) {
				//  push the type and coordinates of the column
				q = pushInt(mb, q, t->digits);
				//  push the SRID of the whole columns
				q = pushInt(mb, q, t->scale);
				//  push the type and coordinates of the inserted value
				//q = pushInt(mb, q, f->digits);
				//  push the SRID of the inserted value
				//q = pushInt(mb, q, f->scale);

//  we decided to create the EWKB type also used by PostGIS and has the SRID provided by the user inside alreay
				//  push the SRID provided for this value
				// GEOS library is able to store in the returned wkb the type an
 				// number if coordinates but not the SRID so SRID should be provided
 				// from this level
			q = pushInt(mb, q, ((ValRecord)((atom*)((mvc*)sql->mvc)->args[1])->data).val.ival);
			}
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/
			break;
		}
		case st_Nop:{
			printf("execute st_Nop\n");
/*
			char *mod, *fimp;
			sql_subtype *tpe = NULL;
			int special = 0;
			sql_subfunc *f = s->op4.funcval;
			node *n;
			//  dump operands
			if (_dumpstmt(sql, mb, s->op1) < 0)
				return -1;

			if (backend_create_subfunc(sql, f, s->op1->op4.lval) < 0)
				return -1;
			mod = sql_func_mod(f->func);
			fimp = sql_func_imp(f->func);
			if (s->nrcols) {
				sql_subtype *res = f->res->h->data;
				fimp = convertMultiplexFcn(fimp);
				q = NULL;
				if (strcmp(fimp, "rotate_xor_hash") == 0 &&
				    strcmp(mod, "calc") == 0 &&
				    (q = newStmt(mb, "mkey", "bulk_rotate_xor_hash")) == NULL)
					return -1;
				if (!q) {
					if (f->func->type == F_UNION)
						q = newStmt(mb, "batmal", "multiplex");
					else
						q = newStmt(mb, "mal", "multiplex");
					if (q == NULL)
						return -1;
					setVarType(mb, getArg(q, 0), newBatType(TYPE_oid, res->type->localtype));
					setVarUDFtype(mb, getArg(q, 0));
					q = pushStr(mb, q, mod);
					q = pushStr(mb, q, fimp);
				} else {
					setVarType(mb, getArg(q, 0), newBatType(TYPE_any, res->type->localtype));
					setVarUDFtype(mb, getArg(q, 0));
				}
			} else {
				fimp = convertOperator(fimp);
				q = newStmt(mb, mod, fimp);

				if (f->res && list_length(f->res)) {
					sql_subtype *res = f->res->h->data;

					setVarType(mb, getArg(q, 0), res->type->localtype);
					setVarUDFtype(mb, getArg(q, 0));
				}
			}
			if (LANG_EXT(f->func->lang))
				q = pushPtr(mb, q, f->func);
			if (f->func->lang == FUNC_LANG_R)
				q = pushStr(mb, q, f->func->query);
			//  first dynamic output of copy* functions
			if (f->func->type == F_UNION)
				q = table_func_create_result(mb, q, f->func, f->res);
			if (list_length(s->op1->op4.lval))
				tpe = tail_type(s->op1->op4.lval->h->data);
			if (strcmp(fimp, "round") == 0 && tpe && tpe->type->eclass == EC_DEC)
				special = 1;

			for (n = s->op1->op4.lval->h; n; n = n->next) {
				stmt *op = n->data;

				q = pushArgument(mb, q, op->nr);
				if (special) {
					q = pushInt(mb, q, tpe->digits);
					setVarUDFtype(mb, getArg(q, q->argc-1));
					q = pushInt(mb, q, tpe->scale);
					setVarUDFtype(mb, getArg(q, q->argc-1));
				}
				special = 0;
			}
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			//  keep reference to instruction
			s->rewritten = (void *) q;*/
		} break;
		case st_func:{
			printf("execute st_func\n");
/*
			char *mod = "user";
			char *fimp = s->op2->op4.aval->data.val.sval;
			sql_rel *rel = s->op4.rel;
			node *n;

			//  dump args
			if (s->op1 && _dumpstmt(sql, mb, s->op1) < 0)
				return -1;
			if (monet5_create_relational_function(sql->mvc, mod, fimp, rel, s, 1) < 0)
				 return -1;

			q = newStmt(mb, mod, fimp);
			q = relational_func_create_result(sql->mvc, mb, q, rel);
			if (s->op1)
				for (n = s->op1->op4.lval->h; n; n = n->next) {
					stmt *op = n->data;

					q = pushArgument(mb, q, op->nr);
				}
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			//  keep reference to instruction
			s->rewritten = (void *) q;*/
		} break;
		case st_aggr:{
			printf("execute st_aggr\n");
			ValPtr ret = (ValPtr) sa_alloc(sql->sa, sizeof(ValRecord));

			int no_nil = s->flag;
			ValPtr e = NULL, g = NULL, l = execute_stmt(sql, s->op1);
			char *mod, *aggrfunc;
			char aggrF[64];
			sql_subtype *res = s->op4.aggrval->res->h->data;
			int restype = res->type->localtype;
			int complex_aggr = 0;
			int abort_on_error, i, *stmt_nr = NULL;
			list *l_ptr = (list*) l->val.pval;
			bat retval_id;
			str msg;

			// TODO: check l
//			if (l < 0)
//				return -1;
//			if (backend_create_subaggr(sql, s->op4.aggrval) < 0)
//				return -1;
			mod = s->op4.aggrval->aggr->mod;
			aggrfunc = s->op4.aggrval->aggr->imp;

			if (strcmp(aggrfunc, "avg") == 0 || strcmp(aggrfunc, "sum") == 0 || strcmp(aggrfunc, "prod") == 0)
				complex_aggr = 1;
			// some "sub" aggregates have an extra
			 // argument "abort_on_error"
			abort_on_error = complex_aggr || strncmp(aggrfunc, "stdev", 5) == 0 || strncmp(aggrfunc, "variance", 8) == 0;

			if (s->op3) {
//				snprintf(aggrF, 64, "sub%s", aggrfunc);
//				aggrfunc = aggrF;
//				if ((g = _dumpstmt(sql, mb, s->op2)) < 0)
//					return -1;
//				if ((e = _dumpstmt(sql, mb, s->op3)) < 0)
//					return -1;
//
//				q = newStmt(mb, mod, aggrfunc);
//				if (q == NULL)
//					return -1;
//				setVarType(mb, getArg(q, 0), newBatType(TYPE_any, restype));
//				setVarUDFtype(mb, getArg(q, 0));
				assert(0);
			} else {
				// FIXME: what is this?!
				assert(!complex_aggr);
//				if (complex_aggr) {
//					setVarType(mb, getArg(q, 0), restype);
//					setVarUDFtype(mb, getArg(q, 0));
//				}
				assert(strcmp(mod, "aggr") == 0);
				if (strcmp(aggrfunc, "min") == 0) {
					msg = AGGRgrouped(&retval_id, NULL, (BAT*) ((ValPtr) l_ptr->h->data)->val.pval , g, e, TYPE_oid, BATgroupmin, NULL, NULL, 0, no_nil, NULL);

					// TODO: check msg
					ret->val.pval = (void*) BATdescriptor(retval_id);
					ret->vtype = TYPE_ptr;
					return ret;
				}
				// TODO: do other aggr funcs (of which there are like five)

				// TODO: do we have e?
				// TODO: get g if set


			}
			assert(0);
		}
			break;
		case st_atom:{
			atom *a = s->op4.aval;
			ValPtr vr = (ValPtr) &a->data;
			int tpe = atom_type(a)->type->localtype;
			ValPtr ret = (ValPtr) sa_alloc(sql->sa, sizeof(ValRecord));

			printf("execute st_atom\n");

			ret->vtype = tpe;

			if (atom_null(a)) {
				if (!tpe) {
					ret->vtype=TYPE_void;
					ret->val.oval= oid_nil;
				} else if (ATOMextern(tpe)) {
					ptr p = ATOMnil(tpe);
					VALset(ret, tpe, p);
				} else {
					ptr p = ATOMnilptr(tpe);
					VALset(ret, tpe, p);
				}
			} else {
				ret->vtype = 0;
				VALcopy(ret, vr);
			}

			return ret;
			}
			break;
		case st_append:{
			printf("execute st_append\n");
/*
			int l = 0;
			int r;

			if ((r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			q = newStmt(mb, batRef, appendRef);
			q = pushArgument(mb, q, l);
			q = pushArgument(mb, q, r);
			q = pushBit(mb, q, TRUE);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			*/
		} break;
		case st_update_col:
		case st_append_col:{
			printf("execute st_append_col\n");
/*
			int tids = _dumpstmt(sql, mb, s->op1), upd = 0;
			sql_column *c = s->op4.cval;
			char *n = (s->type == st_append_col) ? appendRef : updateRef;

			if (tids < 0)
				return -1;
			if (s->op2 && (upd = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			if (s->type == st_append_col && s->flag) {	//  fake append
				s->nr = tids;
			} else {
				q = newStmt(mb, sqlRef, n);
				q = pushArgument(mb, q, sql->mvc_var);
				if (q == NULL)
					return -1;
				getArg(q, 0) = sql->mvc_var = newTmpVariable(mb, TYPE_int);
				q = pushSchema(mb, q, c->t);
				q = pushStr(mb, q, c->t->base.name);
				q = pushStr(mb, q, c->base.name);
				q = pushArgument(mb, q, tids);
				if (s->op2)
					q = pushArgument(mb, q, upd);
				if (q == NULL)
					return -1;
				sql->mvc_var = s->nr = getDestVar(q);
			}*/
		}
			break;

		case st_update_idx:
		case st_append_idx:{
			printf("execute st_append_idx\n");
/*
			int tids = _dumpstmt(sql, mb, s->op1), upd = 0;
			sql_idx *i = s->op4.idxval;
			char *n = (s->type == st_append_idx) ? appendRef : updateRef;

			if (tids < 0)
				return -1;
			if (s->op2 && (upd = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			q = newStmt(mb, sqlRef, n);
			q = pushArgument(mb, q, sql->mvc_var);
			if (q == NULL)
				return -1;
			getArg(q, 0) = sql->mvc_var = newTmpVariable(mb, TYPE_int);
			q = pushSchema(mb, q, i->t);
			q = pushStr(mb, q, i->t->base.name);
			q = pushStr(mb, q, sa_strconcat(sql->mvc->sa, "%", i->base.name));
			q = pushArgument(mb, q, tids);
			if (s->op2)
				q = pushArgument(mb, q, upd);
			if (q == NULL)
				return -1;
			sql->mvc_var = s->nr = getDestVar(q);*/
		}
			break;
		case st_delete:{
			printf("execute st_delete\n");
/*
			int r = _dumpstmt(sql, mb, s->op1);
			sql_table *t = s->op4.tval;
			str mod = sqlRef;

			if (r < 0)
				return -1;
			q = newStmt(mb, mod, "delete");
			q = pushArgument(mb, q, sql->mvc_var);
			if (q == NULL)
				return -1;
			getArg(q, 0) = sql->mvc_var = newTmpVariable(mb, TYPE_int);
			q = pushSchema(mb, q, t);
			q = pushStr(mb, q, t->base.name);
			q = pushArgument(mb, q, r);
			if (q == NULL)
				return -1;
			sql->mvc_var = s->nr = getDestVar(q);*/
		} break;
		case st_table_clear:{
			printf("execute st_table_clear\n");
/*
			sql_table *t = s->op4.tval;
			str mod = sqlRef;

			q = newStmt(mb, mod, "clear_table");
			q = pushSchema(mb, q, t);
			q = pushStr(mb, q, t->base.name);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/
		} break;
		case st_exception:{
			printf("execute st_exception\n");
/*
			int l, r;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if ((r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;

			//  if(bit(l)) { error(r);}  ==raising an exception
			q = newStmt(mb, sqlRef, "assert");
			q = pushArgument(mb, q, l);
			q = pushArgument(mb, q, r);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);
			break;*/
		}
		case st_trans:{
			printf("execute st_trans\n");
/*
			int l, r = -1;

			if ((l = _dumpstmt(sql, mb, s->op1)) < 0)
				return -1;
			if (s->op2 && (r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			q = newStmt(mb, sqlRef, "trans");
			q = pushInt(mb, q, s->flag);
			q = pushArgument(mb, q, l);
			if (r > 0)
				q = pushArgument(mb, q, r);
			else
				q = pushNil(mb, q, TYPE_str);
			if (q == NULL)
				return -1;
			s->nr = getDestVar(q);*/
			break;
		}
		case st_catalog:{
			printf("execute st_catalog\n");
			ValPtr in_list = execute_stmt(sql,  s->op1);
			list *l = (list*) in_list->val.pval;
			str msg;
			assert(in_list->vtype == TYPE_ptr);
			assert(list_length(l) == 3);

			msg = create_table_or_view(sql, ((ValPtr)l->h->data)->val.sval, (sql_table*) ((ValPtr)l->h->next->data)->val.pval, ((ValPtr)l->h->next->next->data)->val.ival);
			if (msg != MAL_SUCCEED) {
				printf("%s\n", msg);
			}
			// TODO: handle other cases than creation of tables


			//FIXME: what should successful ops return?
			printf("finish st_catalog\n");

			return NULL;

			break;
		}
		case st_alias:
			printf("execute st_alias\n");
			return execute_stmt(sql, s->op1);

		case st_list: {
			printf("execute st_list\n");

			list *l = sa_list(sql->sa);
			ValPtr ret = (ValPtr) sa_alloc(sql->sa, sizeof(ValRecord));

			for (n = s->op4.lval->h; n; n = n->next) {
				// TODO: check return value of execute_stmt
				list_append(l, (void*) execute_stmt(sql, n->data));
			}
			ret->vtype = TYPE_ptr;
			ret->val.pval = (void*) l;
			return ret;
			}
			break;
		case st_rs_column:{
			printf("execute st_rs_column\n");
/*
			if (_dumpstmt(sql, mb, s->op1) < 0)
				return -1;
			q = (void *) s->op1->rewritten;
			s->nr = getArg(q, s->flag);*/
		} break;
		case st_affected_rows:{
			printf("execute st_affected_rows\n");
/*
			InstrPtr q;
			int o1 = _dumpstmt(sql, mb, s->op1);

			if (o1 < 0)
				return -1;
			q = newStmt(mb, sqlRef, "affectedRows");
			q = pushArgument(mb, q, sql->mvc_var);
			if (q == NULL)
				return -1;
			getArg(q, 0) = sql->mvc_var = newTmpVariable(mb, TYPE_int);
			q = pushArgument(mb, q, o1);
			if (q == NULL)
				return -1;
			sql->mvc_var = s->nr = getDestVar(q);
			*/
		} break;
		case st_output:{
			printf("execute st_output\n");

			stmt *lst = s->op1;
			ValPtr lst_res = execute_stmt(sql, lst);
			ValPtr ret = (ValPtr) sa_alloc(sql->sa, sizeof(ValRecord));

			res_table *tbl;
			if (lst->type == st_list) {
				list *l = lst->op4.lval;
				int cnt = list_length(l);
				stmt *first;

				n = l->h;
				first = n->data;

				//  single value result, has a fast exit
				if (cnt == 1 && first->nrcols <= 0 ){
					stmt *c = n->data;
					sql_subtype *t = tail_type(c);
					const char *tname = table_name(sql->sa, c);
					const char *sname = schema_name(sql->sa, c);
					const char *_empty = "";
					const char *tn = (tname) ? tname : _empty;
					const char *sn = (sname) ? sname : _empty;
					const char *cn = column_name(sql->sa, c);
					const char *ntn = sql_escape_ident(tn);
					const char *nsn = sql_escape_ident(sn);
					size_t fqtnl = strlen(ntn) + 1 + strlen(nsn) + 1;
					char *fqtn = NEW_ARRAY(char, fqtnl);

					snprintf(fqtn, fqtnl, "%s.%s", nsn, ntn);

					tbl = res_table_create(sql->session->tr, sql->result_id++, 1, Q_TABLE, NULL, NULL);
					res_col_create(sql->session->tr, tbl, tn, cn, t->type->localtype == TYPE_void ? "char" : t->type->sqlname, t->digits, t->scale, t->type->eclass, lst_res->val.pval);

					sql->results = tbl;
					ret->vtype = TYPE_ptr;
					ret->val.pval = (ptr) tbl;

					c_delete(ntn);
					c_delete(nsn);
					_DELETE(fqtn);
					// TODO : check if res is a valid result set

					return ret;
					break;
				}
				// TODO: what does this do?!
				//if ( (s->nr =dump_header(mvc, mb, s, l)) < 0)
				//	return -1;

			}
		}
		break;
		case st_export:{
			printf("execute st_export\n");
/*
			stmt *lst = s->op1;
			char *sep = NULL;
			char *rsep = NULL;
			char *ssep = NULL;
			char *ns = NULL;

			if (_dumpstmt(sql, mb, lst) < 0)
				return -1;

			if (lst->type == st_list) {
				list *l = lst->op4.lval;
				int file = -1 ;

				n = s->op4.lval->h;
				sep = n->data;
				rsep = n->next->data;
				ssep = n->next->next->data;
				ns = n->next->next->next->data;

				if (s->type == st_export && s->op2) {
					if ((file = _dumpstmt(sql, mb, s->op2)) < 0)
						return -1;
				}  else {
					q= newAssignment(mb);
					q = pushStr(mb,q,"stdout");
					file = getArg(q,0);
				}
				if ( (s->nr =dump_export_header(sql->mvc, mb, l, file, "csv", sep,rsep,ssep,ns)) < 0)
					return -1;
			} else {
				q = newStmt(mb, sqlRef, "raise");
				q = pushStr(mb, q, "not a valid output list\n");
				if (q == NULL)
					return -1;
				s->nr = 1;
			}*/
		}
		break;

		case st_table:{
			printf("execute st_table\n");
/*
			stmt *lst = s->op1;

			if (_dumpstmt(sql, mb, lst) < 0)
				return -1;

			if (lst->type != st_list) {
				q = newStmt(mb, sqlRef, "print");
				q = pushStr(mb, q, "not a valid output list\n");
				if (q == NULL)
					return -1;
			}
			s->nr = 1;*/
		}
			break;


		case st_cond:{
			printf("execute st_cond\n");
/*
			int c = _dumpstmt(sql, mb, s->op1);

			if (c < 0)
				return -1;
			if (!s->flag) {	//  if
				q = newAssignment(mb);
				if (q == NULL)
					return -1;
				q->barrier = BARRIERsymbol;
				q = pushArgument(mb, q, c);
				if (q == NULL)
					return -1;
				s->nr = getArg(q, 0);
			} else {	//  while
				int outer = _dumpstmt(sql, mb, s->op2);

				if (outer < 0)
					return -1;
				//  leave barrier
				q = newStmt(mb, calcRef, "not");
				q = pushArgument(mb, q, c);
				if (q == NULL)
					return -1;
				c = getArg(q, 0);

				q = newAssignment(mb);
				if (q == NULL)
					return -1;
				getArg(q, 0) = outer;
				q->barrier = LEAVEsymbol;
				q = pushArgument(mb, q, c);
				if (q == NULL)
					return -1;
				s->nr = outer;
			}*/
		} break;
		case st_control_end:{
			printf("execute st_control_end\n");
/*
			int c = _dumpstmt(sql, mb, s->op1);

			if (c < 0)
				return -1;
			if (s->op1->flag) {	//  while
				//  redo barrier
				q = newAssignment(mb);
				if (q == NULL)
					return -1;
				getArg(q, 0) = c;
				q->argc = q->retc = 1;
				q->barrier = REDOsymbol;
				q = pushBit(mb, q, TRUE);
				if (q == NULL)
					return -1;
			} else {
				q = newAssignment(mb);
				if (q == NULL)
					return -1;
				getArg(q, 0) = c;
				q->argc = q->retc = 1;
				q->barrier = EXITsymbol;
			}
			q = newStmt(mb, sqlRef, "mvc");
			if (q == NULL)
				return -1;
			sql->mvc_var = getDestVar(q);
			s->nr = getArg(q, 0);*/
		}
			break;
		case st_return:{
			printf("execute st_return\n");
/*
			int c = _dumpstmt(sql, mb, s->op1);

			if (c < 0)
				return -1;
			if (s->flag) {	//  drop declared tables
				InstrPtr k = newStmt(mb, sqlRef, "dropDeclaredTables");
				(void) pushInt(mb, k, s->flag);
			}
			q = newInstruction(mb, RETURNsymbol);
			if (q == NULL)
				return -1;
			if (s->op1->type == st_table) {
				list *l = s->op1->op1->op4.lval;

				q = dump_cols(mb, l, q);
			} else {
				getArg(q, 0) = getArg(getInstrPtr(mb, 0), 0);
				q = pushArgument(mb, q, c);
			}
			if (q == NULL)
				return -1;
			pushInstruction(mb, q);
			s->nr = 1;*/
		}
			break;
		case st_assign:{
			printf("execute st_assign\n");
/*
			int r = -1;

			if (s->op2 && (r = _dumpstmt(sql, mb, s->op2)) < 0)
				return -1;
			if (!VAR_GLOBAL(s->flag)) {	//  globals
				char *buf;
				char *vn = atom2string(sql->mvc->sa, s->op1->op4.aval);

				if (!s->op2) {
					//  drop declared table
					s->nr = drop_table(mb, vn);
					if (s->nr < 0)
						return -1;
					break;
				}
				buf = GDKmalloc(MAXIDENTLEN);
				if (buf == NULL)
					return -1;
				(void) snprintf(buf, MAXIDENTLEN, "A%s", vn);
				q = newInstruction(mb, ASSIGNsymbol);
				if (q == NULL) {
					GDKfree(buf);
					return -1;
				}
				q->argc = q->retc = 0;
				q = pushArgumentId(mb, q, buf);
				if (q == NULL)
					return -1;
				pushInstruction(mb, q);
				if (mb->errors)
					return -1;
				q->retc++;
				s->nr = 1;
			} else {
				int vn = _dumpstmt(sql, mb, s->op1);
				if (vn < 0)
					return -1;
				q = newStmt(mb, sqlRef, "setVariable");
				q = pushArgument(mb, q, sql->mvc_var);
				q = pushArgument(mb, q, vn);
				if (q == NULL)
					return -1;
				getArg(q, 0) = sql->mvc_var = newTmpVariable(mb, TYPE_int);
				sql->mvc_var = s->nr = getDestVar(q);
			}
			q = pushArgument(mb, q, r);
			if (q == NULL)
				return -1;*/
		} break;
		}


		return NULL;
	}

	return (0);
}



int main() {
	opt *set = NULL;
	volatile int setlen = 0;
	str retval = MAL_SUCCEED;
	buffer *b;
	//char* expr = "create table sys.a2(i integer);\n";
	char* expr = "select min(i) from sys.a2;\n";
	size_t len = strlen(expr);
	stream *buf;
	mvc *m = NULL;
	int err = 0;
	sql_rel *r;
	stmt *s;

	// bring up GDK
	if (setlocale(LC_CTYPE, "") == NULL) {
		retval = GDKstrdup("setlocale() failed");
		goto cleanup;
	}

	embedded_stdout = fopen(NULLFILE, "w");
	embedded_stderr = fopen(NULLFILE, "w");

	setlen = mo_builtin_settings(&set);
	setlen = mo_add_option(&set, setlen, opt_cmdline, "gdk_dbpath", dbdir);

	BBPaddfarm(dbdir, (1 << PERSISTENT) | (1 << TRANSIENT));
	if (GDKinit(set, setlen) == 0) {
		retval = GDKstrdup("GDKinit() failed");
		goto cleanup;
	}
	GDKsetenv("monet_mod_path", "");
	GDKsetenv("mapi_disable", "true");
	GDKsetenv("sql_optimizer", "sequential_pipe");


	// bring up SQL
	mvc_init(0, store_bat, 0, 1, 0);
	m = mvc_create(42, 0, 0, NULL, NULL);

	if (!m->sa)
		m->sa = sa_create();

	m->role_id = ROLE_SYSADMIN;

	// bring up scanner
	b = (buffer *) GDKmalloc(sizeof(buffer));
	buffer_init(b, expr, len);
	buf = buffer_rastream(b, "sqlstatement");

	scanner_init(&m->scanner, bstream_create(buf, b->len), file_wastream(stdout, "stdout"));
	bstream_next(m->scanner.rs);

	// parse frickin query
	m->sym = NULL;
	if ((err = sqlparse(m)) ||
		(mvc_status(m) && m->type != Q_TRANS) || !m->sym) {
		goto cleanup;
	}

	r = sql_symbol2relation(m, m->sym);
	if (!r) goto cleanup;
	rel_print(m, r, 0);

	mvc_trans(m);

	printf("\n");

	s = sql_relation2stmt(m, r);

	print_tree(m->sa, s);
	printf("\n");


	execute_stmt(m, s);

	mvc_commit(m, 0, NULL);

	printf("OK\n");
	return 0;
	cleanup:
		printf("NOT COOL %s\n", m->errstr);
		return -1;
}
