#include "holberton.h"

/**
 * main - Entry point
 * Description: print Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{
	char txt[] = "Holberton";
	int i = 0;

	for (i = 0; txt[i] != '\0'; ++i)
		_putchar(txt[i]);
	_putchar('\n');
	return (0);
}
