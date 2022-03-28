#include "shell.h"

//* work in progress */

char *line_reader(void)
{
	char *buffer;
	size_t bufsize = 0;

	if (isatty(STDIN_FILENO) == 1)
	    write(1, "$ ", 2);
	    if (getline(&buffer, &bufsize, stdin) <= 0)
	    {
		    if (isatty(STDIN_FILENO) == 1)
			    write(STDOUT_FILENO, "\n", 1);
	    }
	    return (buffer);
}
