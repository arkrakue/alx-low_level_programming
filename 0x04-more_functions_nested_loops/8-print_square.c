#include "main.h"
#include <unistd.h>

/**
 * print_square - prints a square inside the terminal
 * @size: type int
 * Return: void
 */

void print_square(int size)
{
	int l;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
