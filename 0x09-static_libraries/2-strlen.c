#include "main.h"
#include <stdio.h>
/**
 * _strlen - counts the length of a string
 * @s: dereference of an array
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
