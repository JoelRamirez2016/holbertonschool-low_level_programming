#include "holberton.h"

/**
 * swap_int - swap values of two vars
 * @a: int to swap value to b
 * @b: int to swap value to a
 */

void swap_int(int *a, int *b)
{
	int temp_a = *a;

	*a = *b;
	*b = temp_a;
}
