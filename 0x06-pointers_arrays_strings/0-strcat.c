#include "main.h"

/**
 * *_strcat - concatinates two strings
 * @dest: input string pointer
 * @src: input string pointer
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int a, b;



	for (b = 0; dest[b] != '\0'; b++)
	{
	}

	 for (a = 0; src[a] != '\0'; a++)
        {
		dest[b + a] = src[a];
        }
	return (dest);
}

