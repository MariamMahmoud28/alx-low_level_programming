#include "main.h"

/**
 * *array_range - function
 * @min: pointer
 * @max: pointer
 * Return: arry
 */
int *array_range(int min, int max)
{
	int m, j;
	int *b;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	b = malloc(sizeof(int) * m);
	if (!b)
		return (NULL);
	for (j = 0; j < m; j++)
		b[j] = min++;
	return (b);
}
