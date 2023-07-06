#include "main.h"

/**
 * factorial - calculates factorial of inputed integer
 * @n: input integer
 * Return: -1 on error facto on success
 */

int factorial(int n)
{
	int facto;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	facto = n * factorial(n - 1);
	return (facto);
}
