#include "holberton.h"

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

	i = va_arg(args, int);
	bytecnt = print_int(i);
	return (bytecnt);
}
