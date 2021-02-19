#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < 10 + i; j += 2)
			if (j < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
				printf("     ");

		for (j = i; j < 10 + i && j < size; j++)
			if (b[j] >= 31 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf("%c", '.');

		printf("\n");
	}
}
