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
	int mid;

	if (!array || size == 0)
		return (-1);

	if (size % 2 == 0)
		mid = size / 2;
	else
		mid = (size / 2) + 1;

	printf("size:%lu, mid: %i. ", size, mid);
	print_array(array, size);

	if (value < array[mid])
		return (binary_search(array, mid - 1, value));
	else if (value > array[mid])
		return (binary_search(array + mid, size % 2 == 0 ? mid : mid - 1, value));
	return (mid);
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
