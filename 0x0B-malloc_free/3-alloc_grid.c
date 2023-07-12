#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array
 * @width: input integer
 * @height: input integer
 * Return: 0 on success
 */

int **alloc_grid(int width, int height)
{
	int i, j, *new;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new = (int *)malloc(sizeof(int) * width * height);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(new + i * height + j) = 0;
		}
	}
	return (0);
}


