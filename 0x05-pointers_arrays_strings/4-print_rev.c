#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = len; j > 0; j--)
		_putchar(s[i]);
	_putchar('\n');
}
