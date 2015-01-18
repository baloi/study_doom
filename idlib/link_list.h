/**
 *
 *  Implementation of link list data structure in C 
 *  Copyright (C) 2015 Adrian Galia 
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *    Also add information on how to contact you by electronic and paper mail.
 *
 */
#include "common.h"

#ifndef __LINK_LIST_H__
#define __LINK_LIST_H__

/*
 * Landon Curt Noll's calc hash.h is the basis for the definition of structs
 * and ID's igLinkList is the inspiration for code formatting
 */
typedef struct _link_list_ agLinkList;

// TODO: There definitely has to be a list item (agListItem) 
//       and a list(agLinkList)
struct _link_list_ {

    bool                ( * is_list_empty )     ( void *self );
    int                     ( * node_count )    ( void *self );
    int             id;
    char            * item;

    void                ( * insert_after )      ( void *self, agLinkList * );
    void                ( * add_to_end )        ( void *self, agLinkList * );
    void                ( * add_to_front )      ( void *self, agLinkList * );

    agLinkList *    head;
    agLinkList *    next;
    agLinkList *    prev;
};

extern int agLinkList_node_count( agLinkList * );

#endif
