#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to create the factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n)
		return (n * factorial(n - 1));
	else
		return (1);
}

