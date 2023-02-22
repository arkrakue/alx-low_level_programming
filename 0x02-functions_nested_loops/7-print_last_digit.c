#include "main.h"
/**
 * print_last_digit - prints the last digit of
 * the number oassed thrrough
 * @a: input number as an integer
 * Return: the last digi
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last > 0)
	{
		_putchar(last + 48);
		return (last);
	}
	else
	{
		_putchar(-last + 48);
		return (-last);
	}
}
