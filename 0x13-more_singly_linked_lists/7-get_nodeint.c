#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of listint_t list
 * @head: pointer to first node
 * @index: input index of node to get
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
