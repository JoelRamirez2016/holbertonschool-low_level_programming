#include "holberton.h"

/**
 * rev_string - reverse a string variable
 * @s: string parameter for reverse
 */

void rev_string(char *s)
{
	int c, size = 0;
	char temp_c;

	for (c = 0; s[c] != '\0'; c++)
		size++;

	for (c = 0; c < size / 2; c++)
	{
		temp_c = s[c];
		s[c] = s[size - c - 1];
		s[size - c - 1] = temp_c;
	}
}
