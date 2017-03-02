#include "holberton.h"
#include <stdio.h>

/**
 * conv - blah
 * @args: yea
 * @position: yep
 * @dircnt: yup
 * @bytecnt: lol
 *
 * Return: byes printed to stdout.
 */
int conv(va_list args, char position, int dircnt, int bytecnt)
{
	int ui;
	char *str;

	ui = 0;
	switch (position)
	{
		case 'c':
			ui = va_arg(args, int);
			_putchar(ui);
			break;

		case 's':
			str = va_arg(args, char *);
			if (str)
			{
				bytecnt += print_str(str);
				if (dircnt)
				{
					bytecnt -= 1;
				}
			}
			else
			{
				bytecnt += print_str("(null)");
			}
			break;

		case '%':
			_putchar('%');
			break;

		default:
			_putchar('%');
			bytecnt++;
			_putchar(position);
			break;
	}

	return (bytecnt);
}
