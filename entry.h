#ifndef ENTRY_H
#define ENTRY_H

#include "byte_array.h"
#include "meaning_array.h"

typedef struct entry {
    BYTE_ARRAY *word;
    MEANING_ARRAY *meanings;
} ENTRY;

ENTRY *new_entry(size_t wordsize, char *wordbuf);
void del_entry(ENTRY *entry);

#endif
