#include "holberton.h"

/**
 * print_times_table - print n times table in certain format
 * @n: parameter for table times
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int m_er, m_cand, col_1;

	for (m_er = 0; m_er <= n; m_er++)
	{
		col_1 = 1;

		for (m_cand = 0; m_cand <= n; m_cand++)
		{
			int centena = (m_cand * m_er) / 100;
			int decena = (m_cand * m_er) / 10;
			int unidad = (m_cand * m_er) % 10;

			if (col_1 != 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (col_1 != 1)
			{
				if (centena)
					_putchar(centena + '0');
				else
					_putchar(' ');
				if (decena && centena)
					_putchar((decena / 10) + '0');
				else if (decena)
					_putchar(decena + '0');
				else
					_putchar(' ');
			}
			_putchar(unidad + '0');
			col_1++;
		}
		_putchar('\n');
	}
	return (0);
}
