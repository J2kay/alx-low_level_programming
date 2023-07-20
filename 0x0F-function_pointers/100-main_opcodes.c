#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, space;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	space = atoi(argv[1]);
	if (space < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < space; i++)
	{
		if (i == space - 1)
		{
		printf("%02hhx", arr[i]);
		break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
