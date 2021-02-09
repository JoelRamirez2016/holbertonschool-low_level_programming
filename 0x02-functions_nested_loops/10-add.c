#include <stdio.h>

/**
 * main - Entry point
 * Description: adds two integers 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

int add(int a, int b){
	return (a + b);
}
