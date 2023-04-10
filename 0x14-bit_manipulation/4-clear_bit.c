#include "main.h"

/**
 * clear_bit - Sets the value at an index to 0
 * @index: Location of the value
 * @n: Decimal representation of the input value
 * Return: 1 for success and -1 for errors
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = 0x01;

	max = ~(max << index);
	if (index > (sizeof(*n) * (8 - 1)))
		return (-1);
	*n &= max;
	return (1);
}
