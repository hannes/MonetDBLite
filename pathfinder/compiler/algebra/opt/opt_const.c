/**
 * @file
 *
 * Optimize relational algebra expression DAG
 * based on the constant property.
 * (This requires no burg pattern matching as we 
 *  apply optimizations in a peep-hole style on 
 *  single nodes only.)
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
 * 2000-2005 University of Konstanz.  All Rights Reserved.
 *
 * $Id$
 */

/* always include pathfinder.h first! */
#include "pathfinder.h"
#include <assert.h>
#include <stdio.h>

#include "algopt.h"
#include "properties.h"
#include "alg_dag.h"
#include "mem.h"          /* PFmalloc() */

/*
 * Easily access subtree-parts.
 */
/** starting from p, make a step left */
#define L(p) ((p)->child[0])
/** starting from p, make a step right */
#define R(p) ((p)->child[1])

#define SEEN(p) ((p)->bit_dag)

/**
 * Adds a superfluous attach node. An additional projection
 * operator ensures that the attached attribute is projected away
 * before. In combination with other optimizations this rewrite
 * ensures that constants are introduced at the latest point in
 * the plan (previous unreferenced appearances will be removed).
 */
static PFla_op_t *
add_attach (PFla_op_t *p, PFalg_att_t att, PFalg_atom_t value)
{
    PFla_op_t *rel;
    unsigned int count = 0;
    PFalg_proj_t *atts = PFmalloc ((p->schema.count - 1)
                                    * sizeof (PFalg_proj_t));

    /* avoid attach if @a att is the only column */
    if (p->schema.count == 1) return p;

    for (unsigned int i = 0; i < p->schema.count; i++)
        if (p->schema.items[i].name != att)
            atts[count++] = PFalg_proj (p->schema.items[i].name,
                                        p->schema.items[i].name);

    rel = PFla_attach (PFla_project_ (p, count, atts), att, value);

    return rel;
}

