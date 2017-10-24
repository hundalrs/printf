#include "holberton.h"

/**
* helper_print_int - helps print int
* Return: sum of length
* @n: number
*/
int helper_print_int (int n)
{
	int sum = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
	{
		helper_print_int(n/10);
	}

	_putchar(n%10 + '0');
	sum++;
	return (sum);
}
