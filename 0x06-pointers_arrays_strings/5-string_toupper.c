#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: input string
 * Return: char
 */

char *string_toupper(char *a)
{
	char *change = a;

	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - 32;
		a++;
	}
	return (change);
}
