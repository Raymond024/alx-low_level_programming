#include "main.h"
#include <stdio.h>

/**
 * read_file - checks to see if file can be read
 * @file_from: origin of file
 * @file_to: destination of file
 * @argv: arguments vector.
 * Return: void
 */
void read_file(int file_to, int file_from, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function checks for holerburton students
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	read_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buff, 1024);
		if (n == -1)
			read_file(-1, 0, argv);
		r = write(file_to, buff, n);
		if (r == -1)
			read_file(0, -1, argv);
	}

	err_close = err_close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = err_close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
