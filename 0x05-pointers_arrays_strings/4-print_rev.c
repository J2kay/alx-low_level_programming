#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string array
 * Return: nothing
 */

void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	
	while (n > 0)
	{
		n--;
		_putchar(s[n]);
	}
	_putchar('\n');
}
