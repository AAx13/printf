#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;
	char *s = "Holberton";

	len = _printf("%s\n", s);
	len2 = printf("%s\n", s);

	printf("my printf: [ %d ] | original printf: [ %d ]\n", len, len2);

	return (0);
}
