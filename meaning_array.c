#include "meaning_array.h"

#include <stdlib.h>

MEANING_ARRAY *new_meaning_array() {
    MEANING_ARRAY *ma;

    ma = malloc(sizeof(MEANING_ARRAY));
    ma->size = 0;
    ma->cap = 1;
    ma->buf = malloc(sizeof(MEANING*));

    return ma;
}

void meaning_array_add(MEANING_ARRAY *ma, MEANING *meaning) {
    if (ma->size == ma->cap) {
        ma->cap *= EXPANSION_RATE;
        ma->buf = realloc(ma->buf, ma->cap);
    }

    ma->buf[ma->size++] = meaning;
}

void del_meaning_array(MEANING_ARRAY *ma) {
    size_t i;

    if (!ma)
        return;

    for (i = 0; i < ma->size; ++i)
        del_meaning(ma->buf[i]);

    free(ma->buf);
    free(ma);
}
