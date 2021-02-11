#include <stdio.h>

/**
 * main - Entry point
 * Description: print number from 1 to 100, replaces multiplies
 * of 3, 5 for fizz, buzz respectly
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if (!(i % 3))
			printf("%s","Fizz");
		if (!(i % 5))
			printf("%s","Buzz");
		if (i % 5 && i % 3)
			printf("%i", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
