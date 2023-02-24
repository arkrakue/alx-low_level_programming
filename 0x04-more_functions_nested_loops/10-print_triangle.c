#include "main.h"
#include <unistd.h>

/**
 * print_triangle -prints a triangle inside
 * the terminal
 * @size: type int
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int h;

	h = size - 1;
	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < h)
					_putchar(' ');
				else
					_putchar('#');

			}
			h--;
			putchar('\n');
		}
	}
	else
		_putchar('\n');
}
