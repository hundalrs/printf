#include "holberton.h"

/**
 * _printf - main function to print
 * Return: sum
 * @format: format pointer string to print
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list ap;
	int sum = 0;
	form_spec spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
/*		{"%", print_p},       */
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0, j = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			while (spec[j].mod)
			{
				if (format[i + 1] == (*spec[j - 1].mod))
				{
					sum += spec[i].f(ap);
					i += 2;
				}
			}
		}
		_putchar(format[i]);
		j = 0, sum++, i++;
	}
	va_end(ap);
	return (sum);
}
