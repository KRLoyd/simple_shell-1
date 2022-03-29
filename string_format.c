#include "main.h"

/**
 * string_format - program startup
 * @arg_list: variable argument list
 * @f_list: functions being evaluated
 * @format: char being evaluated
 (*
 * Description: formats strings for _printf
 * Return: formatted_string
 */

int string_format(const char *format, print_t f_list[], va_list arg_list)
{
	int x, y, z, formatted_string;

	formatted_string = 0;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; f_list[y].sys != NULL; y++)
			{
				if (format[x + 1] == f_list[y].sys[0])
				{
					z = f_list[y].x(arg_list);
					if (z == -1)
						return (-1);
					formatted_string += z;
					break;
				}
			}
			if (f_list[y].sys == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_not_putchar(format[x]);
					_not_putchar(format[x + 1]);
					formatted_string = formatted_string + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
		{
			_not_putchar(format[x]);
			formatted_string++;
		}
	}
	return (formatted_string);
}
