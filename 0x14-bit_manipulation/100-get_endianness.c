#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int val = 1;
	unsigned char *d = (unsigned char *)&val;

	if (*d == 1)
		return (1);
	else
		return (0);
}
