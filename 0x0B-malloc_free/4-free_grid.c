#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @height: height of teh grid
 * @grid: the grid
 */

void free_grid(int **grid, int height)
{
	int j;


	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}