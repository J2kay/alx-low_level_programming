#include "lists.h"
/**
 * sum_dlistint - sums up all the data in a linked list
 * @head: pointer to the head
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
