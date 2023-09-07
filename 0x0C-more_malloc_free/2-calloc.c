#include "main.h"

/**
 * *_memset - fils memory
 * @s: pointer
 * @b: pointer
 * @n: pointer
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - function
 * @nmemb: array
 * @size: size of element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	_memset(m, 0, nmemb * size);

	return (m);
}
