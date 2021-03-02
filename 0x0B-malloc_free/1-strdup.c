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

	if (str == NULL)
		return (0);

	while (str[size])
		size++;

	r = malloc(sizeof(char) * (size + 1));

	if (r == NULL)
		return (0);

	for (i = 0; str[i]; i++)
		r[i] = str[i];

	r[i] = '\0';

	return (r);
}
