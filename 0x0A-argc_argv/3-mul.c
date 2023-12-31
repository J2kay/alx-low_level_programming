#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
