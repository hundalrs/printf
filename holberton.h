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
int _putchar(char c);
void print(int n);

#endif
