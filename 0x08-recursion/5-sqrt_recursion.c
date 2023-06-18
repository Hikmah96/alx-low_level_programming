#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * _sqrt_recursion(n - 1));
}
