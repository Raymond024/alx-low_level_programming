#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file and prints to the standard output
 * @filename: name of file
 * @letters: number letters read from file
 * Return: number of letters read and printed, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);
	free(buffer);
	close(x);
	return (y);
}

