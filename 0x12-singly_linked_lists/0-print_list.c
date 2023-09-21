#include "lists.h"

/**
 * _strlen - returns string
 * @s: string length
 *
 * Return: value
 */
int _strlen(char *s)
{
	int m = 0;

	if (!s)
		return (0);
	while (*s++)
		m++;
	return (m);
}

/**
 * print_list - function
 * @h: string
 *
 * Return: value
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		m++;
	}
	return (m);
}
