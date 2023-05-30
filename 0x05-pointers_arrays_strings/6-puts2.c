#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	if (str[i] % 2 == 0)
		_putchar(i + '1');
	_putchar('\n');
}
