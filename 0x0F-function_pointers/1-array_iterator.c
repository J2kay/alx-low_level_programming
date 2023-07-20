#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - executes a function given as a param
 * @array: array pointer
 * @size: size of an array
 * @cmp: pointer to a function
 * Return: integer
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
