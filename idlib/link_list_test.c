#include "link_list.c"

int main( int argc, char * argv[] ) {

    agLinkList *root;
    agLinkList *next_node;

    root = malloc( sizeof( agLinkList ) );
    root->item = "first Item";
    root->id = 1;

    root->next = malloc( sizeof( agLinkList ) );
    next_node = root->next;

    next_node->item = "next Item";
    next_node->id = 2;

    printf( "\nRoot = %d %s\n", root->id, root->item );
    printf( "\nNext = %d %s\n", next_node->id, next_node->item );

    return 0;
}
