#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	int d, p, q;

	for (d = '0'; d < '9'; d++)
{
	for (p = d + 1; p <= '9'; p++)
{
	for (q = p + 1; q <= '9'; q++)
{
	if ((p != d) != q)
{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && p == '8' && q == '9')
	continue;
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
