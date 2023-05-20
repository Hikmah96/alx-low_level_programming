#include <stdio.h>

/**
 * main - main function
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	int p;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
