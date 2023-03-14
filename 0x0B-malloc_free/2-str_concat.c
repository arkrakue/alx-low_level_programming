#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates(joins) to strings
 * @s1: first string to be represented
 * @s2: second to be represented
 * Return: pointer to the joint string and NULL is not successful
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1;
	int length_s2;
	int i;
	int j;
	char *array;

	if (s1 == 0)
		s1 = "";
	length_s1 = 0;
	while (s1[length_s1] != '\0')
		length_s1++;
	if (s2 == 0)
		s2 = "";
	length_s2 = 0;
	while (s2[length_s2] != '\0')
		length_s2++;
	array = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		array[i + j] = s2[j];
		j++;
	}
	array[i + j] = '\0';
	return (array);
}

