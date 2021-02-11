#include "holberton.h"

/**
 * _isdigit - check if c is a number
 * @c: parameter for check
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
