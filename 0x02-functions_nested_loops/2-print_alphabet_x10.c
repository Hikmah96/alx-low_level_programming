#include "main.h"

/**
 * print_alphabet_x10 - function that print
 * alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
