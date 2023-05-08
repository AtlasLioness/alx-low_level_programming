#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void err_exit(int code, char *erm, void *argument);

#endif /* _MAIN_H_ */