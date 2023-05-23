#include "main.h"

/**
 * print_alphabeth - function that prints alphabeth
 * in lower case
 * 
 * Return: always zero
 */
void print_alphabet(void)
{
	int i;

	for ( i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
