#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string array
 * @s2: input string array
 * Return: 0 on success
 */


int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;
	while (s1[a] != '\0' && s2[b] == s1[a])
	{
		s1++;
		s2++;
	}

	return (s1[a] - s2[b]);
}
