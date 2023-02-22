#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int m;
	int n;
	int x;

	for (m = 0; m <= 9; m++)
	{
		_putchar(48);
		for (m = 0; m <= 9; m++)
		{
			x = m * n;
			_putchar(44);
			_putchar(32);
			if (x <= 9)
			{
			_putchar(32);
			_putchar(x + 48);
			}
			else
			{
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
