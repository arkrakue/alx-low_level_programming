#include "main.h"

/**
 * _strspn - prints the length of the prefix substring
 * @s: input string
 * @accept: input character
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int id;
	char *str = accept;

	while (*s)
	{
		id = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				id = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = str;
		if (id == 0)
			break;
	}
	return (count);
}
