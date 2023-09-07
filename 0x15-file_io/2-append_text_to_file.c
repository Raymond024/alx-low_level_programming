#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - append text at file's end
 * @filename: pointer to file name
 * @text_content: data to be added to filr name
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, n, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	n = write(m, text_content, str);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
