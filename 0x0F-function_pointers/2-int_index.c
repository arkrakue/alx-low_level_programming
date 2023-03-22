#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: sample space to search
 * @size: of the sample space
 * @cmp: function to search
 * Return: index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
