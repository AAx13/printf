#include <stdio.h>
#include "holberton.h"

/**
 * print_int - function to write numbers to stdout.
 * @n: Contains the number passed to write to stdout.
 *
 * Return: Bytes writen.
 */
int print_int(int n)
{
	int len, ncpy, bytecnt;

	bytecnt = 0;
	if (n < 0)
	{
		n *= -1;
		bytecnt += _putchar('-');
	}

	for (len = 1, ncpy = n; ncpy > 0; len *= 10)
	{
		ncpy /= 10;
	}

	len /= 10;
	for (ncpy = n; ncpy > 0; len /= 10)
	{
		bytecnt += _putchar((ncpy / len) + '0');
		ncpy %= len;
	}

	return (bytecnt - 1);


}
