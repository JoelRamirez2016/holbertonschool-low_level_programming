#include "holberton.h"
/**
 * rot13 - encodes a string into rot13.
 * @s: string to transform
 * Return: the new value of s
 */
char *rot13(char *s)
{
	int i, j;
	char lt[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rp[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == lt[j])
			{
				s[i] = rp[j];
				break;
			}
	return (s);
}

