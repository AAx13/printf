#include "holberton.h"
#include <stdio.h>

/**
 * conv - blah
 * @args: yea
 * @position: yep
 * @dircnt: yup
 *
 * Return: byes printed to stdout.
 */
int conv(va_list args, char position, int dircnt)
{
	int ui, bytecnt;
	char *str;

	ui = 0;
	bytecnt = 0;
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
				bytecnt = print_str(str);
				if (dircnt)
				{
					bytecnt -= 1;
				}
			}
			else if (str == NULL)
			{
				bytecnt = print_str("(null)") - 1;
				}
			else
			{
				bytecnt = print_str(str);
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
