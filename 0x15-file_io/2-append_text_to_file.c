#include "main.h"

/**
 * append_text_to_file - Adds text to a file
 * @filename: Name of file to be modified
 * @text_content: String to be added
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, file;
	int length = 0;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_RDWR | O_APPEND);
	if (filedes < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}
	while (*(text_content + length))
			length++;
	file = write(filedes, text_content, length);
	close(filedes);
	if (file < 0)
		return (-1);
	return (1);	
}
