#include "main.h"
#include <stdlib.h>

/**
 * @size: number of element
 * @c: charter
 * Return: pointer to an address
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	ptr = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
		ptr[count] = c;
	return (ptr);
}
