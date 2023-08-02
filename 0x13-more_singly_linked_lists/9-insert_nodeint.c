#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given index
 * @head: double pointer to the first node
 * @idx: input new node index
 * @n: input new data
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *cur = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (cur != NULL && i < idx - 1)
	{
		cur = cur->next;
		i++;
	}
	new->next = cur->next;
	cur->next = new;
	return (new);
}

