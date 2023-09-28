#include "main.h"

/**
 * set_bit - function
 * @n: pointer
 * @index: string
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
