#include <stdio.h>
/**
 * print_to_98 - prints natural num. from
 * n to 98
 * @n: number n
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			printf("%d ", n);
		}
	}
	else if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			printf("%d ", n);
		}
	}
	printf("%d\n", n);
}
