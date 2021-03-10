#include "function_pointers.h"

/**
 * array_iterator - executes a function in each element of an array
 * @array: array in which to operate
 * @size: size of the array
 * @action: function to operate in array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
