#include "main.h"

int theroot(int n, int i);

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
		return (theroot(n, 0));
}

/**
 * theroot - recurses to find square root
 * @i: iterrator
 * @n: the number
 * Return: the square root
 */
int theroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (theroot(n, i + 1));
}
