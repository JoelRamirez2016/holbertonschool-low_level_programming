#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to update
 * @src: char for update dest
 * @n: the size of the memory to update
 * Return: pointer with value updated.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

