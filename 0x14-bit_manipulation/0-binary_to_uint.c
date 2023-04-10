#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary representation of the number
 * Return: the decimal representation
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = dec * 2 + (*b++ - '0');
	}
	return (dec);
  
}
