#include "main.h"

/**
 * _strlen - returns the length of the string input
 * @s: string input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
