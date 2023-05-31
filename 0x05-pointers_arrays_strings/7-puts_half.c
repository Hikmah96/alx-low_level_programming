#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int j = len / 2 - 1;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (i < j)
		_putchar(str[i]);
}
