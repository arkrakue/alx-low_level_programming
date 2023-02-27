#include "main.h"

/**
 * puts_half - prints half of the input string then followed by a new line
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int length;
	int half;
	int i;

	length = 0;
	while (str[length] != '\0')
		length++
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length + 1) / 2;
	for (i = half; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
