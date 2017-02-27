#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: Contains all format parameters for a variable amount of arguments.
 *
 * Return: Number of characters printed (excluding null byte for strings).
 */
int _printf(const char *format, ...)
{
	int len, ui, count, count2;
	va_list args;

	count = 0;
	count2 = 0;
	va_start(args, format);
	for (len = 0; format[len] != '\0'; len++)
	{
		if (format[len] != '%')
		{
			_putchar(format[len]);
		}
		else
		{
			len++;
			count++;
			switch (format[len])
			{
				case 'c':
					ui =  va_arg(args, int);
					_putchar(ui);
					break;

				case 's':
					count2 += str_case(args, count);
					break;

				case '%':
					_putchar('%');
					break;

				default :
					return (1);
			}
		}
	}
	va_end(args);
	if (count > 0)
		len -= count;
	len += count2;
	return (len);
}
