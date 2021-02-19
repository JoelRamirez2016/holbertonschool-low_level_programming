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
	int i_n1, i_n2, acumulador = 0, sum, temp_i;
	char *temp_n;

	while (n1[i_n1])
		i_n1++;
	while (n2[i_n2])
		i_n2++;
	r[size_r] = '\0';
	if (i_n2 > i_n1)
	{
		temp_n = n1;
		temp_i = i_n1;
		n1 = n2;
		n2 = temp_n;
		i_n1 = i_n2;
		i_n2 = temp_i;
	}
	while (i_n1-- > 0)
	{
		if (--i_n2 < 0)
			sum = n1[i_n1] + acumulador - '0';
		else
			sum = n1[i_n1] + n2[i_n2] + acumulador - 2 * '0';

		if (sum < 10)
		{
			r[--size_r] = sum + '0';
			acumulador = 0;
		}
		else
		{
			acumulador = sum / 10;
			r[--size_r] = (sum % 10) + '0';
		}
	}
	if (acumulador != 0)
		r[--size_r] = acumulador + '0';
	return (r + size_r);
}
