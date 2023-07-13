#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input unsigned integer
 * Return: void
 */


void *malloc_checked(unsigned int b)
{
	void *new;

	new = (unsigned int *)malloc(sizeof(unsigned int) * b);
	if (new == NULL)
	{
		exit(98);
	}
	return (new);
}
