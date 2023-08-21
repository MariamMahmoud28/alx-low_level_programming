#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *		using two input
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
