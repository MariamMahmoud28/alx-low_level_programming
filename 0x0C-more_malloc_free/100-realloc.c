#include "main.h"

/**
 * *_realloc - function
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *v;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		v = malloc(new_size);
		if (v == NULL)
			return (NULL);
		return (v);
	}
	if (new_size > old_size)
	{
		v = malloc(new_size);
		if (v == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)v + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (v);
}
