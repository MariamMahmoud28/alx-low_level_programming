#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (index > 0)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (!temp)
		return (-1);

	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}
