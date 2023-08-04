#include "main.h"
/**
 * get_bit - gets the bit value at index
 * @n: number to be converted to binary
 * @index: index of value to be returned
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, arr[100], end;

	end = 99;
	for (i = 0; i <= index && n > 0; i++)
	{
		arr[i] = n % 2;
		n /= 2;
	}
	return (arr[i]);
}
