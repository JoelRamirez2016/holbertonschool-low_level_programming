#include <stdio.h>

/**
 * main - Entry point
 * Description: prints every minute of the day of Jack Bauer 
 * Return: Always 0 (Success)
 */
int main(void)
{
	jack_bauer();
	return (0);
}


int jack_bauer(void){
	int h, m;
	for (h=00; h < 24 ;h++)
	{
		for (m=0; m < 60 ; m++)
		{
			putchar((h / 10) + 48);
			putchar((h % 10) + 48);
			putchar(':');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);
			putchar('\n');
		}
		
	}
	return (0);
}