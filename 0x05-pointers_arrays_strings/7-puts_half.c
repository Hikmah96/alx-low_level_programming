#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (i < len / 2 - 1)
		_putchar(str[i]);
	_putchar('\n');
}
