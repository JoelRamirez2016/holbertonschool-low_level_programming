#include <stdlib.h>

/**
 * malloc_checked - allocates memory using
 * @b: size of the memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (!r)
		exit(98);

	return (r);
}

