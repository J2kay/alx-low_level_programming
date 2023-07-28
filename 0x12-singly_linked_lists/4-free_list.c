#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free allocated memory
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur->str);
		free(cur);
	}
}
