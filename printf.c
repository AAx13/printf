#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: Contains all format parameters for a variable amount of arguments.
 *
 * Return: Number of characters printed (excluding null byte for strings).
 */

/* deal with multiple % back to back */
/* deal with character return length */
/* deal with string return length */
int _printf(const char *format, ...)
{
	int len, ui, count, count2;
	char *str;
	va_list args;

	count2 = 0;
	count = 0;
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
			switch (format[len])
			{
				case 'c':
					ui =  va_arg(args, int);
					_putchar(ui);
					count++;
					break;

				case 's':
					str = va_arg(args, char *);
					count2 += print_str(str);
					count++;
					if (count > 0)
					{
						count2 -= 1;
					}
					break;

				case '%':
					_putchar('%');
					count++;
					break;
			}
		}
	}
	va_end(args);
	if (count > 0)
	{
		len -= count;
	}
	len += count2;
	return (len);
}
