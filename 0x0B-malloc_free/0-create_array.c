#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array
 * @size: number of element
 * @c: charter
 * Return: pointer to an address
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL || size == 0)
		return (NULL);
	for (count = 0; count < size; count++)
		ptr[count] = c;
	return (ptr);
}
