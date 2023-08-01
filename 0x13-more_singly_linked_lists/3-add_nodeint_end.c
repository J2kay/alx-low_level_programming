#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end
 * @head: pointer to the first node
 * @n: input value of new member
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cur;

	cur = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new;
	}
	new->next = NULL;
	return (new);
}
