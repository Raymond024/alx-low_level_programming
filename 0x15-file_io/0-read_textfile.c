#include "main.h"
/**
 * read_textfile - reads a text file and prints out the letters the file.
 * @filename: filename withe the letters to be printed
 * @letters: the number of letters to be printed
 * Return: numbers of letters printed, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dis;
	ssize_t lrd, lwr;
	char *buffer;

	if (!filename)
		return (0);

	file_dis = open(filename, O_RDONLY);

	if (file_dis == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lrd = read(file_dis, buffer, letters);
	lwr = write(STDOUT_FILENO, buffer, lrd);

	close(file_dis);
	free(buffer);
	return (lwr);
}
