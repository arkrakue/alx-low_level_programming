#include "main.h"

/**
 * print_chessboard - prints a character chessboard on the console
 * @a: input multidimensional array to use
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int row_value;
	int columns;

	row_value = 8;
	for (rows = 0; rows < row_value; rows++)
	{
		for (columns = 0; columns < 8; columns++)
			_putchar(a[rows][columns]);
		_putchar('\n');
	}
}
