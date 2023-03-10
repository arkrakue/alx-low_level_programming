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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
