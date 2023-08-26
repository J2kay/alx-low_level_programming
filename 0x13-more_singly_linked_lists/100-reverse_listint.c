#include "lists.h"
/**
 * reverse_listint - reverses a singly linked node
 * @head: pointer to the head of the list
 * Return: pointer to head of the reversed nodes
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *begin, *end;

	if (head == NULL || *head == NULL)
		return (NULL);
	end = NULL;
	while ((*head)->next != NULL)
	{
		begin = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = begin;
	}
	(*head)->next = end;
	return (*head);
}
