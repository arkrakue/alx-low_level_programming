#include <stdio.h>
/**
 * main - the program prints the size of the various types on the computer
 * return: 0 (success)
 */
int main (void)
{
	char x;
	int m;
	long int n;
	long long int z;
	float q;
		printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of long long int: %lu byte(s)\nSize of a float: %lu byte(s)",(unsigned long)sizeof(x),(unsigned long)sizeof(m),(unsigned long)sizeof(n),(unsigned long)sizeof(z),(unsigned long)sizeof(q));
		return (0);
}
