#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet in lowercase 10x.
 */






void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
}
