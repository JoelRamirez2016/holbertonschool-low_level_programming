#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @s: string to transform
 * Return: the new value of s
 */
char *leet(char *s)
{
	int i, j;
	char lt[5] = {'a', 'e', 'o', 'l', 't'};
	char rp[5] = {'4', '3', '0', '1', '7'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == lt[j] || s[i] == (lt[j] - 32))
				s[i] = rp[j];
	return (s);
}
