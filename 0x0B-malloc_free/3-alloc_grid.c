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

	new = malloc(sizeof(int *) * height);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int) * width);
		if (new[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(new[i]);
			}
			free(new);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new[i][j] = 0;
		}
	}
	return (new);
}
