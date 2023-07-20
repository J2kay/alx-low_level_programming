#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a param
 * @array: array pointer
 * @size: size of an array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
		action(array[i]);
	}
}
