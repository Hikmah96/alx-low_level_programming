#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer ti a string
 * Return: pointer to an address
 */
char *_strdup(char *str)
{
	int len = 0;
	char *ptr;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	ptr = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
