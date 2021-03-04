#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr_cp, *r;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (!new_size && ptr)
	{
		free(ptr);
		return (0);
	}

	ptr_cp = ptr;
	r = malloc(new_size);

	if (!r)
		return (0);

	for (i = 0; i < old_size; i++)
		r[i] = ptr_cp[i];

	free(ptr);
	return ((void *)r);
}


