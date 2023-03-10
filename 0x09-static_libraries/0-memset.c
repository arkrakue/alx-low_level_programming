#include "main.h"

/**
 * _memset - buffers/fills a region of memory with a contant b
 * @s: the region of memory to be bufferd
 * @b: the contant to be buffered in the region
 * @n: the size of the area to be buffered
 * Return: the buffered string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ =  b;
	}
	return (s);
}
