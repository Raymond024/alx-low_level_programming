#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	int n;
	int r;

	if (!filename)
		return (-1);
	des = open(filename, O_WRONLY | O_APPEND);
	if (des == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		r = write(des, text_content, n);
		if (r == -1)
			return (-1);
	}
	close(des);
	return (1);
}
