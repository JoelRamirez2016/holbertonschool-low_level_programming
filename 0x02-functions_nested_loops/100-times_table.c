#include "holberton.h"

/**
 * times_table - print n times table in certain format 
 * Return: Always 0 (Success)
 */

int times_table(int n){
	if (n > 15 || n < 0)
		return 0;
		
	int m_er, m_cand, col_1;
	
	for (m_er = 0; m_er <= n; m_er++)
	{
		col_1 = 1;
		
		for (m_cand = 0; m_cand <= n; m_cand++)
		{
			int centena = (m_cand * m_er)/100;
			int decena = (m_cand * m_er)/10;
			int unidad = (m_cand * m_er)%10;
			
			if(col_1 != 1)
			{
				putchar(',');
				putchar(' ');	
			}
			if(col_1 != 1){
				if(centena)
					putchar(centena + '0');
				else
					putchar(' ');
				
				if(decena && centena)   
					putchar( (decena/10) + '0');
				else if(decena)
					putchar(decena + '0');
				else
					putchar(' ');
			}
			putchar(unidad + '0');
			col_1++;
		}
		putchar('\n');
	}
	return (0);
}