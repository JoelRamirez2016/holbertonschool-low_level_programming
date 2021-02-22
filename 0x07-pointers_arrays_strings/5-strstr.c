#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to check value
 * @needle: string to compare in s
 * Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, result = 0;

	while (needle[i])
	{
		if (haystack[j] == needle[i])
		{
			if (result == 0)
				result = j;
			i++;
		}
		j++;
	}
	return (haystack + result);
}

