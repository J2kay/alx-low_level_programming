#include "main.h"

/**
 * *_strstr - locates the first instance of a substring
 * @haystack: array to be searched
 * @needle: substring to be found
 * Return: character pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0' && haystack[i] == needle[j]; i++)
	{
		for  (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
