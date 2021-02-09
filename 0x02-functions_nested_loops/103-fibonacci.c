#include <stdio.h>

/**
 * main - Entry point
 * Description: print the sum of certain even numbers of
 * fibonacci, starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nextN, sumEven = 0, n1 = 1, n2 = 1;

	while (nextN < 4000000)
	{
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;

		if (nextN <= 4000000 && nextN % 2 == 0)
			sumEven += nextN;
	}
	printf("%i\n", sumEven);
	return (0);
}
