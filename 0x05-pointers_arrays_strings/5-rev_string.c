#include "main.h"

/**
 * rev-string - function that reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int len;
	int i;
	char save;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = 0; j <= len / 2; j++)
	{
		save = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = save;
	}
}
