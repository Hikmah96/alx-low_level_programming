#include <stdarg.h>

/**
 * sum_them_all - sums up all its parameters
 * @n: a constant
 *
 * Return: value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int value = 0;
	unsigned int i;
	va_list mynumbers;

	va_start(mynumbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		value = va_arg(mynumbers, int);
		sum += value;
	}
	va_end(mynumbers);
	return (sum);
}
