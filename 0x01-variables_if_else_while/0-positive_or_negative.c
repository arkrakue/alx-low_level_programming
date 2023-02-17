#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the program tells wheather a randon number
 *  generated from the code is positive, zero or negative
 * Return: 0(Success)
  */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
		srand(time(0));
			n = rand() - RAND_MAX / 2;
				/* your code goes there */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		} else if (n == 0)
		{
			printf("%d is zero\n", n);
		} else
		{
			printf("%d is negative\n", n);
		}
			return (0);
}
