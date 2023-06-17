#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

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
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	printf("Last digit of %d is %d", n, lastdigit);

	if (lastdigit > 5)
	{
		printf(" and is greater than 5\n");
	} else if (lastdigit == 0)
	{
		printf(" and is 0\n");
	} else if (lastdigit < 6 && lastdigit != 0)
	{
		printf(" and is less than 6 and not 0\n");
	} else
	{
		printf("error");
	}

	return (0);
}
