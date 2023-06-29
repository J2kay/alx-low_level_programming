#include "main.h"

/**
 * *_strncpy - copies the elements of a string array into another array
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	
	return (dest);
}
