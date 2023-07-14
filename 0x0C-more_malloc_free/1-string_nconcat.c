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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	size = len1 + n + 1;
	if (n < len2)
		new = malloc(sizeof(char) * size);
	else
		new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);
	for (k = 0; k < len1; k++)
		new[k] = s1[k];
	if (n >= len2 || n == 0)
		for (l = 0; l < len2; l++, k++)
			new[k] = s2[l];
	else
		for (l = 0; l < n; l++, k++)
			new[k] = s2[l];
	new[k] = '\0';
	return (new);
}
