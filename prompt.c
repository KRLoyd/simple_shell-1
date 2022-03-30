#include <shell.h>
#include "symtab/symtab.h"

/**
 * prompt_string_one - program startup
(*
 * Description: prints prompt waiting for command)?
 */

void prompt_string_one(void)
{
	struct symtab_entry_s *entry = get_symtab_entry("PS1");

    if(entry && entry->val)
    {
        fprintf(stderr, "%s", entry->val);
    }
    else
    {
        fprintf(stderr, "$ ");
    }
}

/**
 * prompt_string_two - program startup
(*
 * Description: prints prompt for multi-line command)?
 */

void prompt_string_two(void)
{
	_printf(stderr, "> ");
}
