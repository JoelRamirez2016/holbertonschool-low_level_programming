#include "holberton.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to check the index
 * @index: index of the bit in a number
 * Return: value of the bit at index, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n & 1 << index)
		return (1);
	return (0);
}
