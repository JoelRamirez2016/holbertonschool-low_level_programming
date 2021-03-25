#include "holberton.h"

/**
 * flip_bits - get number of bits you would need to flip
 * to get from one number to another
 * @n: number check bits
 * @m: number check bits
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r, bits = 0;

	for (r = n ^ m; r > 0 ; r >>= 1)
		bits += r & 1;

	return (bits);
}
