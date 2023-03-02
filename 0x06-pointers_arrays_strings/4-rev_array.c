#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: input array
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int neu;

	for (i = 0; i < n--; i++)
	{
		neu = a[i];
		a[i] = a[n];
		a[n] = neu;
	}
}
