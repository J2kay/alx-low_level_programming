#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates new array
 * @size: size of new array
 * @c: characters for array
 * Return: pointer to new array or NULL on failure
 */



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new;

	if (size == 0)
	{
		return (NULL);
	}

	new = (char *)malloc(sizeof(char) * size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new[i] = c;
	}
	return (new);
}

