#include <stdio.h>

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
	char digit = '0';

	while (digit <= '9')
{
	putchar(digit);
	digit++;
}
	digit = 'a';

	while (digit <= 'f')
{
	putchar(digit);
	digit++;
}
	putchar('\n');
	return (0);
}
