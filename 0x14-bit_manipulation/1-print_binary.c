#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int j;
	int condition = 0;
	unsigned long int the_mask;

	for (j = 63; j >= 0; j--)
	{
		the_mask = n >> j;

		if (the_mask & 1)
		{
			_putchar('1');
			condition++;
		}
		else if (condition)
			_putchar('0');
	}
	if (!condition)
		_putchar('0');
}
