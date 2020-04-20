#ifndef BYTE_ARRAY_H
#define BYTE_ARRAY_H

#include <stddef.h>

typedef struct byte_array {
    size_t size;
    char *buf;
} BYTE_ARRAY;

BYTE_ARRAY *new_byte_array(size_t size, char *buf);
void del_byte_array(BYTE_ARRAY *byte_array);

#endif
