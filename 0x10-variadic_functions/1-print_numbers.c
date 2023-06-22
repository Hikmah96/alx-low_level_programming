#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: a seperator
 * @n: number count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list pnumbers;

	va_start(pnumbers, n);

	if ( separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(pnumbers, int);
		printf("%d%s\n", x, separator);
	}
	va_end(pnumbers);
}
