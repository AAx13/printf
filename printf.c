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
	long int len, bytecnt, dircnt;
	va_list args;

	dircnt = 0;
	bytecnt = 0;
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
			dircnt++;
			bytecnt += conv(args, format[len], dircnt, bytecnt);
		}
	}
	va_end(args);
	if (dircnt > 0)
		len -= dircnt;
	len += bytecnt;
	return (len);
}
