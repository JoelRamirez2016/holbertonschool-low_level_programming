#include "holberton.h"

/**
 * print_number - print a number in console
 * @n: parameter number to print
 * Return: 1 if c is a digit or 0 otherwise
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		print_number( (n / 10) * -1);
		putchar(((n % 10) * -1) + '0');
	}
	else if (n < 10)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
