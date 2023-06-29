#include "main.h"

/**
 * *_strncpy - copies the elements of a string array into another array
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
	{

	}
	for (b = 0; b <= n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
