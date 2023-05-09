#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: point to the file name
 * @letters: indicates the num of letters to read and print
 *
 * Return: W- if the fn fails or filename is  0
 *         O - the actual num of bytes the fn can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

