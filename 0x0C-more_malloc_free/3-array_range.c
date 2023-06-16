#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: input
 * @max: input
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + 1;
	return (ptr);
	free(ptr);
}
