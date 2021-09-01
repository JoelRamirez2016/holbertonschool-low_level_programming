#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int md;

	if (!array || size == 0)
		return (-1);

	md = size % 2 == 0 ? (size / 2) - 1: (size / 2);

	print_array(array, size);

	if (value < array[md])
		return (binary_search(array, md, value));
	else if (value > array[md])
		return (binary_search(array + md + 1, size % 2 == 0 ? md + 1 : md, value));
	return (md);
}

/**
 * print_array - print array in stdout
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");

	for (i = 0; array && i < size; i++)
	{
		printf(" %i", array[i]);

		if (i + 1 < size)
			printf(",");
	}
	printf("\n");
}
