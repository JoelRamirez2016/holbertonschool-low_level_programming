#include "holberton.h"

/**
 * _isalpha - check character
 * @c: character to check
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	return ((c > 65 && c < 90) || (c > 96 && c < 123));
}
