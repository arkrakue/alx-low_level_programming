#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the input integer
 * @y: the raisesd to the power number i.e the superscript
 * Return: power if x raised to y
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 1)
	{
		power = _pow_recursion(x, y - 1);
		return (x * power);
	}
	return (0);
}
