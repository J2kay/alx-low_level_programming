#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key to value
 * @value: value of the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_v = key_index((unsigned char *) key, ht->size);
	hash_node_t *new_node = NULL;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->key);
		return (0);
	}

	if (value != NULL)
		new_node->value = strdup(value);
	else
		new_node->value = NULL;
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index_v];
	ht->array[index_v] = new_node;

	return (1);
}
