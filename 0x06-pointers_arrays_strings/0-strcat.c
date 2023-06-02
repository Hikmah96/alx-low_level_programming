#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: always zero
 */
char *_strcat(char *dest, char *src)
{
	int lendt = 0;
	int lensc = 0;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		lendt++;
	for (i = 0; src[i] != '\0'; i++)
		lensc++;
	for (j = 0; j <= '\0'; j++)
	{
		dest[lendt + j]  = src[j];
	}
	return (dest);
}
