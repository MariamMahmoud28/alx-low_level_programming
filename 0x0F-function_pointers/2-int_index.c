#include "function_pointers.h"

/**
 * int_index - function
 * @array: pointer
 * @size: pointer
 * @cmp: pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f = 0;

	if (array && size && cmp)
		while (f < size)
		{
			if (cmp(array[f]))
				return (f);
			f++;
		}
	return (-1);
}
