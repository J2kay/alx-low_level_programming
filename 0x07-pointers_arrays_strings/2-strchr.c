#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer to string array
 * @c: character to be located
 * Return: char pointer
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c && c != '\0')
		{
			return (s + i);
		}
	}
	return ('\0');
}
