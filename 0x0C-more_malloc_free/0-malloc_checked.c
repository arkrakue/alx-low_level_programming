#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using the malloc function
 * @b: size of the allocated space
 * Return:pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
