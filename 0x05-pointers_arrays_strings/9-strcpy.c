#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: pointer to the final string
 * @src: pointer of the initial string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *neu = dest;
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (neu);
}
