#include "node.h"

#include <stdlib.h>
#include <string.h>

NODE *new_node() {
    NODE *node;

    node = malloc(sizeof(NODE));
    node->value = NULL;
    memset(node->edges, 0, sizeof(NODE*));

    return node;
}

void del_root_node(NODE *root) {
    size_t i;

    if (!root)
        return;

    for (i = 0; i < NUM_EDGES; ++i)
        del_root_node(root->edges[i]);


    del_value(root->value);
    free(root);
}
