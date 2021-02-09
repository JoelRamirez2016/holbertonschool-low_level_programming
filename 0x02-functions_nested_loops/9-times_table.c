#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
	times_table();
	return (0);
}


int times_table(void){
	int m_er, m_cand, col_1 ;
	
	for (m_er=0; m_er < 10; m_er++)
	{
		col_1 = 1;
		
		for (m_cand=0; m_cand < 10; m_cand++)
		{
			int decena = ((m_cand * m_er)/10);
			int unidad = ((m_cand * m_er)%10);
			
			if(col_1 != 1)
			{
				putchar(',');
				putchar(' ');	
			}
			if(col_1 != 1)
				if(decena)
					putchar(decena + '0');
				else
					putchar(' ');
			putchar(unidad + '0');
			col_1++;
		}
		putchar('\n');
	}
	return (0);
}