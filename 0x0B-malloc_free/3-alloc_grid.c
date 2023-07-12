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
	int i, j, **new;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new = (int **)malloc(sizeof(int *) * width);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		new[i] = (int *)malloc(sizeof(int) * height);
		if (new[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(new[j]);
			}
			free(new);
			return (NULL);
		for (j = 0; j < height; j++)
		{
			new[i][j] = 0;
		}
		}
	}
	return (new);
}
