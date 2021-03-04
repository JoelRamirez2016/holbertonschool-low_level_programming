#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number to star
 * @max: maximum number to finish
 * Return: pointer of thepointer of the array
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *p_array;

	if (min > max)
		return (0);

	p_array = malloc(sizeof(int) * (max + 1));

	if (!p_array)
		return (0);

	for (i = 0; i <= max; i++)
		p_array[i] = min + i;

	return (p_array);
}
