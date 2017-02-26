#include <stdarg.h>
#include "holberton.h"

/**
 * str_case - blah
 * @args: yep
 * @count: yep
 *
 * Return: yep
 */
int str_case(va_list args, int count)
{
	int count2;
	char *str;

	str = va_arg(args, char *);
	count2 = print_str(str);
	if (count > 0)
	{
		count2 -= 1;
	}

	return (count2);
}
