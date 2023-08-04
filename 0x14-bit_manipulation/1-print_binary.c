#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i, bin, check = 0;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bin = (n >> i) & 1;
		_putchar(bin + '0');
	}
	_putchar('\n');
}

