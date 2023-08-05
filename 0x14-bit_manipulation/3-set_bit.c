#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: input index where the bit value should be changed
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1ul << index);
	return (1);
}