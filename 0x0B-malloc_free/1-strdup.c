#include <stdlib.h>

/**
 * _strdup - copy a string in new allocated space in memory
 * @str: string to copy
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *r;
	int i = 0, size = 0;

	while (str[size])
		size++;

	r = malloc(size);

	while (str[i])
		r[i] = str[i++];

	return (r);
}
