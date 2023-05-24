#include "main.h"

/**
 * print_last_digit - prints last digit of
 * a number
 * @i: the number
 * Return: return the value of i
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
