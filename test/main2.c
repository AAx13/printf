#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;
	char *c = "Holberton";

	len = _printf("%%%s  %%%%%%\n", c);
	len2 = printf("%%%s  %%%%%%\n", c);

	printf("my printf: [ %d ] | original printf: [ %d ]\n", len, len2);

	return (0);
}
