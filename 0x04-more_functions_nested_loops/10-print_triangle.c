#include "holberton.h"

/**
 * print_triangle - print a right triangle
 * @size: parameter for size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if (j + i < size - 1)
				_putchar(' ');
			else
				_putchar('#');
		putchar('\n');
	}
}
