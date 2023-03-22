#include "function_pointers.h"

/**
 * print_name - print the name in the function argument
 * @f: function that prints name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	return;
}
