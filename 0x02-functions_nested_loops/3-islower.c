#include <stdlib.h>

/**
 * main - Entry point
 * Description: check lowercase character 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r;

	r = _islower('H');
	printf("%i", r);
	r = _islower('o');
	printf("%i", r);
	return (0);
}

int _islower(int c)
{
	return ( c > 96 && c < 123 );   
}
