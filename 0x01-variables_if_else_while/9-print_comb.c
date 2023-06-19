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
	int number = '0';

	while (number <= '8')
{
	putchar(number);
	putchar(',');
	number++;
}

	putchar('9');

	putchar('\n');
	return (0);
}
