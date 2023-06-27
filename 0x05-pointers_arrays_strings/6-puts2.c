#include "main.h"

/**
 * puts2 - prints every other element in the array
 * @str: the input array
 * Return: nothing
 */

void puts2(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
		_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
