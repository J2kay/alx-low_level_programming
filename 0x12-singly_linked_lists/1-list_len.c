#include "lists.h"
/**
 * list_len - prints the length of a list
 * @h: input pointer to head
 *
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	int i;
	size_t count = 0;
	const list_t *list = h;

	for (i = 0; list != NULL; i++)
	{
		count++;
		list = list->next;
	}
	return (count);
}
