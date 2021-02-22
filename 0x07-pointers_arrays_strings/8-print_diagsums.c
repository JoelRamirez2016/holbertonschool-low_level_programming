#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix
 * @a: array with the matrix
 * @size: size matrix square
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j, r1 = 0, r2 = 0, mx_s = size * size;

	for (i = 0, j = size - 1; i < mx_s && j < mx_s; i += size + 1, j += size - 1)
	{
		r1 += a[i];
		r2 += a[j];
	}
	printf("%i, %i\n", r1, r2);
}
