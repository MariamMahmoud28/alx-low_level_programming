#include "lists.h"

/**
 * free_listint2 - function
 * @head: string
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *m;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		m = node;
		node = node->next;
		free(m);
	}
	*head = NULL;
}
