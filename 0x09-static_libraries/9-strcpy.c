#include "main.h"

/**
 * *_strcpy - copies a string from one address to the other
 * @dest: input pointer
 * @src: input pointer
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, length = 0, i;
	char **new;

	new = &dest;

	while (src[n] != '\0')
	{
		n++;
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (*new);
}
