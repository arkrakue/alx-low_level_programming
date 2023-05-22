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

	while (*src)
		*dest++ = *src++;
	return (neu);
}
