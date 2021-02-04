#include <stdlib.h>

/**
 * main - Entry point
 * Description: print numbers base16
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
		putchar(i);
	for (char c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
