#include "main.h"

/**
 * set_bit - a function that sets value of a bit to one at a given index
 * @n: a pointer
 * @index: the index
 * Return: return -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
