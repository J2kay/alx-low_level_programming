#include "lists.h"
/**
 * free_dlistint - frees all nodes
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
