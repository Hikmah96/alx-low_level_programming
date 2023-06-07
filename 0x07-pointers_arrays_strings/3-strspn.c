#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: always zero
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int lenght = 0;
	int value = 0;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; s[i] != '\0'; i++)
		len1++;
	for (i = 0; accept[i] != '\0'; i++)
		len2++;
	for (j = 0; j < len1; j++)
	{
		for (k = 0; k < len2; k++)
		{
			if (accept[k] == s[j])
				value = 1;
			break;
		}
	}
	if (value == 1)
	{
		lenght++;
	}
	return (lenght);
}

