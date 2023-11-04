#include "hash_tables.h"
#include <string.h>
/**
 * create_node - creates a new node
 * @key: key of value
 * @value: value of the key
 * Return: new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));
	node->key = (const char*) malloc(strlen(key) + 1);
	node->value = (const char*) malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node)
}

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


