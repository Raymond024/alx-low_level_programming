#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: file to be created
 * @text_content: string written in to the file
 * Return: 1 if suceess , -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, length);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
