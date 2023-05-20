#include <stdio.h>

/**
 * main - main function
 *
 * Return: always zero
 */
int  main(void)
{
	int i;
	int p;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
