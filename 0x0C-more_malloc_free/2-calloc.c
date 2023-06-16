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
	unsigned char *ptrbyte;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	ptrbyte = (unsigned char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		ptrbyte[i] = 0;
	return (ptr);
}
