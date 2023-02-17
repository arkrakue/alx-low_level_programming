#include <stdio.h>
/**
 * main - the main code entry
 * Return: 0 (Success)
 */
int main(void)
{	char small;
	char big;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
		putchar('\n');
	return (0);

}
