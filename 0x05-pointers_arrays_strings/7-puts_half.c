#include "main.h"

/**
 * puts_half - prints the second half of an array
 * @str: input string array
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, i, mid, length = 0;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
		length++;
	}

	mid = length / 2;
	if (n % 2 == 1)
	{
		mid = (length + 1) / 2;
	}

	for (i = mid; str[i] !=  '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
