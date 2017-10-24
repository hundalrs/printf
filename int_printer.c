#include "holberton.h"

/**
* helper_print_int - helps print int
* Return: sum of length
* @n: number
*/
int helper_print_int (int n)
{
	int div, i, k, counter, x, sum = 0;
	unsigned int num, num2;

	div = 1;
	counter = 0;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
		sum++;
	}
	else
		num = n;
	num2 = num;
	while (num2 > 0)
	{
		num2 = num2 / 10;
		counter++;
	}
	for (i = 0; i < counter - 1; i++)
	{
		div = div * 10;
	}
	for (k = 0; k < counter - 1; k++)
	{
		x = num / div;
		_putchar(x + '0');
		sum++;
		num = num % div;
		div = div / 10;
	}
	_putchar(num % 10 + '0');
	sum++;
	return (sum);
}
