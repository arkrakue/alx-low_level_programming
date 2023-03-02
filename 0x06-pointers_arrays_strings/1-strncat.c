#include "main.h"

/**
 * *_strncat - concatenate a size n of src string to the dest string
 * @dest: first input string
 * @src: second input string
 * @n: size of src to be added to dest
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength;
	int i;

	destlength = 0;
	while (dest[destlength] != '\0')
		destlength++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlength + i] = src[i];
	}
	dest[destlength + i] = '\0';
	return (dest);
}
