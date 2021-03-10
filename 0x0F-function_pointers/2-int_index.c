#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array in which to look
 * @size: length of array
 * @cmp: check function
 * Return: index of the element finded, otherwise -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
