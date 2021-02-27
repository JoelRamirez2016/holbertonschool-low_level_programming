#include <stdio.h>

/**
 * main - entry point
 * Description: multiplies two numbers
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program
 * Return: 1 if have not 2 arguments or more, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j, number, product = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		number = 0;

		for (j = 0; argv[i][j]; j++)
			number = (number * 10) + argv[i][j] - '0';

		product *= number;
	}

	printf("%i\n", product);
	return (0);
}

