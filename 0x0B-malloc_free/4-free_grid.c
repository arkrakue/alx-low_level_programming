#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2 dimensional array memory space
 * @grid: the array to be  freed
 * @height: the number of rows in the array
 * Return: void:
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (grid == NULL)
		return (NULL);
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
