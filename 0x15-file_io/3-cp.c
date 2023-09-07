#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates bytes for a buffer.
 * @file: The name of the file buffer
 * Return: A pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes descriptors
 * @fd: decriptor to close
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copis from one file to another
 * @argc: The number of arguments
 * @argv: An array of pointers to arguments
 * Return: 0 on success.
 * Description: If the argument count is incorrect 97, 98 if file cant be read
 * 99 if file cannot be created or written to, 100 if cannot be closed
 */
int main(int argc, char *argv[])
{
	int fr, t, a, n;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	a = read(fr, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		n = write(t, buf, a);
		if (t == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		a = read(fr, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buf);
	close_file(fr);
	close_file(t);

	return (0);
}
