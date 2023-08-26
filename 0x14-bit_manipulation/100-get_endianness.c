#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: integer
 *
 */
int get_endianness(void)
{
	unsigned long int a;
	char *ptr;

	ptr = (char *)&a;
	return ((int)*ptr);
}
