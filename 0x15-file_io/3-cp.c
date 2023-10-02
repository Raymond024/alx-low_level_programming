#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int x);
/**
 * create_buffer - creates 1024 bytes for a buffer.
 * @file: The name of the file for which chars are to be stored
 * Return: pointer to new buffer
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
 * close_file - closes file descriptor
 * @x: The file descriptor closed
 */
void close_file(int x)
{
	int y;

	y = close(x);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}
/**
 * main - Copies the content from file to file
 * @argc: The number of arguments passed to program
 * @argv: array of pointers to args
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, t, a, b;
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

		b = write(t, buf, a);
		if (t == -1 || b == -1)
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
