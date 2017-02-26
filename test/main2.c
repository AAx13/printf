#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;

	len = _printf("%%%%%%%%%%%%%%%\n");
	len2 = printf("%%%%%%%%%%%%%%%\n");

	printf("my printf: [ %d ] | original printf: [ %d ]\n", len, len2);

	return (0);
}
