 #include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to first node
 * @index: input index of node to be deleted
 *
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *block, *old = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		block = *head;
		*head = (*head)->next;
		free(block);
		return (1);
	}

	while (old != NULL && i < index - 1)
	{
		old = old->next;
		i++;
	}
	block = old->next;
	old->next = block->next;
	free(block);
	return (1);
}



