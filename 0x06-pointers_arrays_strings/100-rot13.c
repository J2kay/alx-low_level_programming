#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @a: input string array
 * Return: array pointer
 */

char *rot13(char *a)
{
	int i, j;
	char b[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = c[j];
			}
		}
	}
	return (a);
}
