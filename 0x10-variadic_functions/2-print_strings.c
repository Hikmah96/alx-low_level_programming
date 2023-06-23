#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings
 * @separator: a seperator
 * @n: number of int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x = 0;
	va_list prints;

	va_start(prints, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(prints, char *);
		if (x == NULL)
			printf("(nil)");
		else
		printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
