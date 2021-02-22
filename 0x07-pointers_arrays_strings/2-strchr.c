#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to check value
 * @c: char search in s
 * Return: pointer with value updated.
*/

char *_strchr(char *s, char c)
(
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}

