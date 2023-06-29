#include "main.h"

/**
 * *_strncat - concatenates two strings based on string array index
 * @dest: destination pointer
 * @src: source pointer
 * @n: input integer or array index
 * Return: destination pointer
 */


char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (c = 0; src[c] != '\0'; c++)
	{
	}
	for (b = 0; src[b] < src[n]; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
