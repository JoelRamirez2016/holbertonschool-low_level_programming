#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

void main(void)
{
	unsigned long number = 612852475143;
	unsigned long divisor = 2;

	while (divisor < number)
	{
		if (!(number % divisor))
		{
			number /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu\n", number);
	return (0);
}
