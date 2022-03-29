#include <shell.h>

/**
 * prompt_string_one - program startup
(*
 * Description: prints prompt waiting for command)?
 */

void prompt_string_one(void)
{
	_printf(stderr, "$");
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
