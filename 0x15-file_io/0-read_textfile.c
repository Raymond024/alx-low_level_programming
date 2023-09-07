#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads text file and prints to posix std output
 * @filename: text file read
 * @letters: number of letters
 * Return: actual number of letters read and printed, 0 if if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t c;
	ssize_t n;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	c = read(b, a, letters);
	n = write(STDOUT_FILENO, a, c);

	free(a);
	close(b);
	return (n);
}

