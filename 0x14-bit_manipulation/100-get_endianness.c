#include "main.h"

/**
 * get_endianness - Checks for endianness
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *ch = (char *) &j;

	if (*ch)
		return (1);
	return (0);
}
