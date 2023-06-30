#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: in put array index
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, store;

	while (i < n / 2)
	{
		store = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = store;
		i++;
	}
}



