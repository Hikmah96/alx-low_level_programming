#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to an integer
 * @b: second pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
