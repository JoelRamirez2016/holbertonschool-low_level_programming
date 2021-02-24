#include "holberton.h"

int is_palindrome_check(char *s, int i, int j);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: result of is_palindrome_check fun
 */

int is_palindrome(char *s)
{
	return (is_palindrome_check(s, 0, _strlen_recursion(s) - 1));
}

/**
 * is_palindrome_check - check if a string is a palindrome
 * @s: string to check
 * @i: index to references the inicial char in s
 * @j: index to references the final char in s
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_check(char *s, int i, int j)
{
	if (s[i] == s[j])
		is_palindrome_check(s, i + 1, j - 1);
	else if (i >= j)
		return (1);
	else
		return (0);
}

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
