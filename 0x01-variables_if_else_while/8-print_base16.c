#include <stdio.h>
/**
 * main - the code entry of the program
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char h;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
		putchar('\n');
	return (0);
}
