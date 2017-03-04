#include "holberton.h"

/**
 * i_case - handle integer conversion specifiers.
 * @args: Pointer to list of variable length arguments.
 * @dircnt: Tracks number of directives called.
 *
 * Return: bytes writen to stdout.
 */
int i_case(va_list args, int dircnt)
{
	int i;
	int bytecnt;

	bytecnt = 0;
	i = va_arg(args, int);
	if (!i)
	{
		bytecnt += _putchar('0');
	}
	else
	{
		bytecnt += print_int(i);
		if (dircnt)
		{
			bytecnt -= 1;
		}
	}

	return (bytecnt);
}
