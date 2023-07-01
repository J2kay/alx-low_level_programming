#include "main.h"

/**
 * *cap_string - capitalizes the first letter of every word in the string
 * @a: input string array
 * Return: char
 */

char *cap_string(char *a)
{
	int i, n;
	char b[13] = ".,;!?\" ()\t{}\n";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (n = 0; n < 13; n++)
		{
			if (b[n] == a[i])
			{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			{
				a[i + 1] = a[i + 1] - 32;
			}
			}
		}
	}
	return (a);
}



