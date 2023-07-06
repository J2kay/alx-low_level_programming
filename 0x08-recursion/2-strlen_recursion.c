#include "main.h"

/**
 * _strlen_recursion - prints length of array with recursion
 * @s: input string array
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);

	}
	length = _strlen_recursion(s + 1);
	return (length + 1);
}
