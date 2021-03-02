#include <stdlib.h>

/**
 * _strdup - copy a string in new allocated space in memory
 * @str: string to copy
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *r;
	int i, size = 0;

	while (str[size])
		size++;

	r = malloc(sizeof(char) * size);

	if (!str || !r)
		return (0);

	for (i = 0; i < size; i++)
		r[i] = str[i];

	return (r);
}
