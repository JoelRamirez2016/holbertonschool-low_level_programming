#include <stdlib.h>

/**
 * create_array - create array initialized with c in every position
 * @size: max length of array
 * @c: character to set every position
 * Return: pointer to first element of array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *) malloc(size);

	for (i = 0; i < size ; i++)
		array[i] = c;

	return (array);
}
