#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to a character
 * @b: constant byte
 * @n: number of character
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	       	s[i] = b;
	return (s);
}
