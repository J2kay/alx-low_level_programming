#include "lists.h"
/**
 * listint_len - counts the number of elements in a node
 * @h: pointer to first node
 * Return: tally
 */
size_t listint_len(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
