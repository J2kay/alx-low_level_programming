#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key to value
 * @value: value of the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = create_node(key, value);
	unsigned long int index_v = hash_djb2(key);
	hash_node_t *current_node = ht->array[index_v];

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (current_node == NULL)
	{
		ht->array[index_v] = new_node;
		return (1);
	}
	return (0);
}
