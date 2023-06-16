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

	printf("Size of a char: %hu byte(s)\n", (unsigned short)sizeof(i));
	printf("Size of an int: %hu byte(s)\n", (unsigned short)sizeof(j));
	printf("Size of a long int: %hu byte(s)\n", (unsigned short)sizeof(k));
	printf("Size of a long long int: %hu byte(s)\n",
			(unsigned short)sizeof(l));
	printf("Size of a float: %hu byte(s)\n", (unsigned short)sizeof(m));

	return (0);
}
