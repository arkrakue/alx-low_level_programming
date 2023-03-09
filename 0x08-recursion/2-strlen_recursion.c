#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: input sring
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len;
	int length;

	len = 0;
	if (*s != '\0')
	{
		len++;
		length = _strlen_recursion(s + 1);
		return (len + length);
	}
	return (0);
}
