#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet - prints the alphabet in lowercase.
 *
 *
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}

