#include "main.h"

/**
 * print_rev - prints a string in reserve
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;

	while (x)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
