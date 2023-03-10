#include "main.h"
#include <stdio.h>
/**
 * main - function prints out the number of arguments passed
 * @argc: the number of argument passed
 * @argv: the string array of the text in the command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
