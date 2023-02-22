#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		putchar('\n');
	}


}
