#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created alloc_grid function.
 *@grid: heights
 *@height: width
 * Return: points to 2 dimensional array of integers
 * whenor true and null when false
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
