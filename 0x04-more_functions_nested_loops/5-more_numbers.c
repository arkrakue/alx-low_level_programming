#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0
 * to 14
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar(a + '0');
			}
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}