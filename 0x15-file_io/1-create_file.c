#include "main.h"

/**
 * create_file - Create a  New file
 * @filename: Name of the file to be created
 * @text_content: String to write in the file
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, length = 0, file;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (filedes < 0)
		return (-1);
	while (text_content == NULL)
		length++;
	if (text_content)
		file = write(filedes, text_content, length);
	close(filedes);
	if (file < 0)
		return (-1);
	return (1);
}
