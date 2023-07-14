#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an aray
 * @nmemb: input array length
 * @size: input size of data type
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(size * nmemb);
	if (new == NULL)
		return (NULL);
	else
		return (new);
}
