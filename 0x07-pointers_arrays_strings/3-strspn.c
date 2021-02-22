#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to check value
 * @accept: string to compare in s
 * Return: number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, result = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (result);
	return (result);
}
