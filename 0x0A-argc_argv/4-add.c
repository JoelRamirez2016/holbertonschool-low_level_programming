#include <stdio.h>

/**
 * main - entry point
 * Description: adds positive numbers
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program
 * Return: 1 if no number is detected, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j, number, sum = 0;

	for (i = 1; i < argc; i++)
	{
		number = 0;

		for (j = 0; argv[i][j]; j++)
			if ('0' <= argv[i][j] && argv[i][j] <= '9')

				number = (number * 10) + argv[i][j] - '0';

			else
			{
				printf("Error\n");
				return (1);
			}

			sum += number;
	}

	printf("%i\n", sum);
	return (0);
}
