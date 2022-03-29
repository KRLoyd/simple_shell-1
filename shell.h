#ifndef SHELL_H
#define SHELL_H

/** libraries */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

struct print
{
	char *sys;
	int (*x)(va_list);
};

/**
 * print_t - typedef for struct print
 */
typedef struct print print_t;

int _not_putchar(char x);
int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);
int number_format(va_list args);
int string_format(const char *format, print_t f_list[], va_list arg_list);
int shellbook(int argc, char **argv);
void prompt_string_one(void);
void prompt_string_two(void);
char *read_shellbook(void);

#endif
