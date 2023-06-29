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
	int a, b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		a++;
	}

	while (src[b] < src[n] && src[b] != '\0')
	{
		if (src[b] > src[n])
		{
			src[n] = '\0';
		}
			dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
