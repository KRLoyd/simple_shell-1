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

/** Command Data Struct (draft) */

struct SimpleCommand {
	//Available space for arguments currently preallocated
	int _numberOfAvailableArguments;

	//Number of arguments
	int _numberOfArguments;

	//Array of arguments
	char **_arguments;
};

<<<<<<< HEAD
int shellbook(int argc, char **argv);
void prompt_string_one(void);
void prompt_string_two(void);
char *read_shellbook(void);
=======
void insertArgument(char *argument);
>>>>>>> 955a42e30215793394d24ad70fe98e863232b155

#endif
