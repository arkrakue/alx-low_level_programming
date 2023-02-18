#include <stdio.h>
/**
 * main - the main code entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
	char small;
	char e;
	char q;

	e = 'e';
	q = 'q';
	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != e && small != q)
		{
			putchar(small);
		}
	}
			putchar('\n');
	return (0);
}
