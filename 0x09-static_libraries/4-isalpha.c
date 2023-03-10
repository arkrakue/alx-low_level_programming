#include "main.h"
/**
 * _isalpha - checks if an input c
 * is a letter or otherwise
 * returns a 1 if it is a letter,lowercase/uppppercase
 * and returns 0 for otherwise
 * @c: The character in ASCII code
 * Return: 1 for letter, 0 for any other
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 95 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}



}
