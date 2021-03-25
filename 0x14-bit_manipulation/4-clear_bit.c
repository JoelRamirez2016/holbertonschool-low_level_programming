#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set given index bit
 * @index: index of the bit of the number
 * Return: 1 if it worked, or -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (!*n)
		return (1);

	*n ^= 1 << index;

	return (1);
}
