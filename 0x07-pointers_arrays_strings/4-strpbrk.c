#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to check value
 * @accept: string to compare in s
 * Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, result = 0;

	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (s[j] == accept[i] && (result > j || result == 0))
			{
				result = j;
				break;
			}
	return (s + result);
}
