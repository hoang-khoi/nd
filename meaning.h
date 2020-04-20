#ifndef MEANING_H
#define MEANING_H

#include "byte_array.h"

typedef struct meaning {
    BYTE_ARRAY *desc;
    BYTE_ARRAY *def;
} MEANING;

MEANING *new_meaning(size_t descsize,
                    char *descbuf,
                    size_t defsize,
                    char *defbuf);

void del_meaning(MEANING *meaning);


#endif
