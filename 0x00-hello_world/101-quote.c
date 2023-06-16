/**
 * main - Entry point of the program.
 * Description: This function serves as the starting
 * point of execution when the program is run.
 * It controls the flow of execution, invokes other
 * functions, performs calculations,
 * and interacts with the user.
 *
 * Return: 1 on successful execution.
 */
#include <stdio.h>
#include <unistd.h>


int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));

	return (1);
}
