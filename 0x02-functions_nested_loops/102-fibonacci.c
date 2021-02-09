#include <stdio.h>

/**
 * main - Entry point
 * Description: print the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i; 
	long int nextN, n1 = 1, n2 = 2;

	for (i = 0; i <= 50; i++)
	{
		if (i)
			printf(", %li ", n1);
		else
			printf("%li", n1);
		printf("%li, ", n1);
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;
	}
	return (0);
}
