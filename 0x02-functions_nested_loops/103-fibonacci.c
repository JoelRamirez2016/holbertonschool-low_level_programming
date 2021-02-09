#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, nextN, sumEven, n1 = 1, n2 = 2;
	
	for (i = 0; i <= 50; i++)
	{
		if(sumEven <= 4000000 && sumEven % 2 == 0)
			sumEven += n1;
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;
	}
	
	printf("%li, ", n1);
	
	return (0);
}