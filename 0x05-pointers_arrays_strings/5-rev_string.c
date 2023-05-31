#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char save;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		save = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = save;
	}
}
