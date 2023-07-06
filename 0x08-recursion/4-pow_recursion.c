#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: input integer base
 * @y: input integer exponent
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	int expo;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	expo = x * _pow_recursion(x, y - 1);
	return (expo);
}
