#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers in the command line
 * @argc: the value of the argv
 * @argv: the string array of the text in the command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int mul;
	int x;
	int y;

	mul = 1;
	if (argc > 2 && argc < 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
