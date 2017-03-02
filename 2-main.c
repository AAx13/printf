#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;
	char *s = "Holberton";

	len = _printf("%s %s\n", s, s);
	len2 = printf("%s %s\n", s, s);

	printf("my printf: [ %d ] | original printf: [ %d ]\n", len, len2);

	return (0);
}
