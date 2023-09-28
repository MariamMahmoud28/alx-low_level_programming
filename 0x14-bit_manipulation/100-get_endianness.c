#include "main.h"

/**
 * get_endianness - function
 * Return: void
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
