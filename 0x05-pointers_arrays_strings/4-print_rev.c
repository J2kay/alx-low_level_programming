#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string array
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (n > 0)
	{
		n--;
		_putchar(s[n]);
	}
	_putchar('\n');
}
