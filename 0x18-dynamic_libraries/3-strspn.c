#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string array
 * @accept: input array
 * Return: unsighned integer
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for  (j = 0; accept[j] != '\0'; j++)
		{
			if  (s[i] == accept[j])
			{
				length++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (length);
		}
	}
	return (length);
}

