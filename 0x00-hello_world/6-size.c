#include <stdio.h>

/**
 * main - main entry
 *
 * Return: always zero
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
