#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates two strings at n
 * @s1: input array
 * @s2: input array
 * @n: number of elements to concatinate
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, len1 = 0, len2 = 0, size;
	char *new;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			len2++;
	}
	size = len1 + len2 + 1;
	if (n < len2)
		new = malloc(sizeof(char) * (len1 + n + 1));
	else
		new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	for (k = 0; k < len1; k++)
		new[k] = s1[k];
	for (l = 0; n >= len2 && l < size; l++, k++)
		new[k] = s2[l];
	for (l = 0; n < len2 && l <= n; l++, k++)
		new[k] = s2[l];
	return (new);
}
