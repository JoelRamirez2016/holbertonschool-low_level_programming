#include <stdlib.h>

/**
 * str_concat - concatenate two strings in newly allocated space in memory
 * @s1: string to concatenate first
 * @s2: string to concatenate second
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i_r, i_s1 = 0, i_s2 = 0, size;
	char *r;

	if (!s1)
		s1 = "";
        if (!s2)
                s2 = "";

	while (s1[i_s1])
		i_s1++;
	while (s2[i_s2])
		i_s2++;

	size = i_s1 + i_s2;
	r = malloc(size);
	i_s1 = i_s2 = 0;

	for (i_r = 0; i_r < size; i_r++)
		if (s1[i_s1])
			r[i_r] = s1[i_s1++];
		else if (s2[i_s2])
			r[i_r] = s2[i_s2++];

	return (r);
}

