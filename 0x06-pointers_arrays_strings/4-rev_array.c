#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array
 * @n: number of elements
 *
 * Return: value
 */

void reverse_array(int *a, int n)
{
	int m, i, r;

	for (m = 0, i = (n - 1); m < i; m++, i--)
	{
		r = a[m];
		a[m] = a[i];
		a[i] = r;
	}
}
