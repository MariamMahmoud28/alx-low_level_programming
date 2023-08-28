#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: memory
 * @src: source
 * @n: length of src
 *
 * Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
