#include "meaning.h"

#include <stdlib.h>

MEANING *new_meaning(size_t descsize,
                     char *descbuf,
                     size_t defsize,
                     char *defbuf)
{
    MEANING *lmeaning;

    lmeaning = malloc(sizeof(MEANING));
    lmeaning->desc = new_byte_array(descsize, descbuf);
    lmeaning->def = new_byte_array(defsize, defbuf);

    return lmeaning;
}
void delMEANING(MEANING *MEANING) {
    if (!MEANING)
        return;

    del_byte_array(MEANING->desc);
    del_byte_array(MEANING->def);

    free(MEANING);
}
