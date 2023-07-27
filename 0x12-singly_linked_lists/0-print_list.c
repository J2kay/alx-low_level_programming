#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: input pointer to the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;
	size_t tally = 0;
	const list_t *list = h;

	if (list == NULL)
	{
		return (0);
	}
	for (i = 0; list != NULL; i++)
		{
		if (list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", list->len, list->str);
		list = list->next;
		tally++;
	}
	return (tally);
}
