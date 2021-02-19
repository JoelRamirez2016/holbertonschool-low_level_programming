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

	for (i = 0; i < size; i += 10, b += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j += 2)
			if (j + i < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
				printf("     ");

		for (j = 0; j < 10 && j + i < size; j++)
			printf("%c", (b[j] >= 32) ? b[j] : '.');

		printf("\n");
	}
}
