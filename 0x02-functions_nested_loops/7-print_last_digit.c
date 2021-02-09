#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: number to check
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
