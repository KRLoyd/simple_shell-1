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

    initsh();

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

        struct source_s src;
        src.buffer   = wand;
        src.bufsize  = strlen(wand);
        src.curpos   = INIT_SRC_POS;
        avada(&src);

        free(wand);

    } while(1);

    exit(EXIT_SUCCESS);
}

int avada(struct source_s *src)
{
    skip_white_spaces(src);

    struct token_s *tok = tokenize(src);

    if(tok == &eof_token)
    {
        return 0;
    }

    while(tok && tok != &eof_token)
    {
        struct node_s *wand = parse_simple_command(tok);

        if(!wand)
        {
            break;
        }

        do_simple_command(wand);
        free_node_tree(wand);
        tok = tokenize(src);
    }

    return 1;
}
