#ifndef HOLBERTON
#define HOLBERTON

#include <stdarg.h>
typedef struct format
{
	char *format;
	int (*f)(va_list);
} form_spec;

int _printf(const char *format, ...);
int _putchar(char);
int print_char(char *);
int print_int(int *);
int print_string(char *);

#endif
