#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>

/* _putchar - function that writes characters to stdout. */
int _putchar(char c);

/* print_str - writes a string to stdout. */
int print_str(char *str);

/* print_num - function that prints numbers to stdout. */
void print_num(int n);

/* */
int str_case(va_list args, int count);

/* _printf - function that produces output according to a format. */
int _printf(const char *format, ...);

#endif /* HOLBERTON */
