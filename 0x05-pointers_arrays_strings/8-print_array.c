#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array of
 * integers then followed by a new line
 * @a: the input array
 * @n: the n elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
