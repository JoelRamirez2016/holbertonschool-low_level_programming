#include "holberton.h"

/**
 * print_number - print a number in console
 * @n: parameter number to print
 * Return: 1 if c is a digit or 0 otherwise
 */

void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= -10 && n < 0)
	{
		_putchar('-');
		_putchar((n * -1) + '0');
	}
	else if (n < -10)
	{
		_putchar('-');
		print_number((n / 10) * -1);
		_putchar(((n % 10) * -1) + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}

}
