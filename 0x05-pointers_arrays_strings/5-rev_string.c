#include "main.h"

/**
 * rev_string - reverses the string
 * @s: input array
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, n, store, length, mid;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	length = n;
	mid = length / 2;


	for (i = 0; i < mid; i++)
	{
		store = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = store;
	}

}
