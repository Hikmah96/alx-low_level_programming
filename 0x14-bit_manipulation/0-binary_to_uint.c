#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that convert binary
 * to unsigned int
 * @b: pointer to a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			converted = (converted << 1);
		}
		else if (b[i] == '1')
		{
			converted = (converted << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (converted);
}
