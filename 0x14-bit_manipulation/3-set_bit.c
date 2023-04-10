#include "main.h"

/**
 * set_bit - Sets the value of a bit at aan index to 1
 * @index: Location of the bit
 * @n: Decimal representation of the input number
 * Return: bit's new value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (index > (sizeof(*n) * (8 - 1)))
		return (-1);
	*n |= max;
	return (1);
}
