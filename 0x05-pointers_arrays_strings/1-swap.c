#include "main.h"

/**
 * swap_int - swaps inputed integers
 * @a: input integer
 * @b: input integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
