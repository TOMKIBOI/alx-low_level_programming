#ifndef _MAIN_H
#define _MAIN_H
#define ELF_HEADER_SIZE 64
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *message);
void print_elf_header_info(unsigned char *elf_header);
#endif
