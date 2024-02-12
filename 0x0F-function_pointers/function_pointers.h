#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdlib.h>

/* Function Prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
