#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of text file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fer;
	ssize_t f;
	ssize_t n;
	ssize_t i;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	fer = malloc(sizeof(char) * letters);
	n = read(f, fer, letters);
	i = write(STDOUT_FILENO, fer, n);

	free(fer);
	close(f);
	return (i);
}
