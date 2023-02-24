#include "main.h"
#include <unistd.h>

/**
 * print_line - draw a straigh line in the terminal
 * @n: type int
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
