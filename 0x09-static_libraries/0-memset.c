#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constant
 * @n: mix bytes
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}

	return (s);
}
