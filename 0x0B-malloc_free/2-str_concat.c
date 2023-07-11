#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates 2 strings
 * @s1: input string array
 * @s2: input string array
 * Return: pointer to new array
 */


char *str_concat(char *s1, char *s2)
{
	int i, j, k, n, len1 = 0, len2 = 0, size;
	char *new, *s;
	
	s = "";
	if (s1 == NULL && s2 == NULL)
		return (s);
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			len2++;
		}
	}
	size = len1 + len2 + 1;

	new = (char *)malloc(sizeof(char) * size);
	for (k = 0; k < len1; k++)
	{
		new[k] = s1[k];
	}
	for (n = 0; n < len2; k++, n++)
	{
		new[k] = s2[n];
	}
	return (new);
}
