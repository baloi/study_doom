/**
 *
 *  Taken from Doom 3 GPL source LinkList.h 
 *  Copyright (C) 2015  <name of author>
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

#ifndef __LINKLIST_H__
#define __LINKLIST_H__

/*
===============================================================================

agLinkList

Circular linked list template

===============================================================================
*/

template< class type >
class agLinkList {
public:
        
                        agLinkList();
                        ~agLinkList();

    bool                IsListEmpty() const;
    bool                InList() const;
    int                     Num() const;
    void                Clear();

    void                InsertBefore( agLinkList &node );
    void                InsertAfter( agLinkList &node );
    void                AddToEnd( agLinkList &node );
    void                AddToFront( agLinkList & node );

    void                Remove();

    type *              Next() const;
    type *              Prev() const;

    type *              Owner() const;
    void                SetOwner( type *object );

    agLinkList *    ListHead() const;
    agLinkList *    NextNode() const;
    agLinkList *    PrevNode() const;

private:
    agLinkList *    head;
    agLinkList *    next;
    agLinkList *    prev;
    type *              owner;
};

/*
===============
agLinkList<type>::agLinkList

Node is initialized to be the head of an empty list
===============
*/
template< class type >
agLinkList<type>::agLinkList() {
    owner   = NULL;
    head    = this;
    next    = this;
    prev    = this;
}



#endif
