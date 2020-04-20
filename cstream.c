#include "cstream.h"

#include <stdlib.h>

CSTREAM *new_cstream() {
    CSTREAM *cstream;

    cstream = malloc(sizeof(CSTREAM));

    cstream->buf = malloc(INIT_BUFSIZE);
    cstream->size = 0;
    cstream->cap = INIT_BUFSIZE;

    return cstream;
}

void del_cstream(CSTREAM *cstream) {
    if (cstream) {
        free(cstream->buf);
        free(cstream);
    }
}

void cstream_append(CSTREAM *cstream, char ch) {
    if (cstream->size == cstream->cap) {
        cstream->cap *= EXP_RATE;
        cstream->buf = realloc(cstream->buf, cstream->cap);
    }

    cstream->buf[cstream->size++] = ch;
}

/* Save memory by reducing capacity back to size. */
void cstream_memfit(CSTREAM *cstream) {
    cstream->cap = cstream->size;
    cstream->buf = realloc(cstream->buf, cstream->cap);
}
