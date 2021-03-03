#include <stdlib.h>

char *_substring(char *string, int min_i, int max_i);

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: array of string splited
 */

char **strtow(char *str)
{
	int i, j, w = 0, words = 0;
	char **strings;

	if (!*str)
		return (0);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			for (j = i; str[j]; j++)
				if (str[j] == ' ' || !str[j + 1])
				{
					i = j;
					words++;
					break;
				}

	strings = malloc(sizeof(char *) * (words + 1));

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			for (j = i; str[j]; j++)
				if (str[j] == ' ' || !str[j + 1])
				{
					if (!str[j + 1])
						strings[w] = _substring(str, i, j + 1);
					else
						strings[w] = _substring(str, i, j);

					if (!strings[w])
					{
						for (; w >= 0; w--)
							free(strings[w]);
						free(strings);
						return (0);
					}
					w++;
					i = j;
					break;
				}
	strings[w] = NULL;
	return (strings);
}

/**
 * _substring - create a sub string with original string and indexs
 * @string: original string to search substring
 * @min_i: index to start substring
 * @max_i: index to finished substring
 * Return: substring
 */

char *_substring(char *string, int min_i, int max_i)
{
	char *substring;
	int i;

	if (min_i > max_i)
		return (0);

	substring = malloc(sizeof(char) * (max_i - min_i + 1));

	if (!substring)
		return (0);
	for (i = 0; min_i < max_i &&  i < max_i; min_i++, i++)
		substring[i] = string[min_i];
	substring[i] = '\0';

	return (substring);
}



