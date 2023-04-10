#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: Number of bits needed to be flipped
 * @m: The number to set other equal
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_flips = 0;
	unsigned long int XOR = (n ^ m);

	while (XOR)
	{
		num_flips += XOR & 1;
		XOR >>= 1;
	}
	return (num_flips);
}
