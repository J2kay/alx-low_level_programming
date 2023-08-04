#include "main.h"
/**
 * get_bit - gets the bit value at index
 * @n: number to be converted to binary
 * @index: index of value to be returned
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	return ((n >> index) & 1);
}
