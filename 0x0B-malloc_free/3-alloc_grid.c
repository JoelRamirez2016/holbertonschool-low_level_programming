#include <stdlib.h>

/**
 * alloc_grid - create a matrix
 * @width: width of the grid
 * @height: height of the grid
 * Return: matrix.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int *p_array;
	int **p_matrix;

	p_matrix = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		p_array = (int *)malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
			p_array[j] = 0;

		p_matrix[i] = p_array;
	}
	return (p_matrix);
}

