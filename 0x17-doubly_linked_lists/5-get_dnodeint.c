#include "lists.h"
/**
 * get_dnodeint_at_index - returns tthe node at the nth index
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 * Return: pointer to the node at specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
