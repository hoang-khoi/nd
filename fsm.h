#ifndef FSM_H
#define FSM_H

#include "node.h"

typedef enum state {
    RECEIVING_WORD,
    RECEIVING_DESC,
    RECEIVING_DEF,
    INVALID
} STATE;

/* Feed the next byte to the machine and construct the Trie in the meantime */
STATE feed(STATE curstate, int ch, NODE *&it);

#endif
