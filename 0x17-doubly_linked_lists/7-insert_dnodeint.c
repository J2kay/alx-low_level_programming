#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @h: pointer to the head of the list
 * @idx: index at which to insert the new node
 * @n: data for the new node
 * Return: pointer to the new node, or NULL if the insertion is unsuccessful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current, *previous;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	previous = NULL;

	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (count == idx)
	{
		new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = previous;
		new_node->next = current;

		if (previous != NULL)
			previous->next = new_node;
		else
			*h = new_node;
		if (current != NULL)
			current->prev = new_node;
		return (new_node);
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

