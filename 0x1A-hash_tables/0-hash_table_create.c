#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table with the gven size
 * @size: size of hash table
 * Return: pointer to newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	return (table);
}
