#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
		printf("%i, ", i);
	for (i = n; i > 98; i--)
		printf("%i, ", i);
	printf("%i\n", i);
}
