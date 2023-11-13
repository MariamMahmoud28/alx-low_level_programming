#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to insert into the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
