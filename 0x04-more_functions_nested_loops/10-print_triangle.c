#include "main.h"
#include <unistd.h>

/**
 * print_triangle -prints a triangle inside
 * the terminal
 * @n: type int
 * Return: void
 */

void print_triangle(int size)
{
	int r;
	int c;
	int h;

	if (size <= 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
			_putchar('#');
		for (h = r + c ; h >= 1; h--)
			_putchar('#');
		_putchar('\n');
	}
}
