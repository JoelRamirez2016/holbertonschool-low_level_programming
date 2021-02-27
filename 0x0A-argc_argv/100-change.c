#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints the minimum number of
 * coins to make change for an amount of money
 * @argc: size of program parameters in argv
 * @argv: array of parameters to the program
 * Return: 1 if have not 1 arguments, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i = 0, cents = 0, numCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; cents > 0 && i < 5; i++)
	{
		numCoins = cents / coins[i];
		cents = cents % coins[i];
	}

	printf("%i\n", numCoins);
	return (0);
}
