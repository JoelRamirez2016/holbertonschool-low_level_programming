#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, times, decena, unidad;

	for (times = 0; times <= 10; times++)
	{
		for (i = 0; i <= 14; i++)
		{
			decena = i / 10;
			unidad = i % 10;

			if (decena)
				_putchar(decena + '0');
			_putchar(unidad + '0');
		}
	_putchar('\n');
}
