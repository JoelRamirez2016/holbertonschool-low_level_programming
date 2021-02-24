#include "holberton.h"

int _sqrt(int number, int ac);

/**
 *  _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * Return: result of _sqrt fun.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the natural square root of a number
 * @number: number to check
 * @ac: temporal result for check
 * Return: square root of number
 */

int _sqrt(int number, int ac)
{
	int product = ac * ac;

	if (product == number)
		return (ac);
	else if (product > number)
		return (-1);
	return (_sqrt(number, ac + 1));
}
