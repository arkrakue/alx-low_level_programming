#include "main.h"

int _sqrt(int i, int n);

/**
 *  _sqrt_recursion - returns the square root on the number n
 *  @n: the input integer
 *  Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	int sqrt_n;

	if (n < 0)
		return (-1);
	sqrt_n = _sqrt(1, n);
	return (sqrt_n);
}
/**
 * _sqrt - finds the sqrt of n with an intial value of i=1
 * @n: the input value
 * @i: the value to be set to 1
 * Return: sqrt of n
 */
int _sqrt(int i, int n)
{
	if (i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}
