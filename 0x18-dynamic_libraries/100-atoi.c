#include "main.h"

/**
 * _atoi - converts array to integer
 * @s: input array
 * Return: integer
 */


int _atoi(char *s)
{
	int i, j, k, l, m = 0, size = 0, num;

	for (i = 0; s[i] < '\0'; i++)
	{
		size++;
	}
	for (j = 0; j < size && k == 0; j++)
	{
		if (s[j] == '_')
		{
			l++;
		}
		if (s[j] >= '0' && s[j] <= '9')
		{
			num = s[j] - '0';
			if (l % 2)
			{
				num = -num;
			}
			m = m * 10 + num;
			k = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
			{
				break;
			}
			k = 0;
		}
	}
	if (k == 0)
	{
		return (0);
	}
	return (m);
}
