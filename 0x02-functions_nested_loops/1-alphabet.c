#include <stdlib.h>
#include <_putchar.h>
/**
 * main - Entry point
 * Description: print alphabet lowercase
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
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