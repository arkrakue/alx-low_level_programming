#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int x;
	int i;
	char rev;

	x = 0;
	i = 0;
	while (s[x] != '\0')
		x++;
	while (i < x--)
	{
		rev = s[x];
		s[i++] = s[x];
		s[x] = rev;
	}
}
