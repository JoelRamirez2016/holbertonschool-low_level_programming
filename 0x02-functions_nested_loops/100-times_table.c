#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
	// times_table(5);
	// times_table(62);
	times_table(12);
	return (0);
}


int times_table(int n){
	if ( n > 15 || n < 0)
		return 0;
		
	int m_er, m_cand, col_1 ;
	
	for (m_er=0; m_er <= n; m_er++)
	{
		col_1 = 1;
		
		for (m_cand=0; m_cand <=n; m_cand++)
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