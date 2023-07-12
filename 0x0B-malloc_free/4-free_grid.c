#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a;;ocated space
 * @grid: input 2d grid
 * @height: input integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
