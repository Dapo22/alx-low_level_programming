#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)/* prints tens digit*/
	{
		for (ones = tens + 1; ones <= 9; ones++)/* prints ones digit*/
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
