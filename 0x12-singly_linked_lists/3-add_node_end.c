#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a new node to the end
 * @head: double pointer
 * @str: input string pointer
 * Return: end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur, *new_node;
	int size = 0;

	cur = *head;
	while (str[size] != '\0')
	{
		size++;
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = size;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (cur == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new_node;
	return (new_node);
}
