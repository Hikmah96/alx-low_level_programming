#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to a memory to be filled
 * @b: constant value to be fillled
 * @n: number of bytes to he filled
 * Return: array s with the new value of n
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	       	s[i] = b;
	return (s);
}
