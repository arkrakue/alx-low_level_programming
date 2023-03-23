#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with separator
 * @n: number of arguments
 * @separator: chac separator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		if (i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
