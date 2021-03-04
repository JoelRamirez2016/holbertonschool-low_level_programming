#include <stdlib.h>

/**
 * _calloc - allocates memory for an array set to 0
 * @nmemb: number of elements of array
 * @size: size of the element to store
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p_array;

	if (nmemb == 0 || size == 0)
		return (0);

	p_array = malloc(nmemb * size);

	if (!p_array)
		return (0);

	for (i = 0; i < nmemb; i++)
		p_array[i] = 0;

	return ((void *) p_array);
}
