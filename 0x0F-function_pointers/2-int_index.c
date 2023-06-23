#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: number of element in the array
 * @cmp: function pointer
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (h = 0; h < size; h++)
	{
		if (cmp(array[h]))
			return (h);
	}
	return (-1);
}
