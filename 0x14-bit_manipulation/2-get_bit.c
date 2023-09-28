#include "main.h"

/**
 * get_bit - function
 * @n: pointer
 * @index: pointer
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
