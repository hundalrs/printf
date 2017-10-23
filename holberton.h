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
int print_char(va_list);
int print_int(va_list);
int print_string(va_list);
int print_per(va_list);

#endif
