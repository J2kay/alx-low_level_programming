#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: input minimum value
 * @max: input maximum value
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *new, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	new = malloc(size * sizeof(int));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new[i] = min++;
	return (new);
}
