#include "lists.h"

/**
 * listint_len - function
 * @h: string
 * Return: void
 */
size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h != 0)
	{
		h = h->next;
		f++;
	}
	return (f);
}
