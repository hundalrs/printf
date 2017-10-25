#include "holberton.h"

/**
 * _printf - main function to print
 * Return: sum
 * @format: format pointer string to print
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, sum = 0;
	va_list ap;
	form_spec spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{"%", print_p},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		if (format[i] != '%')
			_putchar(format[i]), i++, sum++;
		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			while (spec[j].mod)
			{
				if (format[i + 1] == (*spec[j].mod))
				{
					sum += spec[j].f(ap), i += 2;
					break;
				}
				j++;
			}
			if (spec[j].mod == NULL)
			{
				_putchar(format[i]), i++, sum++;
				_putchar(format[i]), i++, sum++;
			}
		}
	}
	va_end(ap);
	return (sum);
}
