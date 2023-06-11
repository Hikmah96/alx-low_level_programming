#include <stdio.h>

/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%d\n", i);
	return (0);
}
