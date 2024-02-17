#include "main.h"

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: numbers of letters in the file
 * Return: numbers of letters printed
 * or 0 if file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int des;
	ssize_t n, r;
	char *buff;

	if (!filename)
		return (0);
	des = open(filename, O_RDONLY);
	if (des == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	n = read(des, buff, letters);
	r = write(STDOUT_FILENO, buff, n);
	close(des);
	free(buff);
	return (r);
}
