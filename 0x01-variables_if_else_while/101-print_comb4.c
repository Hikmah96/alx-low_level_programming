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
	int p;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (p = 50; p <= 58; p++)
			{
				if (p > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(p);
					if (i != 55 && j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

