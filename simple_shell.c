#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h"

/**
 * shellbook - shell function
 * @argc: int being evaluated
 * @argv: char being evaluated
 * Return: prompt
 */

int shellbook(int argc, char **argv)
{
    char *wand;

    do
    {
        prompt_string_one();

        wand = read_shellbook();

        if(!wand)
        {
            exit(EXIT_SUCCESS);
        }

        if(wand[0] == '\0' || strcmp(wand, "\n") == 0)
        {
            free(wand);
            continue;
        }

        if(strcmp(wand, "exit\n") == 0)
        {
            free(wand);
            break;
        }

        _printf("%s\n", wand);

        free(wand);

    } while(1);

    exit(EXIT_SUCCESS);
}
