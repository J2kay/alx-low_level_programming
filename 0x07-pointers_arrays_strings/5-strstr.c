#include "main.h"

/**
 * *_strstr - locates the first instance of a substring
 * @haystack: array to be searched
 * @needle: substring to be found
 * Return: character pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
	}
	return ('\0');
}
