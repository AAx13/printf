#include "holberton.h"
#include <stdio.h>

/**
 * conv - blah
 * @args: yea
 * @format: yep
 * @len: yep
 * @count: lol
 * @count2: yup
 *
 * Return: byes printed to stdout.
 */
int conv(va_list args, const char *format, int len, int count, int count2)
{
	int ui;

	ui = 0;
	count++;
	switch (format[len])
	{
		case 'c':
			ui = va_arg(args, int);
			if (ui == -1)
			{
				count2 += print_str("(null)");
				break;
			}
			_putchar(ui);
			break;

		case 's':
			count2 += str_case(args, count);
			break;

		case '%':
			_putchar('%');
			break;

		default:
			_putchar('%');
			count2++;
			_putchar(format[len]);
			break;
	}

	return (count2 - 1);
}
