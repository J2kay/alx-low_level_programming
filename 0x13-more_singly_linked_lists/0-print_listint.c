#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to first node
 * Return: tally
 */
size_t print_listint(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		tally++;
		h = h->next;
	}
	return (tally);
}

