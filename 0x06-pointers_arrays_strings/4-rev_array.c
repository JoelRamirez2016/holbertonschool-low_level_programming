#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int c, temp_c;

	for (c = 0; c < n / 2; c++)
	{
		temp_c = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = temp_c;
	}
}
