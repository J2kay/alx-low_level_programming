#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to dog
 * @d: pointer to dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->name != NULL)
			free(d->owner);
		free(d);
	}
}
