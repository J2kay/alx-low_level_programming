#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 on success
 */

int main(int argc, char* argv[])
{
	int i, num = 0;
	for (i = 0; i < argc; i++)
	{
		num++;
	}
		printf("%d\n", num - 1);
		return (0);
}
