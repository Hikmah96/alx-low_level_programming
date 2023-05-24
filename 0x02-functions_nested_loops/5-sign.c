#include "main.h"

/**
 * print_sign - function that prints sign
 * of a number
 * @n: the number
 * Return: 1 if succes
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	if (n == 0)
		_putchar(n);
	return (0);
	if (n < 0)
		_putchar('-');
	return (-1);
}
