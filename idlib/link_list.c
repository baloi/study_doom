#include "link_list.h"

#include <stdio.h>
#include <stdlib.h>

int agLinkList_node_count( agLinkList * list ) {
    int             num;
    agListNode *    node;

    num = 0;

    //for( node = head->next; node != head; node = node->next ) {
    //    num++;
    //}

    return num;
}

agListNode * agListNode_alloc( void ) {
    agListNode *    node;

    /* malloc allocates memory and returns a pointer to the beginning of the
     * block while calloc allocates and also initializes memory to zero
     */
    //node = ( agListNode * )     calloc(1, sizeof( agListNode ) );
    node = ( agListNode * )     malloc( sizeof( agListNode ) );
    
    if( node == NULL ) {
        printf( "\nError Creating List node\n" );
    }

    node->prev = NULL;
    node->next = NULL;

    return node;
}

void agListNode_free( agListNode * node ) {
    if( node ) {
        if( node->item ) {
            free( node->item );
        }
        free( node );
    }
}

/*
void agListNode_clear( agListNode * node ) {
    if( node ) {
        if( node->item ) {
            printf( "node->item %s\n", node->item );
            free( node->item );
        }
    }
}
*/

void test_list_node_alloc() {
    printf( "test_list_node_alloc -- START --\n" );
    agListNode *    root;
    char *          root_item = "Hello Bohol now!\n";
    root = agListNode_alloc();
    root->id = 1;
    root->item = root_item; 

    printf( "\nRoot = %d %s\n", root->id, root->item );

    agListNode_free( root );

    //if( root == NULL ) {
    printf( "test_list_node_alloc -- END --\n" );
    //}
}

int main(int argc, char **argv) {

    test_list_node_alloc();


    /*
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
    */
    return 0;
}
