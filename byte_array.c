#include "byte_array.h"

#include <stdlib.h>
#include <string.h>

BYTE_ARRAY *new_byte_array(size_t size, char *buf) {
    BYTE_ARRAY *loc_byte_array;

    loc_byte_array = malloc(sizeof(BYTE_ARRAY));
    loc_byte_array->size = size;
    loc_byte_array->buf = malloc(size);
    memcpy(loc_byte_array->buf, buf, size);

    return loc_byte_array;
}

void del_byte_array(BYTE_ARRAY *byte_array) {
    if (!byte_array)
        return;

    free(byte_array->buf);
    free(byte_array);
}
