#include "main.h"
/**
 * flip_bits calculates the number of bits
 *   you would nee to flip to go from n to m
 * @n: input number
 * @m: input number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tally = 0, check = n ^ m;

	while (check)
	{
		tally += check & 1;
		(check) >>= 1;
	}
	return (tally);
}
