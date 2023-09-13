#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: pointer
 * @size: pointer
 * @action: pointer
 * Return: anything
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while(array <= end)
			action(*array++);
}
