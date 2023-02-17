#include <stdio.h>
/**
 * main - the program prints the size of the various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char x;
	int m;
	long int n;
	long long int z;
	float q;
		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(q));
		return (0);
}
