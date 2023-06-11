#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
