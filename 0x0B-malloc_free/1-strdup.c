#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - creates a newly allocated memory space which
 * contains a copy of the string parameter
 * @str: the string parameter
 * Return: pointer to the newly allocated nemory space
 */

char *_strdup(char *str)
{
	int length;
	int i;
	char *space;

	if (str == 0)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	space = malloc(length * sizeof(char));
	for (i = 0; i < length; i++)
	{
		space[i] = str[i];
	}
	return (space);
}
