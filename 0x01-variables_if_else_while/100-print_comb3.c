#include <stdio.h>

/**
 * main - main entry
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 10; j++)
			if (j < i)
			{
				putchar(i);
				putchar(j);
			}
		if (i != 9 && j != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
