#include "lists.h"

/**
 * *get_nodeint_at_index - function
 * @head: string
 * @index: pointer
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int m;

	for (node = head, m = 0; node && m < index; node = node->next, m++)
		;
	return (node);
}
