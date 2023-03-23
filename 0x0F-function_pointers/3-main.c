#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check code
 * @argc: size of arg v
 * @argv: array of command line arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int opr1;
	int opr2;
	int results;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (*func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	opr1 = atoi(argv[1]);
	opr2 = atoi(argv[3]);
	results = func(opr1, opr2);
	printf("%d\n", results);
	return (0);
}
