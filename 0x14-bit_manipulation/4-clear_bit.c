#include "main.h"
/**
 * sets value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index to change the value
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check;
	check = 1ul << index;
	*n &= ~check;
	return (1);
}
