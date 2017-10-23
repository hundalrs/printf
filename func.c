#include "holberton.h"

/**
 * print_c - print character
 * @ap: argument to be printed
 * Return: number of character printed
 */
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	if (c != '\0')
		_putchar(c);
	return (1);
}

/**
 * print_s - print character
 * @ap: argument to be printed
 * Return: number of character printed
 */
int print_s(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0, sum = 0;

	if (s == NULL)
		s = "(null)";

	while (s != NULL  && s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		sum++;
	}
	return (sum);
}

/**
 * print_i - print interger
 * @ap: argument to be printed
 * Return: number of interger printed
 */
int print_i(va_list ap)
{
	int n = va_arg(ap, int);

	helper_print_int (n);

	return (1);
}

/**
 * print_d - print percentage symbol
 * @ap: argument to be printed
 * Return: number of interger printed
 */
int print_d(va_list ap)
{
	int n = va_arg(ap, int);

	helper_print_int (n);

	return (1);
}

/**
 * print_p - print percentage symbol
 * @ap: argument to be printed
 * Return: number of symbol printed
 */

/**
 *int print_p(va_list ap)
 *{
 *	char = va_arg(ap, int);
 *}
*/
