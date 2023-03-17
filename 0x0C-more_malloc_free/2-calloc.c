#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function allocates memory for an array of nmemb
 * elements of size bytes each
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
		*(array + i) = 0;
	return (array);
}
