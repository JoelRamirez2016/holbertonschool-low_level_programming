#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j, w, len = 0;
	char *r;

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	r = malloc(len);

	for (i = 0, w = 0; i < ac; i++, w++)
	{
		for (j = 0; av[i][j]; j++, w++)
			r[w] = av[i][j];
		r[w] = '\n';
	}

	return (r);
}

