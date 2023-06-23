#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints rach array elemrnt
 * @array: the array
 * @size: size of yhe array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;
	for (h = 0; h < size; h++)
		action(array[h]);
}
