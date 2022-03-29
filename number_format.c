#include "main.h"

/**
 * number_format - program startup
 * @args: variable argument list
(*
 * Description: formats numbers for _printf
 * Resource: https://linux.die.net/man/3/va_arg
 * Return: format
 */

int number_format(va_list args)
{
	int x;
	int y;
	int format;
	unsigned int num;

	x = va_arg(args, int);
	y = 1;
	format = 0;

	if (x < 0)
	{
		format += _not_putchar('-');
		num = x * -1;
	}
	else
		num = x;

	for (; num / y > 9; )
		y *= 10;

	for (; y != 0; )
	{
		format += _not_putchar('0' + num / y);
		num %= y;
		y /= 10;
	}
	return (format);
}
