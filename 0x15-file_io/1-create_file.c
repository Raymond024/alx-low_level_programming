#include "main.h"

/**
 * create_file -programme that creates a file
 * @filename: name of file to be created
 * @text_content: the contents of the file
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_dis;
	int num_let;
	int rr;

	if (!filename)
		return (-1);

	file_dis = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dis == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_let = 0; text_content[num_let]; num_let++)
		;

	rr = write(file_dis, text_content, num_let);

	if (rr == -1)
		return (-1);

	close(file_dis);

	return (1);
}
