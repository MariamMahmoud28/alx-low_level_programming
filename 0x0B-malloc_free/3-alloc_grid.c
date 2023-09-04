#include "main.h"

/**
 * **alloc_grid - returns a pointer
 * @width: pointer
 * @height: pointer
 * Return: value
 */

int **alloc_grid(int width, int height)
{
	int **t, f, m;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < height; f++)
		{
			t[f] = malloc(sizeof(**t) * width);
			if (t[f] == 0)
			{
				/* malloc*/
				while (f--)
					free(t[f]);
				free(t);
				return (NULL);
			}
			for (m = 0; m < width; m++)
				t[f][m] = 0;
		}
	}
	return (t);
}

