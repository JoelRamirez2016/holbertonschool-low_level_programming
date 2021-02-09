#include <stdio.h>

/**
 * main - Entry point
 * Description:  
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, overflow;
	unsigned long int nextN, n1 = 1, n2 = 2;
	unsigned long int n1_top, n1_bot, n2_top, n2_bot, nextN_top, nextN_bot;

	for (i = 0; i < 91; i++)
	{
		if (i)
			printf(", %li", n1);
		else
			printf("%li", n1);
		nextN = n1 + n2;
		n1 = n2;
		n2 = nextN;
	}
	n1_top = n1 / 1000000000;
	n1_bot = n1 % 1000000000;
	n2_top = n2 / 1000000000;
	n2_bot = n2 % 1000000000;

	for (; i < 99; i++)
	{
		overflow = (n1_bot + n2_bot) / 1000000000;
		
		nextN_top = (n1_top + n2_top) + overflow;
        nextN_bot = (n1_bot + n2_bot) - (1000000000 * overflow);
        
		printf(", %li%li", nextN_top);

		n1_top = n2_top;
		n1_bot = n2_bot;
		n2_top = nextN_top;
		n2_bot = nextN_bot;
	}

    // printf(", %lu%lu", nextN_top, nextN_bot);
    
	printf("\n");
	return (0);
}
