#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: size of av
 * @av: user arguments of the program
 * Return: string with the concatenated arguments.
 */

char *argstostr(int ac, char **av)
{
	int i, j, w, len = 0;
	char *r;

	if (!ac || !av)
		return (0);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	r = malloc(sizeof(char) * (len + 1));

	if (!r)
		return (0);

	for (i = 0, w = 0; i < ac; i++, w++)
	{
		for (j = 0; av[i][j]; j++, w++)
			r[w] = av[i][j];
		r[w] = '\n';
	}

	r[w] = '\0';
	return (r);
}

