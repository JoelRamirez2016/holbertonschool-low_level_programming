#include "holberton.h"

/**
 * print_last_digit - print last digit
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
