#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);
void mult_one(char n, char *n2, char *r, int len_n2, int max_size, int zs);
char *multiplicar(char *n1, char *n2);
int checkDigits(char *s);

/**
 * _calloc - inicializate a block memory with '0'
 *
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p_array;

	if (nmemb == 0 || size == 0)
		return (0);

	p_array = malloc(nmemb * size);

	if (!p_array)
		return (0);

	for (i = 0; i < nmemb * size; i++)
		p_array[i] = '0';
	p_array[i] = '\0';
	return ((void *) p_array);
}

void mult_one(char n, char *n2, char *r, int len_n2, int max_size, int zs)
{
	int i, j, suma, mul, val1, val2, a_m = 0, a_s = 0;

	for (i = len_n2 - 1, j = 1; i >= 0; i--, j++)
	{
		val1 = n - '0';
		val2 = n2[i] - '0';
		mul = (val1 * val2) + a_m;
		a_m = mul / 10;
		suma = r[max_size - zs - j] - '0' + (mul % 10) + a_s;
		a_s = suma / 10;
		r[max_size - zs - j] = (suma % 10) + '0';
	}
	r[max_size - zs - j] = (a_m + a_s - (r[max_size - zs - j] - '0')) + '0';
}

char *multiplicar(char *n1, char *n2)
{
	int i, size_res, len_n1 = 0, len_n2 = 0, zeros = 0;
	char *resultado;

	while (n1[len_n1])
		len_n1++;

	while (n2[len_n2])
		len_n2++;

	size_res = len_n1 + len_n2;
	resultado = _calloc(size_res, sizeof(char));

	for (i = len_n1 - 1; i >= 0; i--, zeros++)
		mult_one(n1[i], n2, resultado, len_n2, size_res, zeros);

	return (resultado);
}

int checkDigits(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);

	return (1);
}

int main(int argc, char *argv[])
{
	char *r;

	if (argc != 3 || !checkDigits(argv[1]) || !checkDigits(argv[2]))
	{
		printf("Error");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}

	r = multiplicar(argv[1], argv[2]);

	if (r[0] == '0')
		printf("%s\n", r + 1);
	else
		printf("%s\n", r);

	free(r);
	return (0);
}

