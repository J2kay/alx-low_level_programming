#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: key to convert to hash
 * @size: size of array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i_value = 0;

	if (key == NULL || size == 0)
		return (0);
	i_value = hash_djb2(key);

	return (i_value % size);
}
