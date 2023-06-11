#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
