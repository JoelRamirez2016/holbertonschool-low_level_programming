#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int c, size;

	for (c = 0; s[c] != '\0'; c++)
		size++;
	for (c = size; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
