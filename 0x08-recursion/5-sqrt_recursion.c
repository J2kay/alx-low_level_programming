#include "main.h"

int square_root(int n, int p);

/**
 * _sqrt_recursion - prints the aquare root of a nunber
 * @n: input integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}


/**
 * square_root -prints the square root of a number
 * @n: input base number
 * @p: input exponent value
 * Return: integer
 */
int square_root(int n, int p)
{
	if (p * p > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (square_root(n, p + 1));
}

