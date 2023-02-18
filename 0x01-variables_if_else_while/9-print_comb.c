#include <stdio.h>
/**
 * main - the code entry of the program
 * Return: 0(Success)
 */
int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
