#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argv: arguement vector
 * @argc: arguement count
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0 || atoi(argv[i]) != 9)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
