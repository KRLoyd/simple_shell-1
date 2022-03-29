#include "main.h"

/**
 * _not_putchar - print function
 * @x: char being evaluated
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _not_putchar(char x)
{
	return (write(1, &x, 1));
}
