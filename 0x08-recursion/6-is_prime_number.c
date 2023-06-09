#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n - 1));
}

/**
 * prime - return prime number
 * @n: number
 * @i: for iteration
 * Return: prime
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
