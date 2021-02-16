#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int c, size = 0;

	for (c = 0; str[c] != '\0'; c++)
		size++;

	if (size % 2)
		c = (size + 1) / 2;
	else
		c = size / 2;

	while (str[c])
		_putchar(str[c++]);
	_putchar('\n');
}
