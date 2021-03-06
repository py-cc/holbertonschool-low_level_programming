#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void err_argc(int code);
void err_read(int code, char *str, char *buffer);
void err_wr(int code, char *str, char *buffer);
void err_close(int code, int fd, char *buffer);

#endif /* _HOLBERTON_H_ */
