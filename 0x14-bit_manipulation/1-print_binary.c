#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i, bin, print = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
		{
			bin = (n >> i) & 1;
			if (bin || print)
			{
				_putchar(bin + '0');
				print = 1;
			}
		}
	}
}