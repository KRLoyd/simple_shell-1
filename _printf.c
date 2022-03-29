#include "main.h"

int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);

/**
 * _printf - program startup
 * @format: char being evaluated
(*
 * Description: produces output according to a format)?
 * Return: printed_values
 */

int _printf(const char *format, ...)
{
	int printed_values;
	print_t f_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	printed_values = string_format(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_values);
}

/**
 * print_character - program startup
 * @list: variable argument being evaluated
(*
 * Description: character output)?
 * Return: return (1) is the required function signature
 */

int print_character(va_list list)
{
	_not_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - program startup
 * @list: variable argument being evaluated
(*
 * Description: string output)?
 * Return: x
 */

int print_string(va_list list)
{
	int x;
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	for (x = 0; string[x] != '\0'; x++)
	{
		_not_putchar(string[x]);
	}

	return (x);
}

/**
 * print_percent - program startup
 * @list: variable argument being evaluated
(*
 * Description: percent output
 * https://gcc.gnu.org/onlinedocs/gcc-3.4.6/gcc/Variable-Attributes.html)?
 * Return: return (1) is the required function signature
 */

int print_percent(__attribute__((unused))va_list list)
{
	_not_putchar('%');
	return (1);
}

/**
 * print_integer - program startup
 * @list: variable argument being evaluated
(*
 * Description: integer output)?
 * Return: return (1) is the required function signature
 */

int print_integer(va_list list)
{
	int number;

	number = number_format(list);
	return (number);
}
