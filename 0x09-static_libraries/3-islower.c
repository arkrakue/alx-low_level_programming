#include "main.h"
/**
 * _islower - Shows 1 when the input is a
 * lowercase character. Another cases, shows 0
 * @c: The character in ASCII code
 * Return: 1 for lowercase, 0 for something else
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
}
