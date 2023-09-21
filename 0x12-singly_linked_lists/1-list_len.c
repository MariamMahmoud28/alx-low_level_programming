#include "lists.h"
/**
 * list_len - function
 * @h: string
 *
 * Return: void
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
