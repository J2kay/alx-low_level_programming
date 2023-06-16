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
#include <stdio.h>

int main(void)
{
	char i;
	int j;
	long int k;
	long long l;
	float m;

	printf("The size of a char: %hu bytes(s)\n.", (unsigned short)sizeof(i));
	printf("The size of an int: %hu bytes(s)\n.", (unsigned short)sizeof(j));
	printf("The size of a long int: %hu bytes(s)\n.", (unsigned short)sizeof(k));
	printf("The size of a long long int: %hu bytes(s)\n.",
			(unsigned short)sizeof(l));
	printf("The size of a float: %hu bytes(s).\n", (unsigned short)sizeof(m));

	return (0);
}
