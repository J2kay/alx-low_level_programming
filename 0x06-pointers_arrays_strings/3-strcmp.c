#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string array
 * @s2: input string array
 * Return: 0 on success
 */


int _strcmp(char *s1, char *s2)
{
	/**int a = 0, b = 0;*/
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		if (*s1 > *s2 || *s1 < *s2)
		{
		return (-1);
		}
	}
	return (0);
}
