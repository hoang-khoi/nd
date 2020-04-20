#ifndef NODE_H
#define NODE_H

#include "value.h"

#define NUM_EDGES 26

typedef struct node {
    VALUE *value;
    struct node *edges[NUM_EDGES];
} NODE;

NODE *new_node();
void del_node(NODE *root);

void node_append_word(NODE *node, int ch);
void node_append_desc(NODE *node, int ch);
void node_append_def(NODE *node, int ch);

#endif
