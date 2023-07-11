#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string array pointer
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	int i, j, len = 0;
	char *new;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		new[j] = str[j];
	}
	return (new);
}


