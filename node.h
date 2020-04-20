#ifndef NODE_H
#define NODE_H

#include "entry.h"

#define NUM_EDGES 26

typedef struct node {
    ENTRY *entry;
    struct node *edges[NUM_EDGES];
} NODE;

NODE *new_node();

/* Delete everything recursively starting from root NODE */
void del_root_node(NODE *root);

#endif
