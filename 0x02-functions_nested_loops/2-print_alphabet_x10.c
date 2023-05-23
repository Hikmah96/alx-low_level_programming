#include "main.h"

/**
 * print_alphabet_x10 - function that print
 * alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int p;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (p = 0; p <= 10; p++)
		{
			if (p <= 10)
				_putchar(i);
		}
		_putchar('\n');
	}
}
