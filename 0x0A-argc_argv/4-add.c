#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_checker - checks if a given char is number
 * @a: char to be checked
 * Return: 1, if its a number
 */

int num_checker(char *a)
{
	int i;
	int num;
	int len;

	len = strlen(a);
	i = 0;
	num = 1;
	while (i < len)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			num = num * 1;
		}
		else
			num = num * -1;
		i++;
	}
	return (num);
}
/**
 * main - prints addition of the number in the command line
 * @argc: the value of argv[]
 * @argv: the string array of the text in the command line
 * Return: 0 success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = num_checker(argv[i]);
			if (num == -1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
}
