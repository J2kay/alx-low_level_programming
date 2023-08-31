#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input pointer to string array
 * Return: result of conversion or 0 on error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, bin = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		bin =  2 * bin + (b[i] - '0');
	}
	return (bin);
}
