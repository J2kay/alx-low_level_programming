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
	int i, sum = 0, j;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (argv[i][j] < 48 || argv[i][j]  > 57)
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
