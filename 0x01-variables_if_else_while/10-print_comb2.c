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
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '9' && j == '9')
				break;
			putchar(",");
			putchar(" ");

		}
	}
	putchar('\n');
	return (0);
}
