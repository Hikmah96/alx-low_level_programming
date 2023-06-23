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

	for (i = 0; i < n; i++)
	{
		x = va_arg(pnumbers, int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(pnumbers);
}
