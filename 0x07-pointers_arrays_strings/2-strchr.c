#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to a string
 * @c: a character to be located
 * Return: string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return (0);
}
