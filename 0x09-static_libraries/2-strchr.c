#include "main.h"

/**
 * _strchr - locates a character c in the input string
 * @s: input string
 * @c: character to be located
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
