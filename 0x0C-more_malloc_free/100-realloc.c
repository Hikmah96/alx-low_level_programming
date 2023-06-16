#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: previous pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *preptr;
	unsigned int i;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	preptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = preptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i > old_size; i++)
			new_ptr[i] = preptr[i];
	}
	free(ptr);
	return (new_ptr);
}

