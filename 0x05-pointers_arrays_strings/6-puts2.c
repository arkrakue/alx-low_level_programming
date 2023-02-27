#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character then followed bu a new line
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	length -= 1;
	for (i = 0; i <= length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
