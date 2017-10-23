#ifndef HOLBERTON
#define HOLBERTON

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct form
{
	char *mod;
	int (*f)(va_list);
} form_spec;

int _printf(const char *format, ...);
void helper_print_int(int n);
int _putchar(char);
int print_c(va_list);
int print_i(va_list);
int print_s(va_list);
int print_p(va_list);
int print_d(va_list);

#endif
