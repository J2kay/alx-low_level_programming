#include "lists.h"
/**
 * pop_listint - deletes the head of the node
 * @head: pointer to first node
 * Return: deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int v;

	if (*head == NULL)
		return (0);
	del = *head;
	*head = (*head)->next;
	v = del->n;
	free(del);
	return (v);
}
