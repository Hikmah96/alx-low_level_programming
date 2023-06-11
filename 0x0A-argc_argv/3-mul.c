#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	for (i = 1; i < argc; i++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		}
	}
	return (0);
}
