#include "main.h"

/**
 * _memcpy - copies a memory area to the dest memory area
 * @dest: destination of the copied data
 * @src: source of the copied data
 * @n: size of data to be copied from src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_cpy = dest;

		while (n-- > 0)
			*dest++ = *src++;
		return (dest_cpy);
}
