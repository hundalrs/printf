#ifndef HOLBERTON
#define HOLBERTON

#include <stdarg.h>


typedef struct format
{
	char *format;
	int (*f)(va_list);
} form_spec;

int _printf(const char *format, ...);

#endif
