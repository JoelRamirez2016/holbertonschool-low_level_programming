#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number in string format
 * Return: number convert to int, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, r = 0, size = 0;

	if (!b)
		return (0);

	while (b[i++])
		size++;

	for (i = size - 1; i >= 0; i--)
		if (b[size - 1 - i] == '1')
			r |= 1 << i;
		else if (b[size - 1 - i] < '0' || b[size - 1 - i] > '1')
			return (0);
	return (r);
}
