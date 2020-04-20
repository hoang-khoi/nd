#ifndef MEANING_ARRAY_H
#define MEANING_ARRAY_H

#include <stddef.h>
#include "meaning.h"

#define EXPANSION_RATE 2

typedef struct meaning_array {
    size_t size;
    size_t cap;
    MEANING **buf;
} MEANING_ARRAY;

MEANING_ARRAY *new_meaning_array();
void meaning_array_add(MEANING_ARRAY *meaning_array, MEANING *meaning);
void del_meaning_array(MEANING_ARRAY *meaning_array);

#endif
