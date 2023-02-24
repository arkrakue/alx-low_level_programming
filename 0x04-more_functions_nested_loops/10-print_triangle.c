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
	int d;

	if (size > 0)
	{
		h = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = h; j > 0; j--)
			{
				_putchar(' ');
			}
			for (d = 0; d <= i; d++)
			{
				_putchar(35);
			}
		h--;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
