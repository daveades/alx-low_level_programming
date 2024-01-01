#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(int fd_from, int fd_to, char *buffer,
char *file_from, char *file_to);
void close_files(int fd_from, int fd_to);
void print_error(const char *message);
void print_elf_header(const char *filename);

#endif /* MAIN_H */
