#ifndef __TESTS_H__
#define __TESTS_H__

/* Define the number of tests */
#define NUM_TESTS 1

/* Define the prototype for the test functions */
int sbst(void);


/* Define the array of function pointers for the test functions */
typedef int (*TestFunction)(void);

/* Declare it extern so we can safely include the declaration into a header file */
extern TestFunction SBST_FUNCT_PTR[NUM_TESTS];


#endif /*__TESTS_H__*/