#include "main.h"
#include <stdlib.h>

/**
 * array_range - contain all the values from min (included) to max (included)
 * ordered from min to max
 * @min: minimun and starting value
 * @max: maximun and ending value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int length;
	int *array;
	int i;

	length = max - min;
	if (min > max)
		return (NULL);
	array = malloc((length + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		array[i] = min++;
	return (array);
}
