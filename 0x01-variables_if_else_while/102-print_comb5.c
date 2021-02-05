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
				for (w = '0'; w <= '9'; w++)
				{
					if (i >= k && j >= w)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(w);

					if (i != '9' || j != '8' || k != '9' || w != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
