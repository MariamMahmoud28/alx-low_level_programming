#include "lists.h"

/**
 * pop_listint - function
 * @head: string
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *n;
	int m;

	if (!head || !*head)
		return (0);

	n = (*head)->next;
	m = (*head)->m;
	free(*head);
	*head = n;
	return (m);
}
