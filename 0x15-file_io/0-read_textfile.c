#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the POSIX standard output
 * @filename: Name of rhe file
 * @letters: Number of letters to read and print
 * Return: Actual nunmber of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t num_read, num_written;
	char *temp;

	if (filename == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	num_read = read(filedes, temp, letters);
	if (num_read == -1)
		return (0);
	num_written = write(STDOUT_FILENO, temp, num_read);
	if (num_written == -1 || num_written != num_read)
		return (0);
	close(filedes);
	free(temp);
	return (num_written);
}
