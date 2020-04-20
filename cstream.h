#ifndef CSTREAM_H
#define CSTREAM_H

#include <stddef.h>

#define EXP_RATE 2
#define INIT_BUFSIZE 8

typedef struct cstream {
    char *buf;
    size_t size;
    size_t cap;
} CSTREAM;

CSTREAM *new_cstream();
void del_cstream(CSTREAM *cstream);

void cstream_append(CSTREAM *cstream, char ch);
void cstream_memfit(CSTREAM *cstream);

#endif
