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
        int i, sum = 0, num;

        if (argc < 2)
        {
                printf("error\n");
                return (1);
        }
        if (argc > 1)
        {
                for (i = 1; i < argc; i++)
                {
			num = atoi(argv[i]);
			if (num > 0)
			{
                        sum += num;
			}
                }
                printf("%d\n", sum);
        }
        return (0);
}
