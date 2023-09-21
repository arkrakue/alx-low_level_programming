#include <stdio.h>

/**
 * linear_search - Identidies a value in an array of integers
 * @array: Pointer of array under question
 * @size: Number of element in the array
 * @value: Value to identify
 * Return: First index of where the value is located, -1
 * if value is not present or array is empty
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0, i < size, i++)
	{
		printf("Value cheacked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1)
}
