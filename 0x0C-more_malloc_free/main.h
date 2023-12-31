#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int validate_input(char *num);
void multiply_numbers(char *num1, char *num2);
void calculate_result(char *num1, char *num2, int *result, int len1,
					  int len2, int result_len);
void print_result(int *result, int start, int result_len);

#endif
