#include "main.h"
#include <stdlib.h>

/**
 * str_concat - contenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
