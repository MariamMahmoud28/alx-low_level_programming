#include "main.h"

/**
 * *_memset - fils memory
 * @s: pointer
 * @b: pointer
 * @n: pointer
 * Return: s
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
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *z;

	if (size == 0 || nmemb == 0)
		return (NULL);
	z = malloc(sizeof(int) * nmemb);

	if (z == 0)
		return (NULL);

	_memset(z, 0, sizeof(int) * nmemb);

	return (z);
}
