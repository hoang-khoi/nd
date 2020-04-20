#include "entry.h"

#include <stdlib.h>

ENTRY *new_entry(size_t wordsize, char *wordbuf) {
    ENTRY *entry;

    entry = malloc(sizeof(ENTRY));
    entry->word = new_byte_array(wordsize, wordbuf);
    entry->meanings = new_meaning_array();

    return entry;
}

void del_entry(ENTRY *entry) {
    if (!entry)
        return;

    del_byte_array(entry->word);
    del_meaning_array(entry->meanings);

    free(entry);
}
