#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key for value
 * Return: value on success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_v;
	hash_node_t *check;

	if (ht == NULL || ht->size == 0 || ht->array == NULL ||
	    strlen(key) == 0 || key == NULL)
		return (NULL);
	index_v = key_index((const unsigned char *)key, ht->size);
	check = ht->array[index_v];
	while (check != NULL)
	{
		if (strcmp(check->key, key) == 0)
			return (check->value);
		check = check->next;
	}
	return (NULL);
}
