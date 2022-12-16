#include "main.h"

/**
 * print_number -prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int n, d, count;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	else
	{
		n = n;
	}
	d = n;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + 48);
	}
}
