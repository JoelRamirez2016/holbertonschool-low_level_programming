#include "holberton.h"

/**
 * print_alphabet - print alphabet lowercase 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
}
