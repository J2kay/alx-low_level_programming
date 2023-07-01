#include "main.h"

/**
 * *cap_string - capitalizes the first letter of every word in the string
 * @a: input string array
 * Return: char
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 32 || a[i] == '\n' || a[i] == 46 || a[i] == '\t')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
	}
	return (a);
}



