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
	space = malloc((length + 1) * sizeof(char));
	if (space != NULL)
	{
		for (i = 0; i < length; i++)
		{
			space[i] = str[i];
		}
		space[i] = '\0';
		return (space);
	}
	else
		return (NULL);
}
