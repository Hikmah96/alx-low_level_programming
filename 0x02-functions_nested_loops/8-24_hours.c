#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (j > i && l > k)
					{
						_putchar(i + 48);
						_putchar(j + 48);
						_putchar(58);
						_putchar(k + 48);
						_putchar(l + 48);
					}
				}
			}
		}
	}
}
