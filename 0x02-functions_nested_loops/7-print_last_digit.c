#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to input
 *
 * Return: 1 on success else return -1
 */


int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}
	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');

	return (last);
}
