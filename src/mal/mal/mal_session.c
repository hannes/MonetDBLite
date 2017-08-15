/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

/* (author) M.L. Kersten
 */
#include "monetdb_config.h"
#include "mal_session.h"
#include "mal_instruction.h" /* for pushEndInstruction() */
#include "mal_interpreter.h" /* for showErrors(), runMAL(), garbageElement() */
#include "mal_parser.h"	     /* for parseMAL() */
#include "mal_namespace.h"
#include "mal_builder.h"
#include "mal_private.h"
#include <gdk.h>	/* for opendir and friends */

/*
 * The MonetDB server uses a startup script to boot the system.
 * This script is an ordinary MAL program, but will mostly
 * consist of include statements to load modules of general interest.
 * The startup script is run as user Admin.
 */
int
malBootstrap(void)
{
	Client c;
	str msg, bootfile = "mal_init", s = NULL;

	c = MCinitClient((oid) 0, 0, 0);
	if (!c) {
		GDKerror("malBootstrap: Failed to initialize client");
		return 0;
	}
	c->nspace = newModule(NULL, putName("user"));
	if ( (msg = defaultScenario(c)) ) {
		freeException(msg);
		MALexitClient(c);
		GDKerror("malBootstrap: Failed to initialize default scenario");
		return 0;
	}
	MSinitClientPrg(c, "user", "main");
	if( MCinitClientThread(c) < 0){
		MALexitClient(c);
		GDKerror("malBootstrap: Failed to create client thread");
		return 0;
	}
	s = malInclude(c, bootfile, 0);
	if (s != NULL) {
		GDKerror("malBootstrap: Failed to load startup script %s", s);
		MALexitClient(c);
		GDKfree(s);
		return 0;
	}
	pushEndInstruction(c->curprg->def);
	chkProgram(c->fdout, c->nspace, c->curprg->def);
	if (c->curprg->def->errors) {
		GDKerror("malBootstrap: Failed to check startup script %s", GDKerrbuf);
		MALexitClient(c);
		return 0;
	}
	s = MALengine(c);
	if (s != MAL_SUCCEED) {
		GDKfree(s);
		return 0;
	}
	MALexitClient(c);
	return 1;
}

/*
 * Every client has a 'main' function to collect the statements.  Once
 * the END instruction has been found, it is added to the symbol table
 * and a fresh container is being constructed.  Note, this scheme makes
 * testing for recursive function calls a little more difficult.
 * Therefore, type checking should be performed afterwards.
 *
 * In interactive mode,  the closing statement is never reached.  The
 * 'main' procedure is typically cleaned between successive external
 * messages except for its variables, which are considerd global.  This
 * storage container is re-used when during the previous call nothing
 * was added.  At the end of the session we have to garbage collect the
 * BATs introduced.
 */
static void
MSresetClientPrg(Client cntxt)
{
	MalBlkPtr mb;
	InstrPtr p;

	cntxt->itrace = 0;  /* turn off any debugging */
	mb = cntxt->curprg->def;
	mb->typefixed = 0;
	mb->flowfixed = 0;
	mb->stop = 1;
	mb->errors = 0;
	p = mb->stmt[0];

	p->gc = 0;
	p->retc = 1;
	p->argc = 1;
	setModuleId(p, putName("user"));
	setFunctionId(p, putName("main"));
	/* remove any MAL history */
	if (mb->history) {
		freeMalBlk(mb->history);
		mb->history = 0;
	}
}

void
MSinitClientPrg(Client cntxt, str mod, str nme)
{
	InstrPtr p;
	MalBlkPtr mb;

	if (cntxt->curprg && idcmp(nme, cntxt->curprg->name) == 0) {
		MSresetClientPrg(cntxt);
		return;
	}
	if (cntxt->nspace == 0) {
		cntxt->nspace = newModule(NULL, putName("user"));
	}
	cntxt->curprg = newFunction(putName("user"), putName(nme), FUNCTIONsymbol);
	if( cntxt->curprg == 0){
		GDKerror("MSinitClientPrg" "Failed to create function");
		return;
	}
	mb = cntxt->curprg->def;
	p = getSignature(cntxt->curprg);
	if (mod)
		setModuleId(p, mod);
	else
		setModuleScope(p, cntxt->nspace);
	setVarType(mb, findVariable(mb, nme), TYPE_void);
	insertSymbol(cntxt->nspace, cntxt->curprg);
	cntxt->glb = 0;
	assert(cntxt->curprg->def != NULL);
}




