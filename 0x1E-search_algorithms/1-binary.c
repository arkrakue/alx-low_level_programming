#include <stdio.h>

/**
 * print_array - Prints array of integers
 * @array: Array to be printed
 * @size: Size of array
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size ; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - identifies a value in a sorted array of integers
 * @array: Point of the first element of the array
 * @size: Number of elements in the array
 * @value: value to identify
 * Return: Index of where the value is located, or -1
 * if value is not present or array is empty
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t id;

	if (!array)
		return (-1);
	while (low <= high)
	{
		print_array(array + low, high - low + 1);
		id = low + (high - low) / 2;
		if (array[id] < value)
			low = id + 1;
		else if (array[id] > value)
			high = id ? id = 1 : 0;
		else
			return (id);
	}

	return (-1);
}
