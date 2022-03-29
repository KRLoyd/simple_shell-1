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

int shellbook(int argc, char **argv);
void prompt_string_one(void);
void prompt_string_two(void);
char *read_shellbook(void);

#endif
