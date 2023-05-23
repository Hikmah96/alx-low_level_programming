#include "main.h"

/**
 * print_alphabet_x10 - function that print
 * alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int p = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		while (p < 10)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
