#include "holberton.h"

/**
 * print_to_98 - print 9 times table in certain format
 * @n: starting number
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
		printf("%i, ", i);
	for (i = n; i > 98; i--)
		printf("%i, ", i);
	printf("98\n");
}
