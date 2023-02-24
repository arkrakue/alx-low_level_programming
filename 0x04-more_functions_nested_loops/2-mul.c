#include <unistd.h>
#include "main.h"

/**
 * mul - multiplies two integers
 * @a: type is int
 * @b: type is int
 * Return: 0(success)
 */

int mul(int a, int b)
{
	int c;

	c = a * b;
	_putchar(c + '0');
	return (c);
}
