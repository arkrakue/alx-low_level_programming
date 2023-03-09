#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the input integer
 * Return: the factorial of the integer
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		fac = factorial(n - 1);
		return (n * fac);
	}
	return (0);
}
