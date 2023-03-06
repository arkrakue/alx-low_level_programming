#include "main.h"

/**
 * _strchr - locates a character c in the input string
 * @s: input string
 * @c: character to be located
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
