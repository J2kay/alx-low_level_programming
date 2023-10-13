#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a linked list
 * @head: pointer to the head of a list
 * @n: data for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *first = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (first->next != NULL)
		{
			first = first->next;
		}
		first->next = new_node;
		new_node->prev = first;
	}
	return (new_node);
}
