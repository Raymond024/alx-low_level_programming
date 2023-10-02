#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - Appends text to the end of file
 * @filename: pointer to file name appended
 * @text_content: string to add to file appended
 * Return: 1 if success, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
