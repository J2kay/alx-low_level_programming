#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 on success
 */



int main(int argc, char *argv[])
{
	int i;


		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

	return (0);
}
