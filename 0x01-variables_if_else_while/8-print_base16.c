#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers base16
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
