#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: input pointer to the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;
	size_t tally = 0;

	if (h == NULL)
		return (1);
	for (i = 0; h != NULL; i++)
		{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		tally++;
	}
	return (tally);
}
