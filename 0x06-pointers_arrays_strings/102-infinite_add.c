#include "holberton.h"
/**
 * infinite_add - sum two int values
 * @n1: first value to add
 * @n2: second value to add
 * @r: result of the sum n1 + n2
 * @size_r: length max of the r
 * Return: final resulto for add n1 + n2
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i_n1 = 0, i_n2 = 0, val1 = 0, val2 = 0;
	int acumulador = 0, sum = 0;

	while (n1[i_n1])
		i_n1++;
	while (n2[i_n2])
		i_n2++;

	if (size_r <= i_n1 + 1 || size_r <= i_n2 + 1)
		return (0);

	r[size_r] = '\0';

	while (i_n1 > 0 || i_n2 > 0)
	{
		i_n1--;
		i_n2--;
		size_r--;
		val1 = 0;
		val2 = 0;
		if (i_n1 >= 0)
			val1 = n1[i_n1] - '0';
		if (i_n2 >= 0)
			val2 = n2[i_n2] - '0';
		sum = val1 + val2 + acumulador;
		if (sum < 10)
		{
			r[size_r] = sum + '0';
			acumulador = 0;
		}
		else
		{
			acumulador = sum / 10;
			r[size_r] = (sum % 10) + '0';
		}
	}
	if (acumulador != 0)
		r[--size_r] = acumulador + '0';
	return (r + size_r);
}
