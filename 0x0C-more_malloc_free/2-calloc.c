#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @size: size in byte
 * @nmemb: elements of the array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int *ptrbyte;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(unsigned int));
	if (ptr == 0)
		return (NULL);
	ptrbyte = (unsigned *)ptr;
	for (i = 0; i < nmemb; i++)
		ptrbyte[i] = 0;
	return (ptr);
}
