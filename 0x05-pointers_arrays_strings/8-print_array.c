#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a: array to print
 * @n: size of array to print
 */

void print_array(int *a, int n)
{
	int i;

	printf("%i", a[0]);
	for (i = 1; i < n ; i++)
		printf(", %i", *(a + i));
	printf("\n");
}
