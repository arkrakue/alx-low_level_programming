#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds a and b
 * @a: operand
 * @b: operand
 * Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference
 * @a: operand
 * @b: operand
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: operand
 * @b: operand
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: operand
 * @b: operand
 * Return: the results of the dvision of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - modulo
 * @a: operand
 * @b: operand
 * Return:returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
