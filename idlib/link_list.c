#include "link_list.h"

#include <stdio.h>
#include <stdlib.h>

int agLinkList_node_count( agLinkList * head ) {
    int             num;
    agLinkList      * node;

    num = 0;

    //for( node = head->next; node != head; node = node->next ) {
    //    num++;
    //}

    return num;
}

int main(int argc, char **argv) {
    agLinkList *root;
    agLinkList *next_node;

    root = malloc( sizeof( agLinkList ) );
    root->head = root;

    root->item = "first Item";
    root->id = 1;

    root->next = malloc( sizeof( agLinkList ) );

    next_node = root->next;

    next_node->item = "next Item";
    next_node->id = 2;

    printf( "\nRoot = %d %s\n", root->id, root->item );
    printf( "\nNext = %d %s\n", next_node->id, next_node->item );
    printf( "\nNode count = %d\n", agLinkList_node_count( root ) );

    return 0;
}
