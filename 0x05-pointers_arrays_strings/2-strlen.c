#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check the size
 * Return: size of string
 */

int _strlen(char *s)
{
	int c, size;

	for (c = 0; s[c] != '\0'; c++)
		size++;
	return (size);
}
