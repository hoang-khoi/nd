#include "fsm.h"

#define NEWLINE '\n'

/* _feed_receiving_word requires NODE* reference for Trie navigation. */
STATE _feed_receiving_word(int ch, NODE *&it);
STATE _feed_receiving_desc(int ch, NODE *it);
STATE _feed_receiving_def(int ch, NODE *it);
STATE _feed_receiving_invalid(int ch);

int isloweralpha(int ch);

/* Returns the next transition, create a new node if necessary. */
NODE *_node_move(NODE *node, int ch) {
    size_t idx;

    idx = ch - 'a';
    if (!node->edges[idx])
        node->edges[idx] = new_node();

    return node->edges[idx];
}

STATE feed(STATE curstate, int ch, NODE *&it) {
    switch (curstate) {
        case RECEIVING_WORD:
            return _feed_receiving_word(ch, it);
        case RECEIVING_DESC:
            return _feed_receiving_desc(ch, it);
        case RECEIVING_DEF:
            return _feed_receiving_def(ch, it);
        case INVALID:
            return _feed_receiving_invalid(ch);
    }

    return INVALID;
}

STATE _feed_receiving_word(int ch, NODE *&it) {
    if (ch == NEWLINE) {
        // TODO
        return RECEIVING_DESC;
    }

    if (!isloweralpha(ch)) {
        fprintf("Current state is RECEIVING_WORD.
                 Expect: lower alpha. Received: %c", ch);

        return INVALID;
    }

    it = _node_move(it, ch);
    return RECEIVING_WORD;
}

STATE _feed_receiving_desc(int ch, NODE *&it) {

}

int isloweralpha(int ch) {
    return ch <= 'z' && ch >= 'a';
}
