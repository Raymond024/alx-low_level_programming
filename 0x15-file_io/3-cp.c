#include "main.h"
#include <stdio.h>

/**
 * file_error - checks if files can be opened.
 * @file_or: the origin of the file
 * @file_dest: the destination of the file
 * @argv: arguments to the prototype
 * Return: nothing
 */
void file_error(int file_or, int file_dest, char *argv[])
{
	if (file_or == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Hol School students.
 * @argc: number of arguments to function
 * @argv: argumentsto function
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_or, file_dest, error_close;
	ssize_t num_chars, num_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_or = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_or, file_dest, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_or, buf, 1024);
		if (num_chars == -1)
			file_error(-1, 0, argv);
		num_wr = write(file_dest, buf, num_chars);
		if (num_wr == -1)
			file_error(0, -1, argv);
	}

	error_close = close(file_or);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_or);
		exit(100);
	}

	error_close = close(file_dest);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_or);
		exit(100);
	}
	return (0);
}
