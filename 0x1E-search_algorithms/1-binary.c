#include "search_algos.h"

void print_array (int *array, size_t size);
/*int recursive_binary_search(int *array, size_t index, size_t size, int value);*/

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	print_array(array, size);

	if (value < array[size / 2])
		return (binary_search(array, size / 2 - 1, value));
	else if (value > array[size / 2])
		return (binary_search(array + size / 2 + 1, size - size / 2 - 1, value));
	return (size / 2);
}
/*
int recursive_binary_search(int *array, size_t index, size_t size, int value)
{
	if (size == 0)
		return (-1);

	print_array(array, size);

	if (value < array[size / 2])
		return (recursive_binary_search(array, 0, index, value));
	else if (value > array[size / 2])
		return (recursive_binary_search(array + size / 2, size / 2, size, value));
	else
		return (index);
}
*/
void print_array (int *array, size_t size)
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
