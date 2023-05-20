#include <stdio.h>

/**
 * main - main function
 *
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 57)
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
	return (0);
}
