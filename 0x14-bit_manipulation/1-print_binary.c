#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, bin, print = 0;

	if (n != 0)
	{
		for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
		{
			bin = (n >> i) & 1;
			if (bin || print)
			{
				_putchar(bin + '0');
				print = 1;
			}
		}
	}
	else
	{
		_putchar('0');
	}
}
