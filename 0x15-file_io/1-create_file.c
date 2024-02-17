#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: the file content
 * Return: 1 if it success. -1 if it failed.
 */
int create_file(const char *filename, char *text_content)
{
	int des;
	int n;
	int r;

	if (!filename)
		return (-1);
	des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (des == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n = 0; text_content[n]; n++)
		;
	r = write(des, text_content, n);
	if (r == -1)
		return (-1);
	close(des);
	return (1);
}
