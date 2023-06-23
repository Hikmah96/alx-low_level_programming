#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char  *p = "";
	va_list print;

	va_start(print, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(print, double));
					break;
				case 's':
					s = va_arg(print, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(print);
}
