#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print all combinations of one digit
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(",");
			putchar(" ");
		}
	}
	putchar('\n');
	return (0);
}
