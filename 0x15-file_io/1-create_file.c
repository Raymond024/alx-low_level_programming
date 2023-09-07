#include "main.h"
#include <stdio.h>
/**
 * create_file - Creates file
 * @filename: A pointer to the name of te file to be created.
 * @text_content: A pointer to data to b e written in the file
 * Return: If the file is NULL -1, Otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int m, n, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(m, text_content, str);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
