#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created
 * @grid: matrix to free
 * @height: length of the matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

