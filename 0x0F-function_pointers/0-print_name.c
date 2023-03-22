#include "function_pointers.h"

/**
 * print_name - print the name in the function argument
 * @f: function that prints name
 * @name: name to print
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
