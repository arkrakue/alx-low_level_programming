#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings s1 and s2
 * @s1: input string
 * @s2: input string
 * @n: minimum length of s2
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	array = malloc((len_s1 + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	for (; i < (len_s1 + n); i++)
	{
		if (i < len_s1)
		{
			array[i] = *s1;
			s1++;
		}
		else
		{
			array[i] = *s2;
			s2++;
		}
	}
	array[i] = '\0';
	return (array);
}
