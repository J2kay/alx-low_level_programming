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

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
