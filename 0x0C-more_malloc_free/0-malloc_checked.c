#include "main.h"

/**
 * *malloc_checked - allocates
 * @b: pointer
 * Return: value
 */

void *malloc_checked(unsigned int b)
{
	int *z = malloc(b);

	if (z == 0)
		exit(98);
	return (z);
}
