#ifndef VALUE_H
#define VALUE_H

#include "cstream.h"

typedef struct value {
    CSTREAM *desc;
    CSTREAM *def;
} VALUE;

VALUE *new_value();
void del_value(VALUE *value);

#endif
