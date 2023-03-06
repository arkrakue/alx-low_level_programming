#include "main.h"

/**
 * _strstr- finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: the first input string
 * @needle: the second input string
 * Return: pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *first;
	char *second;

	first = needle;
	second = haystack;
	while (*haystack)
	{
		second = haystack;
		needle = first;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = second + 1;
	}
	return (NULL);
}
