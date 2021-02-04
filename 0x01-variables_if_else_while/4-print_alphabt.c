#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print alphabet except q, e
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' || c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
