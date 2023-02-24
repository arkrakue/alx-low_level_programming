#include "main.h"

/**
 * print_most_numbers - print 0 to 9 without
 * 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		if (z != '2' && z != '4')
		{
			_putchar(z);
		}
	}
	_putchar('\n');
}
