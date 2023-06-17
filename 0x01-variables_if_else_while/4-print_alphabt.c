#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program.
 * Description: This function serves as the starting
 * point of execution when the program is run.
 * It controls the flow of execution, invokes other
 * functions, performs calculations,
 * and interacts with the user.
 *
 * Return: 0 on successful execution.
 */



int main(void)
{
	char letter = 'a';

	while (letter < 'z')
{
	if (letter != 'q' && letter != 'e')
{
		putchar(letter);
}
		letter++;
}
		putchar('\n');

	return (0);
}
