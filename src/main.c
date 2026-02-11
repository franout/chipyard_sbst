#include <stdio.h>
#include <riscv-pk/encoding.h>
#include "marchid.h"
#include <stdint.h>

#include "tests.h"

int main(void)
{
    uint64_t marchid = read_csr(marchid);
    const char *march = get_march(marchid);
    printf("Hello world from core 0, a %s\n", march);
    volatile int signature = 0; 

    for (int i = 0; i < NUM_TESTS; i++) {
        printf("Executing test number %d\n", i);
        signature = SBST_FUNCT_PTR[i]();
        printf("The final signature is %d (Test %d)\n", signature, i);
    }
    
    return 0;
}