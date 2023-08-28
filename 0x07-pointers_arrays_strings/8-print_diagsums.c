#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: array of int
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int m, f1 = 0, f2 = 0;

	for (m = 0; m < size; m++)
	{
		f1 += a[m];
		f2 += a[size - m - 1];
		a += size;
	}
	printf("%d, ", f1);
	printf("%d\n", f2);
}
