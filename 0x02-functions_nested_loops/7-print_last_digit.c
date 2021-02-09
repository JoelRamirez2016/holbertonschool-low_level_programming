#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: number to check
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar(result + '0');

	return (result);
}
