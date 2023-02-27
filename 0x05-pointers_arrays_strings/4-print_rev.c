#include "main.h"

/**
 * print_rev - prints a string in reserve
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	x = _strlen(s);
	while (x != 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
