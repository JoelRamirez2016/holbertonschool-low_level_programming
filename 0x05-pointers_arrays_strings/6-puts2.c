#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int c, size = 0;

	for (c = 0; str[c] != '\0'; c++)
		size++;
	for (c = 0; c < size ; c += 2)
		_putchar(*(str + c));
	_putchar('\n');
}
