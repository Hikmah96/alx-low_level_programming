#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: string number
 * Return: alwyas zero
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		len1++;
	for (i = 0; src[i] != '\0'; i++)
		len2++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len1 + j] = src[j];
	}
	return (dest);
}
