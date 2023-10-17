#include "main.h"

/**
 * main - is the entry point of the program.
 *
 * Description: This function prints _putchar
 *
 *
 * Return: 0 on successful execution.
 */

int main(void)

{
	char *c = "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
