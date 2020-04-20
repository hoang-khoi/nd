#include "value.h"

#include <stdlib.h>

VALUE *new_value() {
    VALUE *value;

    value = malloc(sizeof(VALUE));
    value->desc = new_cstream();
    value->def = new_cstream();

    return value;
}

void del_value(VALUE *value) {
    if (!value)
        return;

    del_cstream(value->desc);
    del_cstream(value->def);
    free(value);
}
