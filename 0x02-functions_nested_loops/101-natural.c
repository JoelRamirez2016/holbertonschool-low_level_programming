#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result = progresion(3) + progresion(5);
	printf("%i", result);
	return (result);
}

int progresion(int n)
{
	int result = 1;
	while (result < 2014)
	{
		result *= n;
	}
	return result;
}