#include "main.h"

/**
 * clear_bit - function
 * @n: pointer
 * @index: string
 * Return: void
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
