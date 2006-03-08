/**
 * @file
 *
 * Functions related to algebra tree optimization.
 * (Generic stuff for logical algebra.)
 *
 * Copyright Notice:
 * -----------------
 *
 * The contents of this file are subject to the Pathfinder Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 * http://monetdb.cwi.nl/Legal/PathfinderLicense-1.1.html
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is the Pathfinder system.
 *
 * The Initial Developer of the Original Code is the Database &
 * Information Systems Group at the University of Konstanz, Germany.
 * Portions created by the University of Konstanz are Copyright (C)
 * 2000-2006 University of Konstanz.  All Rights Reserved.
 *
 * $Id$
 */

#ifndef ALG_DAG_H
#define ALG_DAG_H

#include <logical.h>

/*
 * Reset the DAG bit of the logical algebra tree.
 * (it requires a clean reset bit to traverse
 *  the logical tree as DAG.)
 */
void PFla_dag_reset (PFla_op_t *n);

#endif  /* ALG_DAG_H */

/* vim:set shiftwidth=4 expandtab: */
