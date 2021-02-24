#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to check size
 * Return: size of string
 */

int _strlen_recursion(char *s)
{
	if (*s++)
		return (1 + _strlen_recursion(s));
	else
		return (0);
}
