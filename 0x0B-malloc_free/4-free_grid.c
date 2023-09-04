#include "main.h"

/**
 * free_grid - grid previously
 * @grid: pointer
 * @height: pointer
 * Return: value
 */

void free_grid(int **grid, int height)
{
	int m  = 0;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
