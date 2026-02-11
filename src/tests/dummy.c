#include "tests.h"

/* A weak definition overwritten by another declaration of the function */
__attribute__((weak, optmize("O0"))) int sbst(void)
{
    return 0;
}
