#include "holberton.h"

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list ap;
	form_spec spec[] {
		{"c", print_c},
		{"s", print_s},
		{"%", print_%},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == "%")
		{
			while (spec[i].format)

}
