#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print all combination of two digits
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j, k, w;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		    for (k = i; k <= '9'; k++)
		    {
		        for (w = j + 1; w <= '9'; w++)
		        {
        			putchar(i);
        			putchar(j);
                    putchar(' ');
                    putchar(k);
        			putchar(w);
        			putchar(',');
        			putchar(' ');
		        }   
            }
		}
	}
	putchar('\n');
	return (0);
}
