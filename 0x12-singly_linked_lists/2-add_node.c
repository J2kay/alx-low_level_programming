#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node to the beginning
 * @head:  double pointer
 * @str: input string pointer
 * Return: temp
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *top;
	int i, size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	top = malloc(sizeof(list_t));
	if (top == NULL)
		return (NULL);

	top->str = strdup(str);
	top->len = size;
	top->next = *head;
	*head = top;
	return (top);
}