/*
 * After the client initialization has been finished, we can start the
 * interaction protocol. This involves parsing the input in the context
 * of an already defined procedure and upon success, its execution.
 *
 * In essence, this calls for an incremental parsing operation, because
 * we should wait until a complete basic block has been detected.  Test,
 * first collect the instructions before we take them all.
 *
 * In interactive mode, we should remove the instructions before
 * accepting new ones. The function signature remains the same and the
 * symbol table should also not be affected.  Aside from removing
 * instruction, we should also condense the variable stack, i.e.
 * removing at least the temporary variables, but maybe everything
 * beyond a previous defined point.
 *
 * Beware that we have to cleanup the global stack as well. This to
 * avoid subsequent calls to find garbage information.  However, this
 * action is only required after a successful execution.  Otherwise,
 * garbage collection is not needed.
 */
void
MSresetInstructions(MalBlkPtr mb, int start)
{
	int i;
	InstrPtr p;

	for (i = start; i < mb->ssize; i++) {
		p = getInstrPtr(mb, i);
		if (p)
			freeInstruction(p);
		mb->stmt[i] = NULL;
	}
	mb->stop = start;
}

/*
 * Determine the variables being used and clear non-used onces.
 */
void
MSresetVariables(Client cntxt, MalBlkPtr mb, MalStkPtr glb, int start)
{
	int i;

	for (i = 0; i < start && start < mb->vtop; i++)
		setVarUsed(mb,i);
	if (mb->errors == 0)
		for (i = start; i < mb->vtop; i++) {
			if (isVarUsed(mb,i) || !isTmpVar(mb,i)){
				assert(!mb->var[i].value.vtype || isVarConstant(mb, i));
				setVarUsed(mb,i);
			}
			if (glb && !isVarUsed(mb,i)) {
				if (isVarConstant(mb, i))
					garbageElement(cntxt, &glb->stk[i]);
				/* clean stack entry */
				glb->stk[i].vtype = TYPE_int;
				glb->stk[i].len = 0;
				glb->stk[i].val.pval = 0;
			}
		}

	if (mb->errors == 0)
		trimMalVariables_(mb, glb);
}

/*
 * The stages of processing user requests are controlled by a scenario.
 * The routines below are the default implementation.  The main issues
 * to deal after parsing it to clean out the Admin.main function from
 * any information added erroneously.
 *
 * Ideally this involves resetting the state of the client 'main'
 * function, i.e. the symbol table is reset and any instruction added
 * should be cleaned. Beware that the instruction table may have grown
 * in size.
 */
str
MALinitClient(Client c)
{
	assert(c->state[0] == NULL);
	c->state[0] = c;
	return NULL;
}

str
MALexitClient(Client c)
{
	if (c->glb && c->curprg->def->errors == 0)
		garbageCollector(c, c->curprg->def, c->glb, TRUE);
	if (c->bak)
		return NULL;
	c->mode = FINISHCLIENT;
	if (c->backup) {
		assert(0);
		freeSymbol(c->backup);
		c->backup = NULL;
	}
	/* should be in the nspace */
	c->curprg = NULL;
	if (c->nspace) {
		freeModule(c->nspace);
		c->nspace = NULL;
	}
	return NULL;
}

str
MALreader(Client c)
{
	if (MCreadClient(c) > 0)
		return MAL_SUCCEED;
	MT_lock_set(&mal_contextLock);
	c->mode = FINISHCLIENT;
	MT_lock_unset(&mal_contextLock);
	if (c->fdin)
		c->fdin->buf[c->fdin->pos] = 0;
	else
		throw(MAL, "mal.reader", RUNTIME_IO_EOF);
	return MAL_SUCCEED;
}

