#ifndef MAIN_H
#define MAIN_H

/* Function Prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

/* standard library */
#include <stdlib.h>


#endif
