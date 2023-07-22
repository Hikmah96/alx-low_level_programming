#include "main.h"

/**
 * append_text_to_file - function that appends text at end of file
 * @filename: name of file
 * @text_content: a pointer
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int stl = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[stl])
			stl++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, stl);

	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
