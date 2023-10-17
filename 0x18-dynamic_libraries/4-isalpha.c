#include "main.h"
/**
 * _isalpha - checks if input is an alphabet.
 * @c: The character to print
 * Return: 0 on success else return 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


