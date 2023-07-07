#include "main.h"

/**
 * _isupper - determines if an input is uppercase
 * @c: The character to input
 * Return: 1 if upper case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
