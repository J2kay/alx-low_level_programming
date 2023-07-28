#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free allocated memory
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
