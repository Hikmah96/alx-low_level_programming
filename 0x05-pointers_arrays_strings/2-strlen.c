#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
