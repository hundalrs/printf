#include "holberton.h"

/**
 * print_char - print character
 * @ap: argument to be printed
 * Return: number of character printed
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	if (c != '\0')
		_putchar(c);
	return (1);
}

/**
 * print_string - print character
 * @ap: argument to be printed
 * Return: number of character printed
 */
int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0, sum = 0;

	while (s != NULL  && s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		sum++;
	}
	return (sum);
}

/**
 * print int - print interger
 * @ap: argument to be printed
 * Return: number of interger printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
}

/**
 * print percentage - print percentage symbol
 * @ap: argument to be printed
 * Return: number of symbol printed
 */
int print_per(va_list ap)
{
	char = va_arg(ap, int);
}
