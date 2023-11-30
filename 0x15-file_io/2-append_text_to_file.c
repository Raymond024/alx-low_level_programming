#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: file content added
 * Return: 1 if the file exists. -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_dis;
	int num_let;
	int rr;

	if (!filename)
		return (-1);

	file_dis = open(filename, O_WRONLY | O_APPEND);

	if (file_dis == -1)
		return (-1);

	if (text_content)
	{
		for (num_let = 0; text_content[num_let]; num_let++)
			;

		rr = write(file_dis, text_content, num_let);

		if (rr == -1)
			return (-1);
	}

	close(file_dis);

	return (1);
}
