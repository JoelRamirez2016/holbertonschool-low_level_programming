#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, nextN, n1 = 1, n2 = 2;
	
	for (i = 0; i <= 50; i++)
	{
		printf("%li, ", n1);
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;
	}
	return (0);
}