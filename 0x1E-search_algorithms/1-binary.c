#include "search_algos.h"

void print_array(int *array, size_t size);
int recursive_binary_search(int *array, size_t idx, size_t size, int value);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (recursive_binary_search(array, 0, size, value));
}

/**
 * recursive_binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @idx: index of the value finded
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */
int recursive_binary_search(int *array, size_t idx, size_t size, int value)
{
	int md, next_size_r;

	if (!array || size == 0)
		return (-1);

	md = size % 2 == 0 ? (size / 2) - 1 : (size / 2);
	next_size_r = size % 2 == 0 ? md + 1 : md;

	print_array(array + idx, size);

	if (value < array[idx + md])
		return (recursive_binary_search(array, idx, md, value));
	else if (value > array[idx + md])
		return (recursive_binary_search(array, idx + md + 1, next_size_r, value));
	return (idx);
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
