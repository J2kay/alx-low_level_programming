#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return:
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (('0' + i) == '2' || ('0' + i) == '4')
		{
			continue;
		}
		_putchar('0' + i);
	}
		_putchar('\n');
}
