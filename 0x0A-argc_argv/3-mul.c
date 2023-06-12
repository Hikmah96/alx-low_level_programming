#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int mul;

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
	return (0);
}