str
MALparser(Client c)
{
	InstrPtr p;
	MalBlkRecord oldstate;

	c->curprg->def->errors = 0;
	oldstate = *c->curprg->def;

	if( prepareMalBlk(c->curprg->def, CURRENT(c))){
		throw(MAL, "mal.parser", MAL_MALLOC_FAIL);
	}
	if (parseMAL(c, c->curprg, 0) || c->curprg->def->errors) {
		/* just complete it for visibility */
		pushEndInstruction(c->curprg->def);
		/* caught errors */
		showErrors(c);
		if (c->listing)
			printFunction(c->fdout, c->curprg->def, 0, c->listing);
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		/* now the parsing is done we should advance the stream */
		c->fdin->pos += c->yycur;
		c->yycur = 0;
		throw(SYNTAX, "mal.parser", SYNTAX_GENERAL MANUAL_HELP);
	}

	/* now the parsing is done we should advance the stream */
	c->fdin->pos += c->yycur;
	c->yycur = 0;

	/* check for unfinished blocks */
	if (c->blkmode)
		return MAL_SUCCEED;
	/* empty files should be skipped as well */
	if (c->curprg->def->stop == 1)
		return MAL_SUCCEED;

	p = getInstrPtr(c->curprg->def, 0);
	if (p->token != FUNCTIONsymbol) {
		if (c->listing)
			printFunction(c->fdout, c->curprg->def, 0, c->listing);
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		throw(SYNTAX, "mal.parser", SYNTAX_SIGNATURE);
	}
	pushEndInstruction(c->curprg->def);
	chkProgram(c->fdout, c->nspace, c->curprg->def);
	if (c->curprg->def->errors) {
		showErrors(c);
		if (c->listing)
			printFunction(c->fdout, c->curprg->def, 0, c->listing);
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		throw(MAL, "MAL.parser", SEMANTIC_GENERAL);
	}
	return MAL_SUCCEED;
}

int
MALcommentsOnly(MalBlkPtr mb)
{
	int i;

	for (i = 1; i < mb->stop; i++)
		if (mb->stmt[i]->token != REMsymbol)
			return 0;
	return 1;
}

str
MALengine(Client c)
{
	Symbol prg;
	str msg = MAL_SUCCEED;
	MalBlkRecord oldstate = *c->curprg->def;
	oldstate.stop = 0;

	if (c->blkmode)
		return MAL_SUCCEED;
	prg = c->curprg;
	if (prg == NULL)
		throw(SYNTAX, "mal.engine", SYNTAX_SIGNATURE);
	if (prg->def == NULL)
		throw(SYNTAX, "mal.engine", SYNTAX_SIGNATURE);

	if (prg->def->errors > 0) {
		showErrors(c);
		if (c->listing)
			printFunction(c->fdout, c->curprg->def, 0, c->listing);
		MSresetVariables(c, c->curprg->def, c->glb, oldstate.vtop);
		resetMalBlk(c->curprg->def, 1);
		throw(MAL, "mal.engine", PROGRAM_GENERAL);
	}
	if (prg->def->stop == 1 || MALcommentsOnly(prg->def))
		return 0;   /* empty block */
	if (c->glb) {
		if (prg->def && c->glb->stksize < prg->def->vsize){
			c->glb = reallocGlobalStack(c->glb, prg->def->vsize);
			if( c->glb == NULL)
				throw(MAL, "mal.engine", MAL_MALLOC_FAIL);
		}
		c->glb->stktop = prg->def->vtop;
		c->glb->blk = prg->def;
		c->glb->cmd = (c->itrace && c->itrace != 'C') ? 'n' : 0;
	}
	if (c->listing > 1)
		printFunction(c->fdout, c->curprg->def, 0, c->listing);

	/*
	 * In interactive mode we should avoid early garbage collection of values.
	 * This can be controlled by the clean up control at the instruction level
	 * and marking all non-temporary variables as being (potentially) used.
	 */
	if (c->glb) {
		c->glb->pcup = 0;
		c->glb->keepAlive = TRUE; /* no garbage collection */
	}
	if (prg->def->errors == 0)
		msg = (str) runMAL(c, prg->def, 0, c->glb);
	if (msg) {
		/* ignore "internal" exceptions */
		str fcn = getExceptionPlace(msg); /* retrieves from "first" exception */
		if (strcmp(fcn, "client.quit") != 0)
			dumpExceptionsToStream(c->fdout, msg);
		GDKfree(fcn);
		if (!c->listing)
			printFunction(c->fdout, c->curprg->def, 0, c->listing);
		showErrors(c);
	}
	MSresetVariables(c, prg->def, c->glb, 0);
	resetMalBlk(prg->def, 1);
	if (c->glb) {
		/* for global stacks avoid reinitialization from this point */
		c->glb->stkbot = prg->def->vtop;
	}
	prg->def->errors = 0;
	if (c->itrace)
		mnstr_printf(c->fdout, "mdb>#EOD\n");
	return msg;
}
