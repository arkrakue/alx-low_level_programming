#include "main.h"
#include <unistd.h>

/**
 * _isupper - checks for uppercase letters
 * @c: type is int
 * Return: 0(success)
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

