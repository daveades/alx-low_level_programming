#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
char *create_array(unsigned int size, char c);
char _putchar(char c);
char *_strdup(char *str);
int _strlen(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int count_words(char *str);
char **allocate_memory(int num_words);
void free_memory(char **words, int num_words);
void copy_word(char **words, char *str, int start, int end, int index);
char *argstostr(int ac, char **av);
#endif
