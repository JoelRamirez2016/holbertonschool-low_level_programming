#include <stdio.h>

/**
 * main - Entry point
 * Description:  
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, overflow;
	unsigned long nextN = 0, n1 = 1, n2 = 1;
	unsigned long n1_top, n1_bot, n2_top, n2_bot, nextN_top, nextN_bot;

	printf("1");
	for (i = 2; i < 92; i++)
	{
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;
		printf(", %li", nextN);
	}
	n1_top = n1 / 1000000000;
	n1_bot = n1 % 1000000000;
	n2_top = n2 / 1000000000;
	n2_bot = n2 % 1000000000;

	do {
		overflow = (n1_bot + n2_bot) / 1000000000;
		nextN_top = (n1_top + n2_top) + overflow;
		nextN_bot = (n1_bot + n2_bot) - (1000000000 * overflow);

		printf(", %lu%lu", nextN_top, nextN_bot);

		n1_top = n2_top;
		n1_bot = n2_bot;
		n2_top = nextN_top;
		n2_bot = nextN_bot;
        	i++;
	}while (i < 99);
	
	printf("\n");
	return (0);
}
