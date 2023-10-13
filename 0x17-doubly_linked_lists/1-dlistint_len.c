#include "lists.h"
/**
 * dlistint_len - preints the length of a linked list
 * @h: pointer to the first node
 * Return: number of nodes in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *first = h;
	size_t sum = 0;

	while (first != NULL)
	{
		sum++;
		first = first->next;
	}
	return (sum);
}
