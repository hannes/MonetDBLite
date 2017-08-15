/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

/*
 * N. Nes, M.L. Kersten
 * The queries are stored in the user cache after they have been
 * type checked and optimized.
 */
#include "monetdb_config.h"
#include "mal_builder.h"
#include "mal_runtime.h"
#include "opt_prelude.h"
#include "sql_mvc.h"
#include "sql_optimizer.h"
#include "sql_scenario.h"
#include "sql_gencode.h"
#include "opt_pipes.h"


/* gather the optimizer pipeline defined in the current session */
str
getSQLoptimizer(mvc *m)
{
	char *opt = stack_get_string(m, "optimizer");
	char *pipe = "default_pipe";

	if (opt)
		pipe = opt;
	return pipe;
}

static str
addOptimizers(Client c, MalBlkPtr mb, char *pipe, int prepare)
{
	int i;
	InstrPtr q;
	backend *be;
	str msg= MAL_SUCCEED;

	(void) prepare;
	be = (backend *) c->sqlcontext;
	assert(be && be->mvc);	/* SQL clients should always have their state set */

	pipe = pipe? pipe: "default_pipe";
	msg = addOptimizerPipe(c, mb, pipe);
	if (msg){
		return msg;
	}
	mb->keephistory |= be->mvc->emod & mod_debug;
	if (be->mvc->no_mitosis) {
		for (i = mb->stop - 1; i > 0; i--) {
			q = getInstrPtr(mb, i);
			if (q->token == ENDsymbol)
				break;
			if (getFunctionId(q) == mitosisRef || getFunctionId(q) == dataflowRef)
				q->token = REMsymbol;	/* they are ignored */
		}
	}
	addtoMalBlkHistory(mb);
	return msg;
}

/* Queries that should rely on the latest consolidated state
 * are not allowed to remove sql.binds operations.
 */

str
SQLoptimizeFunction(Client c, MalBlkPtr mb)
{
	str msg;
	str pipe;
	backend *be = (backend *) c->sqlcontext;
	assert(be && be->mvc);	/* SQL clients should always have their state set */

	pipe = getSQLoptimizer(be->mvc);
	msg = addOptimizers(c, mb, pipe, TRUE);
	if (msg)
		return msg;
	mb->keephistory |= be->mvc->emod & mod_debug;
	msg = optimizeMALBlock(c, mb);
	mb->keephistory = FALSE;
	return msg;
}

str
SQLoptimizeQuery(Client c, MalBlkPtr mb)
{
	backend *be;
	str msg = 0;
	str pipe;

	if (mb->stop > 0 &&
	    mb->stmt[mb->stop-1]->token == REMsymbol &&
	    mb->stmt[mb->stop-1]->argc > 0 &&
	    mb->var[mb->stmt[mb->stop-1]->argv[0]].value.vtype == TYPE_str &&
	    mb->var[mb->stmt[mb->stop-1]->argv[0]].value.val.sval &&
	    strncmp(mb->var[mb->stmt[mb->stop-1]->argv[0]].value.val.sval, "total", 5) == 0)
		return MAL_SUCCEED; /* already optimized */

	be = (backend *) c->sqlcontext;
	assert(be && be->mvc);	/* SQL clients should always have their state set */

	c->blkmode = 0;
	chkProgram(c->fdout, c->nspace, mb);

	/*
	 * An error in the compilation should be reported to the user.
	 * And if the debugging option is set, the debugger is called
	 * to allow inspection.
	 */
	if (mb->errors) {
		showErrors(c);

		if (c->listing)
			printFunction(c->fdout, mb, 0, c->listing);
		return NULL;
	}

	pipe = getSQLoptimizer(be->mvc);
	msg = addOptimizers(c, mb, pipe, FALSE);
	if (msg)
		return msg;
	mb->keephistory |= be->mvc->emod & mod_debug;
	msg = optimizeMALBlock(c, mb);
	return msg;
}

/* queries are added to the MAL catalog  under the client session namespace */
void
SQLaddQueryToCache(Client c)
{
	insertSymbol(c->nspace, c->curprg);
}

