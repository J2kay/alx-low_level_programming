#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the some of the primary and secondary diagonal
 * @a: input array
 * @size: size of matix array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += a[i * size + j];
			}
			if ((i + j) == (size - 1))
			{d2 += a[i * size + j];
			}
		}
	}
	printf("%d", d1);
	printf(", ");
	printf("%d\n", d2);
}

