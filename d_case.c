#include "holberton.h"
#include <stdio.h>

/**
 * d_case - handle integer conversion specifiers.
 * @args: Pointer to list of variable length arguments.
 *
 * Return: bytes writen to stdout.
 */
int d_case(va_list args)
{
	int i;
	int bytecnt;

	bytecnt = 0;
	i = va_arg(args, int);
	if (!i)
	{
		bytecnt += _putchar('0');
	}

	bytecnt += print_int(i);

	return (bytecnt);
}
