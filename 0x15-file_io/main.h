#ifndef MATN_H
#define MATN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define READ_BUF_SIZE 1024

int _puchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int Creat_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
