#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Imput decimal value
 * @index: index of bit to be returned
 * Return: value of bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > (sizeof(n) * (8 - 1)))
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
