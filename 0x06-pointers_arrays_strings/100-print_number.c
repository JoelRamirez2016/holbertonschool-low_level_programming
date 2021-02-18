#include "holberton.h"
/**
 * print_number - print a number in console
 * @n: parameter number to print
 * Return: the new value of s
 */
void print_number(int n)
{
	int number_h = n / 10;
	int last_d = n % 10;

	if (n < 0)
	{
		_putchar('-');
		number_h = -number_h;
		last_d = -last_d;
	}

	if (number_h)
		print_number(number_h);

	_putchar(last_d + '0');
}

