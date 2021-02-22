#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to check value
 * @needle: string to compare in s
 * Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int w, i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i]; i++)
		for (j = 0, w = i; haystack[w] == needle[j]; j++, w++)
			if (needle[j + 1] == '\0')
				return (haystack + i);
	return (0);
}
