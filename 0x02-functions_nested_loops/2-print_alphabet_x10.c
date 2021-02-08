#include <stdlib.h>

/**
 * main - Entry point
 * Description: print alphabet lowercase 10 times
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
		print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}