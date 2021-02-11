#include "holberton.h"

/**
 * print_line - print straight line n times
 * @n: parameter for times to print
 * Return: 1 if c is a digit or 0 otherwise
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
