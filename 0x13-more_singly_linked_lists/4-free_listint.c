#include "lists.h"

/**
 * free_listint - function
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *null;

		while (head != NULL)
		{
		null = head;
		head = head->next;
		free(null);
	}
}
