#include "holberton.h"

/**
 * times_table - print 9 times table in certain format
 */

void times_table(void)
{
	int m_er, m_cand;

	for (m_er = 0; m_er < 10; m_er++)
	{
		for (m_cand = 0; m_cand < 10; m_cand++)
		{
			int decena = ((m_cand * m_er) / 10);
			int unidad = ((m_cand * m_er) % 10);

			if (m_er)
			{
				_putchar(',');
				_putchar(' ');
				if (decena)
					_putchar(decena + '0');
				else
					_putchar(' ');
			}
			_putchar(unidad + '0');
			col_1++;
		}
		_putchar('\n');
	}
}
