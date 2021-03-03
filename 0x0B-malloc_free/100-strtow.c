#include <stdlib.h>

char *_substring(char *string, int min_i, int max_i);
void free_matrix(char **m, int size);

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: array of string splited
 */

char **strtow(char *str)
{
	int i, j, w = 0, words = 0;
	char **strings;

	if (!str || !str[0])
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
						free_matrix(strings, w);
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
 * free_matrix - frees a 2 dimensional matrix created
 * @m: matrix to free
 * @size: length of the matrix
 */

void free_matrix(char **m, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(m[i]);

	free(m);
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