/* worker for PFalgopt_const */
static void
opt_const (PFla_op_t *p, bool no_attach)
{
    assert (p);

    /* rewrite each node only once */
    if (SEEN(p))
        return;
    else
        SEEN(p) = true;

    /* apply constant optimization for children */
    for (unsigned int i = 0; i < PFLA_OP_MAXCHILD && p->child[i]; i++)
        opt_const (p->child[i], no_attach);

    /* avoid applying rules that only introduce new attach
       nodes (e.g. during second constant optimzation run)*/
    if (no_attach)
        switch (p->kind) {
            case la_eqjoin:
            case la_select:
            case la_distinct:
                /* these rules apply a 'real rewrite'
                   and therefore continue */
                break;
            default:
                return;
        }

    /* action code */
    switch (p->kind) {
        case la_serialize:
            /* introduce attach if necessary */
            if (PFprop_const_right (p->prop, att_pos)) {
                R(p) = add_attach (R(p), att_pos,
                                   PFprop_const_val_right (p->prop,
                                                           att_pos));
            }
            if (PFprop_const_right (p->prop, att_item)) {
                R(p) = add_attach (R(p), att_item,
                                   PFprop_const_val_right (p->prop,
                                                           att_item));
            }
            break;

        case la_eqjoin:
        {   /**
             * If both join columns are constant
             * we can replace the eqjoin by one of the
             * following expressions:
             *
             * (a) if the comparison of att1 and att2
             *     is stable regarding different implementations
             *     (e.g. comparisons on integer, boolean, or
             *      native numbers)
             *
             *      case true:         case false:
             *
             *          X               empty_tbl
             *         / \
             *      Rel1 Rel2
             *
             * (b) otherwise      X
             *                  /   \
             *           ------/     \------
             *          /                   \
             * project(schema(Rel1)) project(schema(Rel2))
             *         |                     |
             *     select (new)          select (new)
             *         |                     |
             *  = new:<att1,att2>    = new:<att2,att1>
             *         |                     |
             *      @ att2                @ att1
             *         |                     |
             *       Rel1                  Rel2
             */
            PFalg_att_t att1, att2;
            att1 = p->sem.eqjoin.att1;
            att2 = p->sem.eqjoin.att2;

            if (PFprop_const_left (p->prop, att1) &&
                PFprop_const_right (p->prop, att2)) {
                PFla_op_t *ret, *left, *right;
                PFalg_proj_t *left_atts, *right_atts;
                PFalg_att_t res;
                PFalg_simple_type_t ty;

                ty = (PFprop_const_val (p->prop, att1)).type;

                /* (a) the comparison between att1 and att2 is stable */
                if (ty == aat_nat || ty == aat_int ||
                    ty == aat_bln || ty == aat_qname) {

                    if (!PFalg_atom_cmp (
                             PFprop_const_val (p->prop, att1),
                             PFprop_const_val (p->prop, att2))) {
                        /* replace join by cross product */
                        ret = PFla_cross (L(p), R(p));
                    } else {
                        /* replace join by empty table */
                        PFalg_att_t   *atts = PFmalloc (p->schema.count *
                                                    sizeof (PFalg_att_t));

                        for (unsigned int i = 0; i < p->schema.count; i++)
                             atts[i] = p->schema.items[i].name;

                        ret = PFla_empty_tbl (PFalg_attlist_ (p->schema.count,
                                                              atts));
                    }
                    *p = *ret;
                    SEEN(p) = true;
                    break;
                }
                /* (b) otherwise: */

                /* find unused attribute */
                for (res = 1 << 30; res > 0; res >>= 1)
                    if (!PFprop_ocol (p, res)) break;

                /* prepare projection list for left subtree */
                left_atts = PFmalloc (L(p)->schema.count
                                      * sizeof (PFalg_proj_t));

                for (unsigned int i = 0; i < L(p)->schema.count; i++)
                    left_atts[i] = PFalg_proj (L(p)->schema.items[i].name,
                                               L(p)->schema.items[i].name);

                /* generate modified left subtree */
                left = PFla_project_ (
                           PFla_select (
                               PFla_eq (
                                   PFla_attach (
                                       L(p), att2,
                                       PFprop_const_val_right (
                                           p->prop, att2)),
                                   res, att1, att2),
                               res),
                           L(p)->schema.count,
                           left_atts);

                /* prepare projection list for right subtree */
                right_atts = PFmalloc (L(p)->schema.count
                                       * sizeof (PFalg_proj_t));

                for (unsigned int i = 0; i < R(p)->schema.count; i++)
                    right_atts[i] = PFalg_proj (R(p)->schema.items[i].name,
                                                R(p)->schema.items[i].name);

                /* generate modified right subtree */
                right = PFla_project_ (
                            PFla_select (
                                PFla_eq (
                                    PFla_attach (
                                        R(p), att1,
                                        PFprop_const_val_left (
                                            p->prop, att1)),
                                    res, att1, att2),
                                res),
                            R(p)->schema.count,
                            right_atts);

                /* combine both subtrees */
                ret = PFla_cross (left, right);

                *p = *ret;
                SEEN(p) = true;
            }
            /**
             * If one join column (here att1) is constant
             * we can replace the eqjoin by the following expression:
             *
             *               X
             *             /   \
             *            /     \
             *         Rel1   project (schema(Rel2)
             *                   |
             *                select (new)
             *                   |
             *                   = new:<att2,att1>
             *                   |
             *                   @ att1
             *                   |
             *                 Rel2
             */
            else if (PFprop_const_left (p->prop, att1)) {
                PFla_op_t *ret, *right;
                PFalg_proj_t *right_atts;
                PFalg_att_t res;

                /* find unused attribute */
                for (res = 1 << 30; res > 0; res >>= 1)
                    if (!PFprop_ocol (p, res)) break;

                /* prepare projection list for right subtree */
                right_atts = PFmalloc (R(p)->schema.count
                                       * sizeof (PFalg_proj_t));

                for (unsigned int i = 0; i < R(p)->schema.count; i++)
                    right_atts[i] = PFalg_proj (R(p)->schema.items[i].name,
                                                R(p)->schema.items[i].name);

                /* generate modified right subtree */
                right = PFla_project_ (
                            PFla_select (
                                PFla_eq (
                                    PFla_attach (
                                        R(p), att1,
                                        PFprop_const_val_left (
                                            p->prop, att1)),
                                    res, att1, att2),
                                res),
                            R(p)->schema.count,
                            right_atts);

                /* combine both subtrees */
                ret = PFla_cross (L(p), right);

                *p = *ret;
                SEEN(p) = true;
            }
            else if (PFprop_const_right (p->prop, att2)) {
                PFla_op_t *ret, *left;
                PFalg_proj_t *left_atts;
                PFalg_att_t res;

                /* find unused attribute */
                for (res = 1 << 30; res > 0; res >>= 1)
                    if (!PFprop_ocol (p, res)) break;

                /* prepare projection list for left subtree */
                left_atts = PFmalloc (L(p)->schema.count
                                      * sizeof (PFalg_proj_t));

                for (unsigned int i = 0; i < L(p)->schema.count; i++)
                    left_atts[i] = PFalg_proj (L(p)->schema.items[i].name,
                                               L(p)->schema.items[i].name);

                /* generate modified left subtree */
                left = PFla_project_ (
                           PFla_select (
                               PFla_eq (
                                   PFla_attach (
                                       L(p), att2,
                                       PFprop_const_val_right (
                                           p->prop, att2)),
                                   res, att1, att2),
                               res),
                           L(p)->schema.count,
                           left_atts);

                /* combine both subtrees */
                ret = PFla_cross (left, R(p));

                *p = *ret;
                SEEN(p) = true;
            }
        }   break;

        case la_select:
            /**
             * if select criterium is constant we have two options:
             * - true : remove select
             * - false: replace select by an empty_tbl
             */
            if (PFprop_const_left (p->prop, p->sem.select.att)) {
                if (PFprop_const_val_left (p->prop, 
                                           p->sem.select.att).val.bln) {
                    *p = *(L(p));
                    break;
                } else {
                    PFla_op_t *ret;
                    PFalg_att_t   *atts = PFmalloc (p->schema.count *
                                                sizeof (PFalg_att_t));

                    for (unsigned int i = 0; i < p->schema.count; i++)
                         atts[i] = p->schema.items[i].name;

                    ret = PFla_empty_tbl (PFalg_attlist_ (p->schema.count, atts));

                    *p = *ret;
                    SEEN(p) = true;
                    break;
                }
            }
            break;

        case la_difference:
        {   /**
             * difference can pruned if all columns of both operands
             * are constant and the comparison between the single
             * columns are stable (in respect to the implementations)
             * e.g. type integer or native.
             *
             * If all columns contain the same values the difference
             * can be replaced by an empty literal table. Otherwise
             * no rows in the left argument get pruned and the
             * difference can be discarded.
             */
            PFalg_att_t att;
            bool same_rows = true;
            bool all_match = true;

            for (unsigned int i = 0; i < p->schema.count; i++) {
                att = p->schema.items[i].name;
                same_rows = same_rows &&
                            PFprop_const_left (p->prop, att) &&
                            PFprop_const_right (p->prop, att) &&
                            (PFprop_const_val_left (p->prop,
                                                    att)).type == aat_nat &&
                            (PFprop_const_val_right (p->prop,
                                                     att)).type == aat_nat;
                if (same_rows)
                    all_match = all_match &&
                                !PFalg_atom_cmp (
                                     PFprop_const_val_left (p->prop, att),
                                     PFprop_const_val_right (p->prop, att));
            }

            if (same_rows) {
                if (all_match) {
                    /* for each tuple in the left argument there
                       exists one in the right argument - thus
                       return empty_tbl */
                    PFla_op_t *ret;
                    PFalg_att_t   *atts = PFmalloc (p->schema.count *
                                                sizeof (PFalg_att_t));

                    for (unsigned int i = 0; i < p->schema.count; i++)
                         atts[i] = p->schema.items[i].name;

                    ret = PFla_empty_tbl (PFalg_attlist_ (p->schema.count,
                                                          atts));
                    *p = *ret;
                    SEEN(p) = true;
                } else {
                    /* we have no matches -- thus the left argument
                       remains unchanged and the difference is superfluous */
                    *p = *(L(p));
                }
            }
        }   break;

        case la_distinct:
        {
            unsigned int i, count;

            /* check number of non-constant columns */
            for (count = 0, i = 0; i < p->schema.count; i++)
                if (!PFprop_const (p->prop, p->schema.items[i].name))
                    count++;

            if (count && count < p->schema.count) {
                /* to avoid distinct on constant columns remove all constant
                columns before applying distinct and attach them afterwards
                again. */
                PFla_op_t *ret;
                PFalg_proj_t *atts = PFmalloc (count * sizeof (PFalg_proj_t));

                for (count = 0, i = 0; i < p->schema.count; i++)
                    if (!PFprop_const (p->prop, p->schema.items[i].name))
                        atts[count++] = PFalg_proj (p->schema.items[i].name,
                                                    p->schema.items[i].name);

                /* introduce project before distinct */
                ret = PFla_distinct (PFla_project_ (L(p), count, atts));

                /* attach constant columns afterwards */
                for (i = 0; i < p->schema.count; i++)
                    if (PFprop_const (p->prop, p->schema.items[i].name))
                        ret = PFla_attach (ret,
                                           p->schema.items[i].name,
                                           PFprop_const_val (
                                               p->prop,
                                               p->schema.items[i].name));

                *p = *ret;
                SEEN(p) = true;
            } else if (!count) {
                /* as all columns are constant, the distinct operator
                   can be replaced by lit_tbl of the current schema
                   whose single row contains the constant values */
                PFla_op_t *ret;
                PFalg_att_t *atts = PFmalloc (p->schema.count *
                                              sizeof (PFalg_att_t));
                PFalg_atom_t *atoms = PFmalloc (p->schema.count *
                                                sizeof (PFalg_atom_t));

                for (i = 0; i < p->schema.count; i++) {
                    atts[i] = p->schema.items[i].name;
                    atoms[i] = PFprop_const_val (p->prop,
                                                 p->schema.items[i].name);
                }
                ret = PFla_lit_tbl (PFalg_attlist_ (i, atts),
                                    PFalg_tuple_ (i, atoms));

                *p = *ret;
                SEEN(p) = true;
            }
        } break;

        case la_num_add:
        case la_num_subtract:
        case la_num_multiply:
        case la_num_divide:
        case la_num_modulo:
        case la_num_eq:
        case la_num_gt:
        case la_bool_and:
        case la_bool_or:
        case la_concat:
        case la_contains:
            /* introduce attach if necessary */
            if (PFprop_const (p->prop, p->sem.binary.att1)) {
                L(p) = add_attach (L(p), p->sem.binary.att1,
                                   PFprop_const_val (p->prop,
                                                     p->sem.binary.att1));
            }
            if (PFprop_const (p->prop, p->sem.binary.att2)) {
                L(p) = add_attach (L(p), p->sem.binary.att2,
                                   PFprop_const_val (p->prop,
                                                     p->sem.binary.att2));
            }
            break;

        case la_num_neg:
        case la_bool_not:
            /* introduce attach if necessary */
            if (PFprop_const (p->prop, p->sem.unary.att)) {
                L(p) = add_attach (L(p), p->sem.unary.att,
                                   PFprop_const_val (p->prop,
                                                     p->sem.unary.att));
            }
            break;

        case la_sum:
            /* introduce attach if necessary */
            if (PFprop_const_left (p->prop, p->sem.sum.att)) {
                L(p) = add_attach (L(p), p->sem.sum.att,
                                   PFprop_const_val_left (p->prop,
                                                          p->sem.sum.att));
            }

            /* if partitiong attribute is constant remove it
               and attach it after the operator */
            if (p->sem.sum.part &&
                PFprop_const_left (p->prop, p->sem.sum.part)) {
                PFla_op_t *sum = PFla_sum (L(p),
                                           p->sem.sum.res,
                                           p->sem.sum.att,
                                           p->sem.sum.part);
                PFla_op_t *ret = add_attach (sum, p->sem.sum.part,
                                             PFprop_const_val_left (
                                                 p->prop,
                                                 p->sem.sum.part));
                sum->sem.sum.part = att_NULL;
                *p = *ret;
                SEEN(p) = true;
            }
            break;

        case la_count:
            /* if partitiong attribute is constant remove it
               and attach it after the operator */
            if (p->sem.count.part &&
                PFprop_const_left (p->prop, p->sem.count.part)) {
                PFla_op_t *count = PFla_count (L(p),
                                               p->sem.count.res,
                                               p->sem.count.part);
                PFla_op_t *ret = add_attach (count, p->sem.count.part,
                                             PFprop_const_val_left (
                                                 p->prop,
                                                 p->sem.count.part));
                count->sem.count.part = att_NULL;
                *p = *ret;
                SEEN(p) = true;
            }
            break;

        case la_rownum:
        {
            /* discard all sort criterions that are constant */
            unsigned int count = 0;
            PFalg_att_t  *atts = PFmalloc (p->sem.rownum.sortby.count *
	                                       sizeof (PFalg_att_t));

            for (unsigned int i = 0; i < p->sem.rownum.sortby.count; i++)
                if (!PFprop_const (p->prop,
                                   p->sem.rownum.sortby.atts[i]))
                    atts[count++] = p->sem.rownum.sortby.atts[i];

            p->sem.rownum.sortby = PFalg_attlist_ (count, atts);

            /* only include partitioning attribute if it is not constant */
            if (p->sem.rownum.part &&
                PFprop_const (p->prop, p->sem.rownum.part))
                p->sem.rownum.part = att_NULL;

            /* replace rownum by number operator
               if no sort criterions remain */
            if (!p->sem.rownum.sortby.count) {
                PFla_op_t *ret;
                ret = PFla_number (L(p),
                                   p->sem.rownum.attname,
                                   p->sem.rownum.part);
                *p = *ret;
                SEEN(p) = true;
            }
        }   break;

        case la_number:
            /* only include partitioning attribute if it is not constant */
            if (p->sem.number.part &&
                PFprop_const (p->prop, p->sem.number.part)) {
                p->sem.number.part = att_NULL;
            }
            break;

        case la_type:
            /* introduce attach if necessary */
            if (PFprop_const_left (p->prop, p->sem.type.att)) {
                L(p) = add_attach (L(p), p->sem.type.att,
                                   PFprop_const_val_left (
                                       p->prop,
                                       p->sem.type.att));
            }
            break;

        case la_cast:
            /* introduce attach if necessary */
            if (PFprop_const_left (p->prop, p->sem.cast.att)) {
                L(p) = add_attach (L(p), p->sem.cast.att,
                                   PFprop_const_val_left (
                                       p->prop,
                                       p->sem.cast.att));
            }
            break;

        case la_seqty1:
        case la_all:
            /* introduce attach if necessary */
            if (PFprop_const_left (p->prop, p->sem.blngroup.att)) {
                L(p) = add_attach (L(p), p->sem.blngroup.att,
                                   PFprop_const_val (p->prop,
                                                     p->sem.blngroup.att));
            }

            /* if partitiong attribute is constant remove it
               and attach it after the operator */
            if (p->sem.blngroup.part &&
                PFprop_const_left (p->prop, p->sem.blngroup.part)) {
                PFla_op_t *op = p->kind == la_all
                                ? PFla_all (L(p),
                                            p->sem.blngroup.res,
                                            p->sem.blngroup.att,
                                            p->sem.blngroup.part)
                                : PFla_seqty1 (L(p),
                                               p->sem.blngroup.res,
                                               p->sem.blngroup.att,
                                               p->sem.blngroup.part);

                PFla_op_t *ret = add_attach (op, p->sem.blngroup.part,
                                             PFprop_const_val (
                                                 p->prop,
                                                 p->sem.blngroup.part));
                op->sem.blngroup.part = att_NULL;
                *p = *ret;
                SEEN(p) = true;
            }
            break;

        default:
            break;
    }
}

/**
 * Invoke algebra optimization.
 */
PFla_op_t *
PFalgopt_const (PFla_op_t *root, bool no_attach)
{
    /* Infer constant properties first */
    PFprop_infer_const (root);

    /* Optimize algebra tree */
    opt_const (root, no_attach);
    PFla_dag_reset (root);

    return root;
}

/* vim:set shiftwidth=4 expandtab filetype=c: */
