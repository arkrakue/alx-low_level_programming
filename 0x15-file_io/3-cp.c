#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int from_fdes, to_fdes;
	ssize_t num_read, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	from_fdes = open(argv[1], O_RDONLY);
	if (from_fdes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fdes = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (to_fdes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from_fdes);
		exit(99);
	}
	num_read = read(from_fdes, buffer, 1024);
	while(num_read > 0)
	{
		num_written = write(to_fdes, buffer, num_read);
		break;
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fdes);
			close(to_fdes);
			exit(99);
		}
	}
	if (num_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from_fdes);
		close(to_fdes);
		exit(98);
	}
	if (close(to_fdes) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't  close fd %d\n", to_fdes);
		exit(100);
	}
	return (0);
}
