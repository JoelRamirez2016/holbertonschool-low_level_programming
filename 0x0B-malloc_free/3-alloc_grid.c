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
	int **p_matrix;

	if (width <= 0 || height <= 0)
		return (0);

	p_matrix = (int **)malloc(height * sizeof(int *));

	if (!p_matrix)
		return (0);

	for (i = 0; i < height; i++)
	{
		p_matrix[i] = (int *)malloc(width * sizeof(int));

		if (!p_matrix[i])
		{
			for (; i >= 0; i--)
				free(p_matrix[i]);
			free(p_matrix);
			return (0);
		}

		for (j = 0; j < width; j++)
			p_array[j] = 0;

		p_matrix[i] = p_array;
	}
	return (p_matrix);
}
