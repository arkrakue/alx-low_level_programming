#include <stdio.h>
/**
 * main - the main code entry
 * Return: 0 (Success)
 */
int main(void)
{	char smallbig;

	for (smallbig = 'a'; smallbig <= 'z'; smallbig++)
	{
		putchar(smallbig);
	}
	for (smallbig = 'A'; smallbig <= 'Z'; smallbig++)
	{
		putchar(smallbig);
	}
		putchar('\n');
	return (0);
}
