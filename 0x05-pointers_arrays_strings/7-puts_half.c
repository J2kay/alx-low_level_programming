#include "main.h"

/**
 * puts_half - prints the second half of an array
 * @str: input string array
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, i, mid, length;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	length = n;
/**	mid = length / 2;*/
	if (n % 2 == 0)
 	{
		mid = length / 2;
	}
	else
	{
		mid = (length / 2) - 1;
	}

	for (i = mid; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
