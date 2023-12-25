#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
